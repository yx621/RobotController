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
CMAKE_SOURCE_DIR = /home/yongxin/Documents/opencv/yossi/Robot

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/yongxin/Documents/opencv/yossi/Robot

# Include any dependencies generated for this target.
include CMakeFiles/network.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/network.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/network.dir/flags.make

CMakeFiles/network.dir/network.cpp.o: CMakeFiles/network.dir/flags.make
CMakeFiles/network.dir/network.cpp.o: network.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/yongxin/Documents/opencv/yossi/Robot/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object CMakeFiles/network.dir/network.cpp.o"
	/usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/network.dir/network.cpp.o -c /home/yongxin/Documents/opencv/yossi/Robot/network.cpp

CMakeFiles/network.dir/network.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/network.dir/network.cpp.i"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/yongxin/Documents/opencv/yossi/Robot/network.cpp > CMakeFiles/network.dir/network.cpp.i

CMakeFiles/network.dir/network.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/network.dir/network.cpp.s"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/yongxin/Documents/opencv/yossi/Robot/network.cpp -o CMakeFiles/network.dir/network.cpp.s

CMakeFiles/network.dir/network.cpp.o.requires:
.PHONY : CMakeFiles/network.dir/network.cpp.o.requires

CMakeFiles/network.dir/network.cpp.o.provides: CMakeFiles/network.dir/network.cpp.o.requires
	$(MAKE) -f CMakeFiles/network.dir/build.make CMakeFiles/network.dir/network.cpp.o.provides.build
.PHONY : CMakeFiles/network.dir/network.cpp.o.provides

CMakeFiles/network.dir/network.cpp.o.provides.build: CMakeFiles/network.dir/network.cpp.o

# Object files for target network
network_OBJECTS = \
"CMakeFiles/network.dir/network.cpp.o"

# External object files for target network
network_EXTERNAL_OBJECTS =

network: CMakeFiles/network.dir/network.cpp.o
network: CMakeFiles/network.dir/build.make
network: /usr/local/lib/libopencv_videostab.so.3.0.0
network: /usr/local/lib/libopencv_videoio.so.3.0.0
network: /usr/local/lib/libopencv_video.so.3.0.0
network: /usr/local/lib/libopencv_superres.so.3.0.0
network: /usr/local/lib/libopencv_stitching.so.3.0.0
network: /usr/local/lib/libopencv_shape.so.3.0.0
network: /usr/local/lib/libopencv_photo.so.3.0.0
network: /usr/local/lib/libopencv_objdetect.so.3.0.0
network: /usr/local/lib/libopencv_ml.so.3.0.0
network: /usr/local/lib/libopencv_imgproc.so.3.0.0
network: /usr/local/lib/libopencv_imgcodecs.so.3.0.0
network: /usr/local/lib/libopencv_highgui.so.3.0.0
network: /usr/local/lib/libopencv_hal.a
network: /usr/local/lib/libopencv_flann.so.3.0.0
network: /usr/local/lib/libopencv_features2d.so.3.0.0
network: /usr/local/lib/libopencv_core.so.3.0.0
network: /usr/local/lib/libopencv_calib3d.so.3.0.0
network: /usr/local/lib/libopencv_features2d.so.3.0.0
network: /usr/local/lib/libopencv_ml.so.3.0.0
network: /usr/local/lib/libopencv_highgui.so.3.0.0
network: /usr/local/lib/libopencv_videoio.so.3.0.0
network: /usr/local/lib/libopencv_imgcodecs.so.3.0.0
network: /usr/local/lib/libopencv_flann.so.3.0.0
network: /usr/local/lib/libopencv_video.so.3.0.0
network: /usr/local/lib/libopencv_imgproc.so.3.0.0
network: /usr/local/lib/libopencv_core.so.3.0.0
network: /usr/local/lib/libopencv_hal.a
network: /usr/local/share/OpenCV/3rdparty/lib/libippicv.a
network: CMakeFiles/network.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable network"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/network.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/network.dir/build: network
.PHONY : CMakeFiles/network.dir/build

CMakeFiles/network.dir/requires: CMakeFiles/network.dir/network.cpp.o.requires
.PHONY : CMakeFiles/network.dir/requires

CMakeFiles/network.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/network.dir/cmake_clean.cmake
.PHONY : CMakeFiles/network.dir/clean

CMakeFiles/network.dir/depend:
	cd /home/yongxin/Documents/opencv/yossi/Robot && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/yongxin/Documents/opencv/yossi/Robot /home/yongxin/Documents/opencv/yossi/Robot /home/yongxin/Documents/opencv/yossi/Robot /home/yongxin/Documents/opencv/yossi/Robot /home/yongxin/Documents/opencv/yossi/Robot/CMakeFiles/network.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/network.dir/depend

