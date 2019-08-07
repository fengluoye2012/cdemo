//
// Created by 风落叶 on 2019-08-04.
//

#include "iostream"
#include "stdio.h"
#include "FFmpegTest.h"
#include "string.h"

extern "C" {
#include "libavformat/avformat.h"
#include "libavutil/log.h"
}

using namespace std;
using std::string;

#define __STDC_CONSTANT_MACROS
#define __STDC_CONSTANT_MACROS

//FFmpeg日志 error,warn,info,debug四种；
void FFmpegTest::ffmpeg_log() {
    //打印该级别之上的日志
    av_log_set_level(AV_LOG_DEBUG);

    //打印log
    av_log(NULL, AV_LOG_INFO, "hello");

}

//文件删除，重命名；
void FFmpegTest::deleteOrRenameFile() {


    int ret_move;

    //重命名
    ret_move = avpriv_io_move("/Users/fengluoye/Desktop/Vedio/ffmpeg_test/1111.rtf",
                              "/Users/fengluoye/Desktop/Vedio/ffmpeg_test/222.rtf");

    if (ret_move < 0) {
        av_log(NULL, AV_LOG_ERROR, "MOVE FAILE\n");
        return;
    }
    av_log(NULL, AV_LOG_INFO, "MOVE SUCCESS\n");

    int ret;
    //删除
    ret = avpriv_io_delete("/Users/fengluoye/Desktop/Vedio/ffmpeg_test/logo.jpeg");

    if (ret < 0) {
        av_log(NULL, AV_LOG_ERROR, "Failed to do");
        return;
    }
    av_log(NULL, AV_LOG_INFO, "Success");
}

//FFmpeg 文件读写  ls
void FFmpegTest::dirTest() {
    av_log_set_level(AV_LOG_INFO);

    AVIODirContext *ctx = NULL;
    AVIODirEntry *entry = NULL;
    int ret;
    ret = avio_open_dir(&ctx, "/Users/fengluoye/Desktop/Vedio/ffmpeg_test/dirtest", NULL);
    if (ret < 0) {
        av_log(NULL, AV_LOG_ERROR, "Fail open dir");
        return;
    }

    while (1) {
        ret = avio_read_dir(ctx, &entry);
        if (ret < 0) {
            av_log(NULL, AV_LOG_ERROR, "Fail read dir");
            goto __fail;
        }

        //entry 为null，表明到末尾；
        if (!entry) {
            break;
        }

        av_log(NULL, AV_LOG_INFO, "name==%s,,size==%d\n", entry->name, entry->size);

        //释放entry；
        avio_free_directory_entry(&entry);
    }
    //goto标签
    __fail:
    avio_close_dir(&ctx);
}

//打印音视频信息；
void FFmpegTest::printInfo() {
    //初始化log
    av_log_set_level(AV_LOG_INFO);

    av_register_all();

    AVFormatContext *fmt_ctx = NULL;

    int ret;


    char *urlName = "/Users/fengluoye/Desktop/Vedio/ffmpeg_test/water_scale.mp4";
    char *outPut = "/Users/fengluoye/Desktop/Vedio/ffmpeg_test/water_scale_test.aac";

    //1 打开文件
    ret = avformat_open_input(&fmt_ctx, urlName, NULL, NULL);

    if (ret < 0) {
        av_log(NULL, AV_LOG_ERROR, "cannot open file");
        return;
    }

    FILE *dst_fd = fopen(outPut, "wb");
    if (!dst_fd) {
        avformat_close_input(&fmt_ctx);
        return;
    }

    //打印多媒体mata信息；
    av_dump_format(fmt_ctx, 0, urlName, 0);

    //2 获取stream
    ret = av_find_best_stream(fmt_ctx, AVMEDIA_TYPE_AUDIO, -1, -1, NULL, 0);

    if (ret < 0) {
        avformat_close_input(&fmt_ctx);
        fclose(dst_fd);
        av_log(NULL, AV_LOG_WARNING, "获取流失败");
        return;
    }

    AVPacket pkt;
    av_init_packet(&pkt);

    //0 音频
    int audio_index = ret;
    size_t length;
    while (av_read_frame(fmt_ctx, &pkt) >= 0) {
        if (pkt.stream_index == audio_index) {
            //需要加adts_header;

            //3 写音频文件；
            length = fwrite(pkt.data, 1, pkt.size, dst_fd);

            if (length != pkt.size) {
                av_log(NULL, AV_LOG_WARNING, "丢失数据");
            }
            av_packet_unref(&pkt);
        }
    }

    avformat_close_input(&fmt_ctx);

    if(dst_fd){
        fclose(dst_fd);
    }
}

