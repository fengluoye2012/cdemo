# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = "/Users/fengluoye/Desktop/c project/cdemo"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/cdemo.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/cdemo.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/cdemo.dir/flags.make

CMakeFiles/cdemo.dir/student/Freshman.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/student/Freshman.cpp.o: ../student/Freshman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/cdemo.dir/student/Freshman.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/student/Freshman.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/student/Freshman.cpp"

CMakeFiles/cdemo.dir/student/Freshman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/student/Freshman.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/student/Freshman.cpp" > CMakeFiles/cdemo.dir/student/Freshman.cpp.i

CMakeFiles/cdemo.dir/student/Freshman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/student/Freshman.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/student/Freshman.cpp" -o CMakeFiles/cdemo.dir/student/Freshman.cpp.s

CMakeFiles/cdemo.dir/student/HighStudent.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/student/HighStudent.cpp.o: ../student/HighStudent.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/cdemo.dir/student/HighStudent.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/student/HighStudent.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/student/HighStudent.cpp"

CMakeFiles/cdemo.dir/student/HighStudent.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/student/HighStudent.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/student/HighStudent.cpp" > CMakeFiles/cdemo.dir/student/HighStudent.cpp.i

CMakeFiles/cdemo.dir/student/HighStudent.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/student/HighStudent.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/student/HighStudent.cpp" -o CMakeFiles/cdemo.dir/student/HighStudent.cpp.s

CMakeFiles/cdemo.dir/main.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Building CXX object CMakeFiles/cdemo.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/main.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/main.cpp"

CMakeFiles/cdemo.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/main.cpp" > CMakeFiles/cdemo.dir/main.cpp.i

CMakeFiles/cdemo.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/main.cpp" -o CMakeFiles/cdemo.dir/main.cpp.s

CMakeFiles/cdemo.dir/student/Student.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/student/Student.cpp.o: ../student/Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_4) "Building CXX object CMakeFiles/cdemo.dir/student/Student.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/student/Student.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/student/Student.cpp"

CMakeFiles/cdemo.dir/student/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/student/Student.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/student/Student.cpp" > CMakeFiles/cdemo.dir/student/Student.cpp.i

CMakeFiles/cdemo.dir/student/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/student/Student.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/student/Student.cpp" -o CMakeFiles/cdemo.dir/student/Student.cpp.s

CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.o: ../student/StudentManagerHelper.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_5) "Building CXX object CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/student/StudentManagerHelper.cpp"

CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/student/StudentManagerHelper.cpp" > CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.i

CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/student/StudentManagerHelper.cpp" -o CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.s

CMakeFiles/cdemo.dir/LinkTest.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/LinkTest.cpp.o: ../LinkTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_6) "Building CXX object CMakeFiles/cdemo.dir/LinkTest.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/LinkTest.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/LinkTest.cpp"

CMakeFiles/cdemo.dir/LinkTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/LinkTest.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/LinkTest.cpp" > CMakeFiles/cdemo.dir/LinkTest.cpp.i

CMakeFiles/cdemo.dir/LinkTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/LinkTest.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/LinkTest.cpp" -o CMakeFiles/cdemo.dir/LinkTest.cpp.s

CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.o: ../thread_test/ThreadTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_7) "Building CXX object CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/thread_test/ThreadTest.cpp"

CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/thread_test/ThreadTest.cpp" > CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.i

CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/thread_test/ThreadTest.cpp" -o CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.s

CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.o: ../pointer/PointerTest.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_8) "Building CXX object CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/pointer/PointerTest.cpp"

CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/pointer/PointerTest.cpp" > CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.i

CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/pointer/PointerTest.cpp" -o CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.s

CMakeFiles/cdemo.dir/interface_test/Action.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/interface_test/Action.cpp.o: ../interface_test/Action.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_9) "Building CXX object CMakeFiles/cdemo.dir/interface_test/Action.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/interface_test/Action.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Action.cpp"

CMakeFiles/cdemo.dir/interface_test/Action.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/interface_test/Action.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Action.cpp" > CMakeFiles/cdemo.dir/interface_test/Action.cpp.i

CMakeFiles/cdemo.dir/interface_test/Action.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/interface_test/Action.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Action.cpp" -o CMakeFiles/cdemo.dir/interface_test/Action.cpp.s

