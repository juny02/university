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
CMAKE_SOURCE_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k

# Include any dependencies generated for this target.
include CMakeFiles/print_member.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/print_member.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/print_member.dir/flags.make

CMakeFiles/print_member.dir/3.cpp.o: CMakeFiles/print_member.dir/flags.make
CMakeFiles/print_member.dir/3.cpp.o: ../3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/print_member.dir/3.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/print_member.dir/3.cpp.o -c /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/3.cpp

CMakeFiles/print_member.dir/3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/print_member.dir/3.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/3.cpp > CMakeFiles/print_member.dir/3.cpp.i

CMakeFiles/print_member.dir/3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/print_member.dir/3.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/3.cpp -o CMakeFiles/print_member.dir/3.cpp.s

CMakeFiles/print_member.dir/3.cpp.o.requires:

.PHONY : CMakeFiles/print_member.dir/3.cpp.o.requires

CMakeFiles/print_member.dir/3.cpp.o.provides: CMakeFiles/print_member.dir/3.cpp.o.requires
	$(MAKE) -f CMakeFiles/print_member.dir/build.make CMakeFiles/print_member.dir/3.cpp.o.provides.build
.PHONY : CMakeFiles/print_member.dir/3.cpp.o.provides

CMakeFiles/print_member.dir/3.cpp.o.provides.build: CMakeFiles/print_member.dir/3.cpp.o


# Object files for target print_member
print_member_OBJECTS = \
"CMakeFiles/print_member.dir/3.cpp.o"

# External object files for target print_member
print_member_EXTERNAL_OBJECTS =

print_member: CMakeFiles/print_member.dir/3.cpp.o
print_member: CMakeFiles/print_member.dir/build.make
print_member: CMakeFiles/print_member.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable print_member"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/print_member.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/print_member.dir/build: print_member

.PHONY : CMakeFiles/print_member.dir/build

CMakeFiles/print_member.dir/requires: CMakeFiles/print_member.dir/3.cpp.o.requires

.PHONY : CMakeFiles/print_member.dir/requires

CMakeFiles/print_member.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/print_member.dir/cmake_clean.cmake
.PHONY : CMakeFiles/print_member.dir/clean

CMakeFiles/print_member.dir/depend:
	cd /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3 /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k /home/juny/2020_ITE1015_2020006208/2020006208_Assignment9-1/9-1-3/k/CMakeFiles/print_member.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/print_member.dir/depend

