# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.13

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


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
CMAKE_COMMAND = /cygdrive/c/Users/Derek/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe

# The command to remove a file.
RM = /cygdrive/c/Users/Derek/.CLion2018.3/system/cygwin_cmake/bin/cmake.exe -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug

# Include any dependencies generated for this target.
include CMakeFiles/Lab7.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/Lab7.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/Lab7.dir/flags.make

CMakeFiles/Lab7.dir/main.cpp.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/Lab7.dir/main.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab7.dir/main.cpp.o -c /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/main.cpp

CMakeFiles/Lab7.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab7.dir/main.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/main.cpp > CMakeFiles/Lab7.dir/main.cpp.i

CMakeFiles/Lab7.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab7.dir/main.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/main.cpp -o CMakeFiles/Lab7.dir/main.cpp.s

CMakeFiles/Lab7.dir/Course.cpp.o: CMakeFiles/Lab7.dir/flags.make
CMakeFiles/Lab7.dir/Course.cpp.o: ../Course.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/Lab7.dir/Course.cpp.o"
	/usr/bin/c++.exe  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/Lab7.dir/Course.cpp.o -c /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/Course.cpp

CMakeFiles/Lab7.dir/Course.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/Lab7.dir/Course.cpp.i"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/Course.cpp > CMakeFiles/Lab7.dir/Course.cpp.i

CMakeFiles/Lab7.dir/Course.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/Lab7.dir/Course.cpp.s"
	/usr/bin/c++.exe $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/Course.cpp -o CMakeFiles/Lab7.dir/Course.cpp.s

# Object files for target Lab7
Lab7_OBJECTS = \
"CMakeFiles/Lab7.dir/main.cpp.o" \
"CMakeFiles/Lab7.dir/Course.cpp.o"

# External object files for target Lab7
Lab7_EXTERNAL_OBJECTS =

Lab7.exe: CMakeFiles/Lab7.dir/main.cpp.o
Lab7.exe: CMakeFiles/Lab7.dir/Course.cpp.o
Lab7.exe: CMakeFiles/Lab7.dir/build.make
Lab7.exe: CMakeFiles/Lab7.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable Lab7.exe"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/Lab7.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/Lab7.dir/build: Lab7.exe

.PHONY : CMakeFiles/Lab7.dir/build

CMakeFiles/Lab7.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/Lab7.dir/cmake_clean.cmake
.PHONY : CMakeFiles/Lab7.dir/clean

CMakeFiles/Lab7.dir/depend:
	cd /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7 /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7 /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug /cygdrive/c/Users/Derek/CLionProjects/Lab7/Lab7/cmake-build-debug/CMakeFiles/Lab7.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/Lab7.dir/depend

