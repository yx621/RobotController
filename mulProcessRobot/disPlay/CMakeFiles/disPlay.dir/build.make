# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay

# Include any dependencies generated for this target.
include CMakeFiles/disPlay.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/disPlay.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/disPlay.dir/flags.make

CMakeFiles/disPlay.dir/disPlay.cpp.o: CMakeFiles/disPlay.dir/flags.make
CMakeFiles/disPlay.dir/disPlay.cpp.o: disPlay.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/disPlay.dir/disPlay.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/disPlay.dir/disPlay.cpp.o -c /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay/disPlay.cpp

CMakeFiles/disPlay.dir/disPlay.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/disPlay.dir/disPlay.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay/disPlay.cpp > CMakeFiles/disPlay.dir/disPlay.cpp.i

CMakeFiles/disPlay.dir/disPlay.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/disPlay.dir/disPlay.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay/disPlay.cpp -o CMakeFiles/disPlay.dir/disPlay.cpp.s

CMakeFiles/disPlay.dir/disPlay.cpp.o.requires:
.PHONY : CMakeFiles/disPlay.dir/disPlay.cpp.o.requires

CMakeFiles/disPlay.dir/disPlay.cpp.o.provides: CMakeFiles/disPlay.dir/disPlay.cpp.o.requires
	$(MAKE) -f CMakeFiles/disPlay.dir/build.make CMakeFiles/disPlay.dir/disPlay.cpp.o.provides.build
.PHONY : CMakeFiles/disPlay.dir/disPlay.cpp.o.provides

CMakeFiles/disPlay.dir/disPlay.cpp.o.provides.build: CMakeFiles/disPlay.dir/disPlay.cpp.o

# Object files for target disPlay
disPlay_OBJECTS = \
"CMakeFiles/disPlay.dir/disPlay.cpp.o"

# External object files for target disPlay
disPlay_EXTERNAL_OBJECTS =

disPlay: CMakeFiles/disPlay.dir/disPlay.cpp.o
disPlay: CMakeFiles/disPlay.dir/build.make
disPlay: /usr/local/lib/libopencv_videostab.so.3.0.0
disPlay: /usr/local/lib/libopencv_videoio.so.3.0.0
disPlay: /usr/local/lib/libopencv_video.so.3.0.0
disPlay: /usr/local/lib/libopencv_superres.so.3.0.0
disPlay: /usr/local/lib/libopencv_stitching.so.3.0.0
disPlay: /usr/local/lib/libopencv_shape.so.3.0.0
disPlay: /usr/local/lib/libopencv_photo.so.3.0.0
disPlay: /usr/local/lib/libopencv_objdetect.so.3.0.0
disPlay: /usr/local/lib/libopencv_ml.so.3.0.0
disPlay: /usr/local/lib/libopencv_imgproc.so.3.0.0
disPlay: /usr/local/lib/libopencv_imgcodecs.so.3.0.0
disPlay: /usr/local/lib/libopencv_highgui.so.3.0.0
disPlay: /usr/local/lib/libopencv_hal.a
disPlay: /usr/local/lib/libopencv_flann.so.3.0.0
disPlay: /usr/local/lib/libopencv_features2d.so.3.0.0
disPlay: /usr/local/lib/libopencv_core.so.3.0.0
disPlay: /usr/local/lib/libopencv_calib3d.so.3.0.0
disPlay: /usr/local/lib/libopencv_features2d.so.3.0.0
disPlay: /usr/local/lib/libopencv_ml.so.3.0.0
disPlay: /usr/local/lib/libopencv_highgui.so.3.0.0
disPlay: /usr/local/lib/libopencv_videoio.so.3.0.0
disPlay: /usr/local/lib/libopencv_imgcodecs.so.3.0.0
disPlay: /usr/local/lib/libopencv_flann.so.3.0.0
disPlay: /usr/local/lib/libopencv_video.so.3.0.0
disPlay: /usr/local/lib/libopencv_imgproc.so.3.0.0
disPlay: /usr/local/lib/libopencv_core.so.3.0.0
disPlay: /usr/local/lib/libopencv_hal.a
disPlay: /usr/local/share/OpenCV/3rdparty/lib/libippicv.a
disPlay: CMakeFiles/disPlay.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable disPlay"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/disPlay.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/disPlay.dir/build: disPlay
.PHONY : CMakeFiles/disPlay.dir/build

CMakeFiles/disPlay.dir/requires: CMakeFiles/disPlay.dir/disPlay.cpp.o.requires
.PHONY : CMakeFiles/disPlay.dir/requires

CMakeFiles/disPlay.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/disPlay.dir/cmake_clean.cmake
.PHONY : CMakeFiles/disPlay.dir/clean

CMakeFiles/disPlay.dir/depend:
	cd /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay /home/yongxin/Documents/opencv/yossi/mulProcessRobot/disPlay/CMakeFiles/disPlay.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/disPlay.dir/depend

