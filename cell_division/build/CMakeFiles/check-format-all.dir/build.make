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
CMAKE_SOURCE_DIR = /home/bdm/demo/cell_division

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bdm/demo/cell_division/build

# Utility rule file for check-format-all.

# Include the progress variables for this target.
include CMakeFiles/check-format-all.dir/progress.make

CMakeFiles/check-format-all:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/cell_division/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-format on selected files. Fails if any file needs to be reformatted"
	cd /home/bdm/demo/cell_division && /home/bdm/biodynamo/build/share/util/run-clang-format.sh /home/bdm/demo/cell_division /usr/bin/clang-format 0 `/home/bdm/biodynamo/build/share/util/get-all-src-files.sh /home/bdm/demo/cell_division`

check-format-all: CMakeFiles/check-format-all
check-format-all: CMakeFiles/check-format-all.dir/build.make

.PHONY : check-format-all

# Rule to build all files generated by this target.
CMakeFiles/check-format-all.dir/build: check-format-all

.PHONY : CMakeFiles/check-format-all.dir/build

CMakeFiles/check-format-all.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check-format-all.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check-format-all.dir/clean

CMakeFiles/check-format-all.dir/depend:
	cd /home/bdm/demo/cell_division/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/cell_division /home/bdm/demo/cell_division /home/bdm/demo/cell_division/build /home/bdm/demo/cell_division/build /home/bdm/demo/cell_division/build/CMakeFiles/check-format-all.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check-format-all.dir/depend

