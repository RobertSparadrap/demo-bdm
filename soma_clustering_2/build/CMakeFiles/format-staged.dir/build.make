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
CMAKE_SOURCE_DIR = /home/bdm/demo/soma_clustering_2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bdm/demo/soma_clustering_2/build

# Utility rule file for format-staged.

# Include the progress variables for this target.
include CMakeFiles/format-staged.dir/progress.make

CMakeFiles/format-staged:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/soma_clustering_2/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-format on selected files and update them in-place"
	cd /home/bdm/demo/soma_clustering_2 && /home/bdm/biodynamo/build/share/util/run-clang-format.sh /home/bdm/demo/soma_clustering_2 /usr/bin/clang-format 1 `/home/bdm/biodynamo/build/share/util/get-staged-src-files.sh /home/bdm/demo/soma_clustering_2`

format-staged: CMakeFiles/format-staged
format-staged: CMakeFiles/format-staged.dir/build.make

.PHONY : format-staged

# Rule to build all files generated by this target.
CMakeFiles/format-staged.dir/build: format-staged

.PHONY : CMakeFiles/format-staged.dir/build

CMakeFiles/format-staged.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/format-staged.dir/cmake_clean.cmake
.PHONY : CMakeFiles/format-staged.dir/clean

CMakeFiles/format-staged.dir/depend:
	cd /home/bdm/demo/soma_clustering_2/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/soma_clustering_2 /home/bdm/demo/soma_clustering_2 /home/bdm/demo/soma_clustering_2/build /home/bdm/demo/soma_clustering_2/build /home/bdm/demo/soma_clustering_2/build/CMakeFiles/format-staged.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/format-staged.dir/depend

