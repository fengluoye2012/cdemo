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
CMAKE_SOURCE_DIR = "/Users/fengluoye/Desktop/c project/CTest"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/CTest.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/CTest.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/CTest.dir/flags.make

CMakeFiles/CTest.dir/main.cpp.o: CMakeFiles/CTest.dir/flags.make
CMakeFiles/CTest.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/CTest.dir/main.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CTest.dir/main.cpp.o -c "/Users/fengluoye/Desktop/c project/CTest/main.cpp"

CMakeFiles/CTest.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CTest.dir/main.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/CTest/main.cpp" > CMakeFiles/CTest.dir/main.cpp.i

CMakeFiles/CTest.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CTest.dir/main.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/CTest/main.cpp" -o CMakeFiles/CTest.dir/main.cpp.s

CMakeFiles/CTest.dir/Student.cpp.o: CMakeFiles/CTest.dir/flags.make
CMakeFiles/CTest.dir/Student.cpp.o: ../Student.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/CTest.dir/Student.cpp.o"
	/Library/Developer/CommandLineTools/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/CTest.dir/Student.cpp.o -c "/Users/fengluoye/Desktop/c project/CTest/Student.cpp"

CMakeFiles/CTest.dir/Student.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/CTest.dir/Student.cpp.i"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/Users/fengluoye/Desktop/c project/CTest/Student.cpp" > CMakeFiles/CTest.dir/Student.cpp.i

CMakeFiles/CTest.dir/Student.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/CTest.dir/Student.cpp.s"
	/Library/Developer/CommandLineTools/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/Users/fengluoye/Desktop/c project/CTest/Student.cpp" -o CMakeFiles/CTest.dir/Student.cpp.s

# Object files for target CTest
CTest_OBJECTS = \
"CMakeFiles/CTest.dir/main.cpp.o" \
"CMakeFiles/CTest.dir/Student.cpp.o"

# External object files for target CTest
CTest_EXTERNAL_OBJECTS =

CTest: CMakeFiles/CTest.dir/main.cpp.o
CTest: CMakeFiles/CTest.dir/Student.cpp.o
CTest: CMakeFiles/CTest.dir/build.make
CTest: CMakeFiles/CTest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable CTest"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/CTest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/CTest.dir/build: CTest

.PHONY : CMakeFiles/CTest.dir/build

CMakeFiles/CTest.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/CTest.dir/cmake_clean.cmake
.PHONY : CMakeFiles/CTest.dir/clean

CMakeFiles/CTest.dir/depend:
	cd "/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Users/fengluoye/Desktop/c project/CTest" "/Users/fengluoye/Desktop/c project/CTest" "/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug" "/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug" "/Users/fengluoye/Desktop/c project/CTest/cmake-build-debug/CMakeFiles/CTest.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/CTest.dir/depend

