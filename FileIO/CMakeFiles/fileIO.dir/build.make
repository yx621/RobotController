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
CMAKE_SOURCE_DIR = /home/yongxin/Documents/opencv/yossi/FileIO

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yongxin/Documents/opencv/yossi/FileIO

# Include any dependencies generated for this target.
include CMakeFiles/fileIO.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/fileIO.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/fileIO.dir/flags.make

CMakeFiles/fileIO.dir/fileIO.cpp.o: CMakeFiles/fileIO.dir/flags.make
CMakeFiles/fileIO.dir/fileIO.cpp.o: fileIO.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yongxin/Documents/opencv/yossi/FileIO/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/fileIO.dir/fileIO.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/fileIO.dir/fileIO.cpp.o -c /home/yongxin/Documents/opencv/yossi/FileIO/fileIO.cpp

CMakeFiles/fileIO.dir/fileIO.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fileIO.dir/fileIO.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yongxin/Documents/opencv/yossi/FileIO/fileIO.cpp > CMakeFiles/fileIO.dir/fileIO.cpp.i

CMakeFiles/fileIO.dir/fileIO.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fileIO.dir/fileIO.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yongxin/Documents/opencv/yossi/FileIO/fileIO.cpp -o CMakeFiles/fileIO.dir/fileIO.cpp.s

CMakeFiles/fileIO.dir/fileIO.cpp.o.requires:
.PHONY : CMakeFiles/fileIO.dir/fileIO.cpp.o.requires

CMakeFiles/fileIO.dir/fileIO.cpp.o.provides: CMakeFiles/fileIO.dir/fileIO.cpp.o.requires
	$(MAKE) -f CMakeFiles/fileIO.dir/build.make CMakeFiles/fileIO.dir/fileIO.cpp.o.provides.build
.PHONY : CMakeFiles/fileIO.dir/fileIO.cpp.o.provides

CMakeFiles/fileIO.dir/fileIO.cpp.o.provides.build: CMakeFiles/fileIO.dir/fileIO.cpp.o

# Object files for target fileIO
fileIO_OBJECTS = \
"CMakeFiles/fileIO.dir/fileIO.cpp.o"

# External object files for target fileIO
fileIO_EXTERNAL_OBJECTS =

fileIO: CMakeFiles/fileIO.dir/fileIO.cpp.o
fileIO: CMakeFiles/fileIO.dir/build.make
fileIO: /usr/local/lib/libopencv_videostab.so.3.0.0
fileIO: /usr/local/lib/libopencv_videoio.so.3.0.0
fileIO: /usr/local/lib/libopencv_video.so.3.0.0
fileIO: /usr/local/lib/libopencv_superres.so.3.0.0
fileIO: /usr/local/lib/libopencv_stitching.so.3.0.0
fileIO: /usr/local/lib/libopencv_shape.so.3.0.0
fileIO: /usr/local/lib/libopencv_photo.so.3.0.0
fileIO: /usr/local/lib/libopencv_objdetect.so.3.0.0
fileIO: /usr/local/lib/libopencv_ml.so.3.0.0
fileIO: /usr/local/lib/libopencv_imgproc.so.3.0.0
fileIO: /usr/local/lib/libopencv_imgcodecs.so.3.0.0
fileIO: /usr/local/lib/libopencv_highgui.so.3.0.0
fileIO: /usr/local/lib/libopencv_hal.a
fileIO: /usr/local/lib/libopencv_flann.so.3.0.0
fileIO: /usr/local/lib/libopencv_features2d.so.3.0.0
fileIO: /usr/local/lib/libopencv_core.so.3.0.0
fileIO: /usr/local/lib/libopencv_calib3d.so.3.0.0
fileIO: /usr/local/lib/libopencv_features2d.so.3.0.0
fileIO: /usr/local/lib/libopencv_ml.so.3.0.0
fileIO: /usr/local/lib/libopencv_highgui.so.3.0.0
fileIO: /usr/local/lib/libopencv_videoio.so.3.0.0
fileIO: /usr/local/lib/libopencv_imgcodecs.so.3.0.0
fileIO: /usr/local/lib/libopencv_flann.so.3.0.0
fileIO: /usr/local/lib/libopencv_video.so.3.0.0
fileIO: /usr/local/lib/libopencv_imgproc.so.3.0.0
fileIO: /usr/local/lib/libopencv_core.so.3.0.0
fileIO: /usr/local/lib/libopencv_hal.a
fileIO: /usr/local/share/OpenCV/3rdparty/lib/libippicv.a
fileIO: CMakeFiles/fileIO.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable fileIO"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fileIO.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/fileIO.dir/build: fileIO
.PHONY : CMakeFiles/fileIO.dir/build

CMakeFiles/fileIO.dir/requires: CMakeFiles/fileIO.dir/fileIO.cpp.o.requires
.PHONY : CMakeFiles/fileIO.dir/requires

CMakeFiles/fileIO.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fileIO.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fileIO.dir/clean

CMakeFiles/fileIO.dir/depend:
	cd /home/yongxin/Documents/opencv/yossi/FileIO && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yongxin/Documents/opencv/yossi/FileIO /home/yongxin/Documents/opencv/yossi/FileIO /home/yongxin/Documents/opencv/yossi/FileIO /home/yongxin/Documents/opencv/yossi/FileIO /home/yongxin/Documents/opencv/yossi/FileIO/CMakeFiles/fileIO.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fileIO.dir/depend

