# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.17

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

# Suppress display of executed commands.
$(VERBOSE).SILENT:


# A target that is always out of date.
cmake_force:

.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake

# The command to remove a file.
RM = /Applications/CLion.app/Contents/bin/cmake/mac/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/bakali/CLionProjects/strlcpy

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bakali/CLionProjects/strlcpy/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/strlcpy.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/strlcpy.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/strlcpy.dir/flags.make

CMakeFiles/strlcpy.dir/main.c.o: CMakeFiles/strlcpy.dir/flags.make
CMakeFiles/strlcpy.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bakali/CLionProjects/strlcpy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/strlcpy.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/strlcpy.dir/main.c.o   -c /Users/bakali/CLionProjects/strlcpy/main.c

CMakeFiles/strlcpy.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/strlcpy.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bakali/CLionProjects/strlcpy/main.c > CMakeFiles/strlcpy.dir/main.c.i

CMakeFiles/strlcpy.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/strlcpy.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bakali/CLionProjects/strlcpy/main.c -o CMakeFiles/strlcpy.dir/main.c.s

# Object files for target strlcpy
strlcpy_OBJECTS = \
"CMakeFiles/strlcpy.dir/main.c.o"

# External object files for target strlcpy
strlcpy_EXTERNAL_OBJECTS =

strlcpy: CMakeFiles/strlcpy.dir/main.c.o
strlcpy: CMakeFiles/strlcpy.dir/build.make
strlcpy: CMakeFiles/strlcpy.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bakali/CLionProjects/strlcpy/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable strlcpy"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/strlcpy.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/strlcpy.dir/build: strlcpy

.PHONY : CMakeFiles/strlcpy.dir/build

CMakeFiles/strlcpy.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/strlcpy.dir/cmake_clean.cmake
.PHONY : CMakeFiles/strlcpy.dir/clean

CMakeFiles/strlcpy.dir/depend:
	cd /Users/bakali/CLionProjects/strlcpy/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bakali/CLionProjects/strlcpy /Users/bakali/CLionProjects/strlcpy /Users/bakali/CLionProjects/strlcpy/cmake-build-debug /Users/bakali/CLionProjects/strlcpy/cmake-build-debug /Users/bakali/CLionProjects/strlcpy/cmake-build-debug/CMakeFiles/strlcpy.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/strlcpy.dir/depend

