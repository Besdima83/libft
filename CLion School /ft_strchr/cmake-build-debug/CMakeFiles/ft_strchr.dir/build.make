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
CMAKE_SOURCE_DIR = /Users/bakali/CLionProjects/ft_strchr

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bakali/CLionProjects/ft_strchr/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_strchr.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_strchr.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_strchr.dir/flags.make

CMakeFiles/ft_strchr.dir/main.c.o: CMakeFiles/ft_strchr.dir/flags.make
CMakeFiles/ft_strchr.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bakali/CLionProjects/ft_strchr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_strchr.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_strchr.dir/main.c.o   -c /Users/bakali/CLionProjects/ft_strchr/main.c

CMakeFiles/ft_strchr.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_strchr.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bakali/CLionProjects/ft_strchr/main.c > CMakeFiles/ft_strchr.dir/main.c.i

CMakeFiles/ft_strchr.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_strchr.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bakali/CLionProjects/ft_strchr/main.c -o CMakeFiles/ft_strchr.dir/main.c.s

# Object files for target ft_strchr
ft_strchr_OBJECTS = \
"CMakeFiles/ft_strchr.dir/main.c.o"

# External object files for target ft_strchr
ft_strchr_EXTERNAL_OBJECTS =

ft_strchr: CMakeFiles/ft_strchr.dir/main.c.o
ft_strchr: CMakeFiles/ft_strchr.dir/build.make
ft_strchr: CMakeFiles/ft_strchr.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bakali/CLionProjects/ft_strchr/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ft_strchr"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_strchr.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_strchr.dir/build: ft_strchr

.PHONY : CMakeFiles/ft_strchr.dir/build

CMakeFiles/ft_strchr.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_strchr.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_strchr.dir/clean

CMakeFiles/ft_strchr.dir/depend:
	cd /Users/bakali/CLionProjects/ft_strchr/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bakali/CLionProjects/ft_strchr /Users/bakali/CLionProjects/ft_strchr /Users/bakali/CLionProjects/ft_strchr/cmake-build-debug /Users/bakali/CLionProjects/ft_strchr/cmake-build-debug /Users/bakali/CLionProjects/ft_strchr/cmake-build-debug/CMakeFiles/ft_strchr.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_strchr.dir/depend

