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

# Utility rule file for show-tidy.

# Include the progress variables for this target.
include CMakeFiles/show-tidy.dir/progress.make

CMakeFiles/show-tidy:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/bdm/demo/sbml_integration/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Run clang-tidy on selected files and display errors."
	cd /home/bdm/demo/sbml_integration && /home/bdm/biodynamo/build/share/util/run-clang-tidy.sh /usr/bin/clang-tidy /home/bdm/demo/sbml_integration/build/clang_tidy_header_helper.cc /home/bdm/demo/sbml_integration/build/compile_commands.json 2 `/home/bdm/biodynamo/build/share/util/get-changed-src-files-origin-master.sh /home/bdm/demo/sbml_integration | grep -v -F -f /home/bdm/demo/sbml_integration/.clang-tidy-ignore`

show-tidy: CMakeFiles/show-tidy
show-tidy: CMakeFiles/show-tidy.dir/build.make

.PHONY : show-tidy

# Rule to build all files generated by this target.
CMakeFiles/show-tidy.dir/build: show-tidy

.PHONY : CMakeFiles/show-tidy.dir/build

CMakeFiles/show-tidy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/show-tidy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/show-tidy.dir/clean

CMakeFiles/show-tidy.dir/depend:
	cd /home/bdm/demo/sbml_integration/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/bdm/demo/sbml_integration /home/bdm/demo/sbml_integration /home/bdm/demo/sbml_integration/build /home/bdm/demo/sbml_integration/build /home/bdm/demo/sbml_integration/build/CMakeFiles/show-tidy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/show-tidy.dir/depend

