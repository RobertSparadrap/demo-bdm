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

# Utility rule file for show-format-all.

# Include the progress variables for this target.
include CMakeFiles/show-format-all.dir/progress.make

CMakeFiles/show-format-all:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/gene_regulation/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-format on selected files and display differences"
	cd /home/bdm/demo/gene_regulation && /home/bdm/biodynamo/build/share/util/run-clang-format.sh /home/bdm/demo/gene_regulation /usr/bin/clang-format 2 `/home/bdm/biodynamo/build/share/util/get-all-src-files.sh /home/bdm/demo/gene_regulation`

show-format-all: CMakeFiles/show-format-all
show-format-all: CMakeFiles/show-format-all.dir/build.make

.PHONY : show-format-all

# Rule to build all files generated by this target.
CMakeFiles/show-format-all.dir/build: show-format-all

.PHONY : CMakeFiles/show-format-all.dir/build

CMakeFiles/show-format-all.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/show-format-all.dir/cmake_clean.cmake
.PHONY : CMakeFiles/show-format-all.dir/clean

CMakeFiles/show-format-all.dir/depend:
	cd /home/bdm/demo/gene_regulation/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/gene_regulation /home/bdm/demo/gene_regulation /home/bdm/demo/gene_regulation/build /home/bdm/demo/gene_regulation/build /home/bdm/demo/gene_regulation/build/CMakeFiles/show-format-all.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/show-format-all.dir/depend

