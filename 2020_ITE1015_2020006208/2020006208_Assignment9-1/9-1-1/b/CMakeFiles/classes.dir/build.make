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
CMAKE_SOURCE_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b

# Include any dependencies generated for this target.
include CMakeFiles/classes.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/classes.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/classes.dir/flags.make

CMakeFiles/classes.dir/1.cpp.o: CMakeFiles/classes.dir/flags.make
CMakeFiles/classes.dir/1.cpp.o: ../1.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/classes.dir/1.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/classes.dir/1.cpp.o -c /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/1.cpp

CMakeFiles/classes.dir/1.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/classes.dir/1.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/1.cpp > CMakeFiles/classes.dir/1.cpp.i

CMakeFiles/classes.dir/1.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/classes.dir/1.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/1.cpp -o CMakeFiles/classes.dir/1.cpp.s

CMakeFiles/classes.dir/1.cpp.o.requires:

.PHONY : CMakeFiles/classes.dir/1.cpp.o.requires

CMakeFiles/classes.dir/1.cpp.o.provides: CMakeFiles/classes.dir/1.cpp.o.requires
	$(MAKE) -f CMakeFiles/classes.dir/build.make CMakeFiles/classes.dir/1.cpp.o.provides.build
.PHONY : CMakeFiles/classes.dir/1.cpp.o.provides

CMakeFiles/classes.dir/1.cpp.o.provides.build: CMakeFiles/classes.dir/1.cpp.o


# Object files for target classes
classes_OBJECTS = \
"CMakeFiles/classes.dir/1.cpp.o"

# External object files for target classes
classes_EXTERNAL_OBJECTS =

classes: CMakeFiles/classes.dir/1.cpp.o
classes: CMakeFiles/classes.dir/build.make
classes: CMakeFiles/classes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable classes"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/classes.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/classes.dir/build: classes

.PHONY : CMakeFiles/classes.dir/build

CMakeFiles/classes.dir/requires: CMakeFiles/classes.dir/1.cpp.o.requires

.PHONY : CMakeFiles/classes.dir/requires

CMakeFiles/classes.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/classes.dir/cmake_clean.cmake
.PHONY : CMakeFiles/classes.dir/clean

CMakeFiles/classes.dir/depend:
	cd /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-1/b/CMakeFiles/classes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/classes.dir/depend
