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

# Utility rule file for check-submission.

# Include the progress variables for this target.
include CMakeFiles/check-submission.dir/progress.make

CMakeFiles/check-submission:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/cell_division/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "check-submission will build, run all tests, check formatting, code style, and generate documentation and coverage report"
	/home/bdm/biodynamo/build/share/util/check-submission.sh /home/bdm/demo/cell_division/build

check-submission: CMakeFiles/check-submission
check-submission: CMakeFiles/check-submission.dir/build.make

.PHONY : check-submission

# Rule to build all files generated by this target.
CMakeFiles/check-submission.dir/build: check-submission

.PHONY : CMakeFiles/check-submission.dir/build

CMakeFiles/check-submission.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/check-submission.dir/cmake_clean.cmake
.PHONY : CMakeFiles/check-submission.dir/clean

CMakeFiles/check-submission.dir/depend:
	cd /home/bdm/demo/cell_division/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/cell_division /home/bdm/demo/cell_division /home/bdm/demo/cell_division/build /home/bdm/demo/cell_division/build /home/bdm/demo/cell_division/build/CMakeFiles/check-submission.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/check-submission.dir/depend