CMakeFiles/cdemo.dir/interface_test/Bird.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/interface_test/Bird.cpp.o: ../interface_test/Bird.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_10) "Building CXX object CMakeFiles/cdemo.dir/interface_test/Bird.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/interface_test/Bird.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Bird.cpp"

CMakeFiles/cdemo.dir/interface_test/Bird.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/interface_test/Bird.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Bird.cpp" > CMakeFiles/cdemo.dir/interface_test/Bird.cpp.i

CMakeFiles/cdemo.dir/interface_test/Bird.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/interface_test/Bird.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Bird.cpp" -o CMakeFiles/cdemo.dir/interface_test/Bird.cpp.s

CMakeFiles/cdemo.dir/interface_test/Fish.cpp.o: CMakeFiles/cdemo.dir/flags.make
CMakeFiles/cdemo.dir/interface_test/Fish.cpp.o: ../interface_test/Fish.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_11) "Building CXX object CMakeFiles/cdemo.dir/interface_test/Fish.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/cdemo.dir/interface_test/Fish.cpp.o -c "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Fish.cpp"

CMakeFiles/cdemo.dir/interface_test/Fish.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cdemo.dir/interface_test/Fish.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Fish.cpp" > CMakeFiles/cdemo.dir/interface_test/Fish.cpp.i

CMakeFiles/cdemo.dir/interface_test/Fish.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cdemo.dir/interface_test/Fish.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/cdemo/interface_test/Fish.cpp" -o CMakeFiles/cdemo.dir/interface_test/Fish.cpp.s

# Object files for target cdemo
cdemo_OBJECTS = \
"CMakeFiles/cdemo.dir/student/Freshman.cpp.o" \
"CMakeFiles/cdemo.dir/student/HighStudent.cpp.o" \
"CMakeFiles/cdemo.dir/main.cpp.o" \
"CMakeFiles/cdemo.dir/student/Student.cpp.o" \
"CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.o" \
"CMakeFiles/cdemo.dir/LinkTest.cpp.o" \
"CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.o" \
"CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.o" \
"CMakeFiles/cdemo.dir/interface_test/Action.cpp.o" \
"CMakeFiles/cdemo.dir/interface_test/Bird.cpp.o" \
"CMakeFiles/cdemo.dir/interface_test/Fish.cpp.o"

# External object files for target cdemo
cdemo_EXTERNAL_OBJECTS =

cdemo: CMakeFiles/cdemo.dir/student/Freshman.cpp.o
cdemo: CMakeFiles/cdemo.dir/student/HighStudent.cpp.o
cdemo: CMakeFiles/cdemo.dir/main.cpp.o
cdemo: CMakeFiles/cdemo.dir/student/Student.cpp.o
cdemo: CMakeFiles/cdemo.dir/student/StudentManagerHelper.cpp.o
cdemo: CMakeFiles/cdemo.dir/LinkTest.cpp.o
cdemo: CMakeFiles/cdemo.dir/thread_test/ThreadTest.cpp.o
cdemo: CMakeFiles/cdemo.dir/pointer/PointerTest.cpp.o
cdemo: CMakeFiles/cdemo.dir/interface_test/Action.cpp.o
cdemo: CMakeFiles/cdemo.dir/interface_test/Bird.cpp.o
cdemo: CMakeFiles/cdemo.dir/interface_test/Fish.cpp.o
cdemo: CMakeFiles/cdemo.dir/build.make
cdemo: CMakeFiles/cdemo.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_12) "Linking CXX executable cdemo"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cdemo.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/cdemo.dir/build: cdemo

.PHONY : CMakeFiles/cdemo.dir/build

CMakeFiles/cdemo.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/cdemo.dir/cmake_clean.cmake
.PHONY : CMakeFiles/cdemo.dir/clean

CMakeFiles/cdemo.dir/depend:
	cd "/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/fengluoye/Desktop/c project/cdemo" "/Users/fengluoye/Desktop/c project/cdemo" "/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug" "/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug" "/Users/fengluoye/Desktop/c project/cdemo/cmake-build-debug/CMakeFiles/cdemo.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/cdemo.dir/depend

