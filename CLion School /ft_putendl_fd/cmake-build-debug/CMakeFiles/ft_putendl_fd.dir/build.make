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
CMAKE_SOURCE_DIR = "/Volumes/Besdima/21School/CLion School/ft_putendl_fd"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug"

# Include any dependencies generated for this target.
include CMakeFiles/ft_putendl_fd.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/ft_putendl_fd.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/ft_putendl_fd.dir/flags.make

CMakeFiles/ft_putendl_fd.dir/main.c.o: CMakeFiles/ft_putendl_fd.dir/flags.make
CMakeFiles/ft_putendl_fd.dir/main.c.o: ../main.c
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building C object CMakeFiles/ft_putendl_fd.dir/main.c.o"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -o CMakeFiles/ft_putendl_fd.dir/main.c.o   -c "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/main.c"

CMakeFiles/ft_putendl_fd.dir/main.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ft_putendl_fd.dir/main.c.i"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/main.c" > CMakeFiles/ft_putendl_fd.dir/main.c.i

CMakeFiles/ft_putendl_fd.dir/main.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ft_putendl_fd.dir/main.c.s"
	/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/main.c" -o CMakeFiles/ft_putendl_fd.dir/main.c.s

# Object files for target ft_putendl_fd
ft_putendl_fd_OBJECTS = \
"CMakeFiles/ft_putendl_fd.dir/main.c.o"

# External object files for target ft_putendl_fd
ft_putendl_fd_EXTERNAL_OBJECTS =

ft_putendl_fd: CMakeFiles/ft_putendl_fd.dir/main.c.o
ft_putendl_fd: CMakeFiles/ft_putendl_fd.dir/build.make
ft_putendl_fd: CMakeFiles/ft_putendl_fd.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ft_putendl_fd"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ft_putendl_fd.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/ft_putendl_fd.dir/build: ft_putendl_fd

.PHONY : CMakeFiles/ft_putendl_fd.dir/build

CMakeFiles/ft_putendl_fd.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/ft_putendl_fd.dir/cmake_clean.cmake
.PHONY : CMakeFiles/ft_putendl_fd.dir/clean

CMakeFiles/ft_putendl_fd.dir/depend:
	cd "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/Volumes/Besdima/21School/CLion School/ft_putendl_fd" "/Volumes/Besdima/21School/CLion School/ft_putendl_fd" "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug" "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug" "/Volumes/Besdima/21School/CLion School/ft_putendl_fd/cmake-build-debug/CMakeFiles/ft_putendl_fd.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/ft_putendl_fd.dir/depend

