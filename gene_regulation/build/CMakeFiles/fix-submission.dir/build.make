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
CMAKE_SOURCE_DIR = /home/bdm/demo/gene_regulation

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bdm/demo/gene_regulation/build

# Utility rule file for fix-submission.

# Include the progress variables for this target.
include CMakeFiles/fix-submission.dir/progress.make

CMakeFiles/fix-submission:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/gene_regulation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "fix-submission will attempt to fix the reported issues using clang-format and clang-tidy."
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "             Failing tests and issues from cpplint must be fixed manually."
	/home/bdm/biodynamo/build/share/util/fix-submission.sh /home/bdm/demo/gene_regulation/build

fix-submission: CMakeFiles/fix-submission
fix-submission: CMakeFiles/fix-submission.dir/build.make

.PHONY : fix-submission

# Rule to build all files generated by this target.
CMakeFiles/fix-submission.dir/build: fix-submission

.PHONY : CMakeFiles/fix-submission.dir/build

CMakeFiles/fix-submission.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fix-submission.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fix-submission.dir/clean

CMakeFiles/fix-submission.dir/depend:
	cd /home/bdm/demo/gene_regulation/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/gene_regulation /home/bdm/demo/gene_regulation /home/bdm/demo/gene_regulation/build /home/bdm/demo/gene_regulation/build /home/bdm/demo/gene_regulation/build/CMakeFiles/fix-submission.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fix-submission.dir/depend

