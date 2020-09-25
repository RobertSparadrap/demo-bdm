# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Disable VCS-based implicit rules.
% : %,v


# Disable VCS-based implicit rules.
% : RCS/%


# Disable VCS-based implicit rules.
% : RCS/%,v


# Disable VCS-based implicit rules.
% : SCCS/s.%


# Disable VCS-based implicit rules.
% : s.%


.SUFFIXES: .hpux_make_needs_suffix_list


# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
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
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/bdm/demo/soma_clustering

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bdm/demo/soma_clustering/build

# Include any dependencies generated for this target.
include CMakeFiles/soma_clustering.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/soma_clustering.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/soma_clustering.dir/flags.make

CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.o: CMakeFiles/soma_clustering.dir/flags.make
CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.o: ../src/soma_clustering.cc
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/bdm/demo/soma_clustering/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.o"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.o -c /home/bdm/demo/soma_clustering/src/soma_clustering.cc

CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/bdm/demo/soma_clustering/src/soma_clustering.cc > CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.i

CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/bdm/demo/soma_clustering/src/soma_clustering.cc -o CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.s

# Object files for target soma_clustering
soma_clustering_OBJECTS = \
"CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.o"

# External object files for target soma_clustering
soma_clustering_EXTERNAL_OBJECTS =

soma_clustering: CMakeFiles/soma_clustering.dir/src/soma_clustering.cc.o
soma_clustering: CMakeFiles/soma_clustering.dir/build.make
soma_clustering: /usr/lib/x86_64-linux-gnu/libnuma.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libCore.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libRIO.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libNet.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libHist.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libGraf.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libGraf3d.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libGpad.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libTree.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libRint.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libPostscript.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libMatrix.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libPhysics.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libMathCore.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libThread.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libMultiProc.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libImt.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libGeom.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libGui.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libEve.so
soma_clustering: /home/bdm/biodynamo/build/third_party/root/lib/libGenVector.so
soma_clustering: /usr/lib/gcc/x86_64-linux-gnu/9/libgomp.so
soma_clustering: /usr/lib/x86_64-linux-gnu/libpthread.so
soma_clustering: CMakeFiles/soma_clustering.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/bdm/demo/soma_clustering/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable soma_clustering"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/soma_clustering.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/soma_clustering.dir/build: soma_clustering

.PHONY : CMakeFiles/soma_clustering.dir/build

CMakeFiles/soma_clustering.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/soma_clustering.dir/cmake_clean.cmake
.PHONY : CMakeFiles/soma_clustering.dir/clean

CMakeFiles/soma_clustering.dir/depend:
	cd /home/bdm/demo/soma_clustering/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/soma_clustering /home/bdm/demo/soma_clustering /home/bdm/demo/soma_clustering/build /home/bdm/demo/soma_clustering/build /home/bdm/demo/soma_clustering/build/CMakeFiles/soma_clustering.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/soma_clustering.dir/depend

