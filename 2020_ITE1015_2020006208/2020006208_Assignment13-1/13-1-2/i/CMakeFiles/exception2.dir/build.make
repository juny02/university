# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

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
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i

# Include any dependencies generated for this target.
include CMakeFiles/exception2.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/exception2.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/exception2.dir/flags.make

CMakeFiles/exception2.dir/2.cpp.o: CMakeFiles/exception2.dir/flags.make
CMakeFiles/exception2.dir/2.cpp.o: ../2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/exception2.dir/2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/exception2.dir/2.cpp.o -c /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/2.cpp

CMakeFiles/exception2.dir/2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/exception2.dir/2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/2.cpp > CMakeFiles/exception2.dir/2.cpp.i

CMakeFiles/exception2.dir/2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/exception2.dir/2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/2.cpp -o CMakeFiles/exception2.dir/2.cpp.s

CMakeFiles/exception2.dir/2.cpp.o.requires:

.PHONY : CMakeFiles/exception2.dir/2.cpp.o.requires

CMakeFiles/exception2.dir/2.cpp.o.provides: CMakeFiles/exception2.dir/2.cpp.o.requires
	$(MAKE) -f CMakeFiles/exception2.dir/build.make CMakeFiles/exception2.dir/2.cpp.o.provides.build
.PHONY : CMakeFiles/exception2.dir/2.cpp.o.provides

CMakeFiles/exception2.dir/2.cpp.o.provides.build: CMakeFiles/exception2.dir/2.cpp.o


# Object files for target exception2
exception2_OBJECTS = \
"CMakeFiles/exception2.dir/2.cpp.o"

# External object files for target exception2
exception2_EXTERNAL_OBJECTS =

exception2: CMakeFiles/exception2.dir/2.cpp.o
exception2: CMakeFiles/exception2.dir/build.make
exception2: CMakeFiles/exception2.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable exception2"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/exception2.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/exception2.dir/build: exception2

.PHONY : CMakeFiles/exception2.dir/build

CMakeFiles/exception2.dir/requires: CMakeFiles/exception2.dir/2.cpp.o.requires

.PHONY : CMakeFiles/exception2.dir/requires

CMakeFiles/exception2.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/exception2.dir/cmake_clean.cmake
.PHONY : CMakeFiles/exception2.dir/clean

CMakeFiles/exception2.dir/depend:
	cd /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i /home/juny/2020_ITE1015_2020006208/2020006208_Assignment13-1/13-1-2/i/CMakeFiles/exception2.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/exception2.dir/depend

