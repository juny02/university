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
CMAKE_SOURCE_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v

# Include any dependencies generated for this target.
include CMakeFiles/string.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/string.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/string.dir/flags.make

CMakeFiles/string.dir/my_string2.cpp.o: CMakeFiles/string.dir/flags.make
CMakeFiles/string.dir/my_string2.cpp.o: ../my_string2.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/string.dir/my_string2.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/string.dir/my_string2.cpp.o -c /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/my_string2.cpp

CMakeFiles/string.dir/my_string2.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string.dir/my_string2.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/my_string2.cpp > CMakeFiles/string.dir/my_string2.cpp.i

CMakeFiles/string.dir/my_string2.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string.dir/my_string2.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/my_string2.cpp -o CMakeFiles/string.dir/my_string2.cpp.s

CMakeFiles/string.dir/my_string2.cpp.o.requires:

.PHONY : CMakeFiles/string.dir/my_string2.cpp.o.requires

CMakeFiles/string.dir/my_string2.cpp.o.provides: CMakeFiles/string.dir/my_string2.cpp.o.requires
	$(MAKE) -f CMakeFiles/string.dir/build.make CMakeFiles/string.dir/my_string2.cpp.o.provides.build
.PHONY : CMakeFiles/string.dir/my_string2.cpp.o.provides

CMakeFiles/string.dir/my_string2.cpp.o.provides.build: CMakeFiles/string.dir/my_string2.cpp.o


CMakeFiles/string.dir/main.cpp.o: CMakeFiles/string.dir/flags.make
CMakeFiles/string.dir/main.cpp.o: ../main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object CMakeFiles/string.dir/main.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/string.dir/main.cpp.o -c /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/main.cpp

CMakeFiles/string.dir/main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/string.dir/main.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/main.cpp > CMakeFiles/string.dir/main.cpp.i

CMakeFiles/string.dir/main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/string.dir/main.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/main.cpp -o CMakeFiles/string.dir/main.cpp.s

CMakeFiles/string.dir/main.cpp.o.requires:

.PHONY : CMakeFiles/string.dir/main.cpp.o.requires

CMakeFiles/string.dir/main.cpp.o.provides: CMakeFiles/string.dir/main.cpp.o.requires
	$(MAKE) -f CMakeFiles/string.dir/build.make CMakeFiles/string.dir/main.cpp.o.provides.build
.PHONY : CMakeFiles/string.dir/main.cpp.o.provides

CMakeFiles/string.dir/main.cpp.o.provides.build: CMakeFiles/string.dir/main.cpp.o


# Object files for target string
string_OBJECTS = \
"CMakeFiles/string.dir/my_string2.cpp.o" \
"CMakeFiles/string.dir/main.cpp.o"

# External object files for target string
string_EXTERNAL_OBJECTS =

string: CMakeFiles/string.dir/my_string2.cpp.o
string: CMakeFiles/string.dir/main.cpp.o
string: CMakeFiles/string.dir/build.make
string: CMakeFiles/string.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable string"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/string.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/string.dir/build: string

.PHONY : CMakeFiles/string.dir/build

CMakeFiles/string.dir/requires: CMakeFiles/string.dir/my_string2.cpp.o.requires
CMakeFiles/string.dir/requires: CMakeFiles/string.dir/main.cpp.o.requires

.PHONY : CMakeFiles/string.dir/requires

CMakeFiles/string.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/string.dir/cmake_clean.cmake
.PHONY : CMakeFiles/string.dir/clean

CMakeFiles/string.dir/depend:
	cd /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v /home/juny/2020_ITE1015_2020006208/2020006208_Assignment11-1/11-1-2/v/CMakeFiles/string.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/string.dir/depend
