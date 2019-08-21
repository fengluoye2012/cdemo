////
//// Created by 风落叶 on 2019-08-04.
////
//
//
//#include "stdio.h"
//#include "FFmpegTest.h"
//
//extern "C" {
//#include "libavformat/avformat.h"
//#include "libavutil/log.h"
//}
//
//#define __STDC_CONSTANT_MACROS
//#define __STDC_CONSTANT_MACROS
//
////FFmpeg日志 error,warn,info,debug四种；
//void FFmpegTest::ffmpeg_log() {
//    //打印该级别之上的日志
//    av_log_set_level(AV_LOG_DEBUG);
//
//    //打印log
//    av_log(NULL, AV_LOG_INFO, "hello");
//
//}
//
////文件删除，重命名；
//void FFmpegTest::deleteOrRenameFile() {
//
//
//    int ret_move;
//
//    //重命名
//    ret_move = avpriv_io_move("/Users/fengluoye/Desktop/Vedio/ffmpeg_test/1111.rtf",
//                              "/Users/fengluoye/Desktop/Vedio/ffmpeg_test/222.rtf");
//
//    if (ret_move<0) {
//        av_log(NULL,AV_LOG_ERROR,"MOVE FAILE\n");
//        return;
//    }
//    av_log(NULL,AV_LOG_INFO,"MOVE SUCCESS\n");
//
//    int ret;
//    //删除
//    ret = avpriv_io_delete("/Users/fengluoye/Desktop/Vedio/ffmpeg_test/logo.jpeg");
//
//    if (ret < 0) {
//        av_log(NULL, AV_LOG_ERROR, "Failed to do");
//        return;
//    }
//    av_log(NULL, AV_LOG_INFO, "Success");
//}
