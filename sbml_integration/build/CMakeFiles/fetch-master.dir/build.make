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
CMAKE_SOURCE_DIR = /home/bdm/demo/sbml_integration

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/bdm/demo/sbml_integration/build

# Utility rule file for fetch-master.

# Include the progress variables for this target.
include CMakeFiles/fetch-master.dir/progress.make

CMakeFiles/fetch-master:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/sbml_integration/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Fetch latest changes from origin master. If you forked the project,"
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "       make sure that it is synchronized with the biodynamo repository!"
	cd /home/bdm/demo/sbml_integration && git fetch origin master

fetch-master: CMakeFiles/fetch-master
fetch-master: CMakeFiles/fetch-master.dir/build.make

.PHONY : fetch-master

# Rule to build all files generated by this target.
CMakeFiles/fetch-master.dir/build: fetch-master

.PHONY : CMakeFiles/fetch-master.dir/build

CMakeFiles/fetch-master.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/fetch-master.dir/cmake_clean.cmake
.PHONY : CMakeFiles/fetch-master.dir/clean

CMakeFiles/fetch-master.dir/depend:
	cd /home/bdm/demo/sbml_integration/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/sbml_integration /home/bdm/demo/sbml_integration /home/bdm/demo/sbml_integration/build /home/bdm/demo/sbml_integration/build /home/bdm/demo/sbml_integration/build/CMakeFiles/fetch-master.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/fetch-master.dir/depend

