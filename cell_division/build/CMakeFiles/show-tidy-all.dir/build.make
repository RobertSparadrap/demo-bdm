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

# Utility rule file for show-tidy-all.

# Include the progress variables for this target.
include CMakeFiles/show-tidy-all.dir/progress.make

CMakeFiles/show-tidy-all:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/cell_division/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-tidy on selected files and display errors."
	cd /home/bdm/demo/cell_division && /home/bdm/biodynamo/build/share/util/run-clang-tidy.sh /usr/bin/clang-tidy /home/bdm/demo/cell_division/build/clang_tidy_header_helper.cc /home/bdm/demo/cell_division/build/compile_commands.json 2 `/home/bdm/biodynamo/build/share/util/get-all-src-files.sh /home/bdm/demo/cell_division | grep -v -F -f /home/bdm/demo/cell_division/.clang-tidy-ignore`

show-tidy-all: CMakeFiles/show-tidy-all
show-tidy-all: CMakeFiles/show-tidy-all.dir/build.make

.PHONY : show-tidy-all

# Rule to build all files generated by this target.
CMakeFiles/show-tidy-all.dir/build: show-tidy-all

.PHONY : CMakeFiles/show-tidy-all.dir/build

CMakeFiles/show-tidy-all.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/show-tidy-all.dir/cmake_clean.cmake
.PHONY : CMakeFiles/show-tidy-all.dir/clean

CMakeFiles/show-tidy-all.dir/depend:
	cd /home/bdm/demo/cell_division/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/cell_division /home/bdm/demo/cell_division /home/bdm/demo/cell_division/build /home/bdm/demo/cell_division/build /home/bdm/demo/cell_division/build/CMakeFiles/show-tidy-all.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/show-tidy-all.dir/depend

