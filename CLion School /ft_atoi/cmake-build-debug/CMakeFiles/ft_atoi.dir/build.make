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
CMAKE_SOURCE_DIR = /Users/bakali/CLionProjects/ft_atoi

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/bakali/CLionProjects/ft_atoi/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/ft_atoi.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_atoi.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_atoi.dir/flags.make

CMakeFiles/ft_atoi.dir/main.c.o: CMakeFiles/ft_atoi.dir/flags.make
CMakeFiles/ft_atoi.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/bakali/CLionProjects/ft_atoi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_atoi.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_atoi.dir/main.c.o   -c /Users/bakali/CLionProjects/ft_atoi/main.c

CMakeFiles/ft_atoi.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_atoi.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/bakali/CLionProjects/ft_atoi/main.c > CMakeFiles/ft_atoi.dir/main.c.i

CMakeFiles/ft_atoi.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_atoi.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/bakali/CLionProjects/ft_atoi/main.c -o CMakeFiles/ft_atoi.dir/main.c.s

# Object files for target ft_atoi
ft_atoi_OBJECTS = \
"CMakeFiles/ft_atoi.dir/main.c.o"

# External object files for target ft_atoi
ft_atoi_EXTERNAL_OBJECTS =

ft_atoi: CMakeFiles/ft_atoi.dir/main.c.o
ft_atoi: CMakeFiles/ft_atoi.dir/build.make
ft_atoi: CMakeFiles/ft_atoi.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/bakali/CLionProjects/ft_atoi/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ft_atoi"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_atoi.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_atoi.dir/build: ft_atoi

.PHONY : CMakeFiles/ft_atoi.dir/build

CMakeFiles/ft_atoi.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_atoi.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_atoi.dir/clean

CMakeFiles/ft_atoi.dir/depend:
	cd /Users/bakali/CLionProjects/ft_atoi/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/bakali/CLionProjects/ft_atoi /Users/bakali/CLionProjects/ft_atoi /Users/bakali/CLionProjects/ft_atoi/cmake-build-debug /Users/bakali/CLionProjects/ft_atoi/cmake-build-debug /Users/bakali/CLionProjects/ft_atoi/cmake-build-debug/CMakeFiles/ft_atoi.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/ft_atoi.dir/depend

