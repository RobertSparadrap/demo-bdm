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
CMAKE_SOURCE_DIR = /home/bdm/demo/multiple_simulations

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bdm/demo/multiple_simulations/build

# Utility rule file for show-tidy-staged.

# Include the progress variables for this target.
include CMakeFiles/show-tidy-staged.dir/progress.make

CMakeFiles/show-tidy-staged:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/multiple_simulations/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-tidy on selected files and display errors."
	cd /home/bdm/demo/multiple_simulations && /home/bdm/biodynamo/build/share/util/run-clang-tidy.sh /usr/bin/clang-tidy /home/bdm/demo/multiple_simulations/build/clang_tidy_header_helper.cc /home/bdm/demo/multiple_simulations/build/compile_commands.json 2 `/home/bdm/biodynamo/build/share/util/get-staged-src-files.sh /home/bdm/demo/multiple_simulations | grep -v -F -f /home/bdm/demo/multiple_simulations/.clang-tidy-ignore`

show-tidy-staged: CMakeFiles/show-tidy-staged
show-tidy-staged: CMakeFiles/show-tidy-staged.dir/build.make

.PHONY : show-tidy-staged

# Rule to build all files generated by this target.
CMakeFiles/show-tidy-staged.dir/build: show-tidy-staged

.PHONY : CMakeFiles/show-tidy-staged.dir/build

CMakeFiles/show-tidy-staged.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/show-tidy-staged.dir/cmake_clean.cmake
.PHONY : CMakeFiles/show-tidy-staged.dir/clean

CMakeFiles/show-tidy-staged.dir/depend:
	cd /home/bdm/demo/multiple_simulations/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/multiple_simulations /home/bdm/demo/multiple_simulations /home/bdm/demo/multiple_simulations/build /home/bdm/demo/multiple_simulations/build /home/bdm/demo/multiple_simulations/build/CMakeFiles/show-tidy-staged.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/show-tidy-staged.dir/depend

