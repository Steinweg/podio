# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 2.8

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

# The program to use to edit the cache.
CMAKE_EDIT_COMMAND = /usr/bin/ccmake

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /afs/desy.de/user/s/steinweg/devel/podio

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /afs/desy.de/user/s/steinweg/devel/podio

# Include any dependencies generated for this target.
include tests/CMakeFiles/unittest.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/unittest.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/unittest.dir/flags.make

tests/CMakeFiles/unittest.dir/unittest.cpp.o: tests/CMakeFiles/unittest.dir/flags.make
tests/CMakeFiles/unittest.dir/unittest.cpp.o: tests/unittest.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /afs/desy.de/user/s/steinweg/devel/podio/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/unittest.dir/unittest.cpp.o"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && /afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/unittest.dir/unittest.cpp.o -c /afs/desy.de/user/s/steinweg/devel/podio/tests/unittest.cpp

tests/CMakeFiles/unittest.dir/unittest.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/unittest.dir/unittest.cpp.i"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && /afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /afs/desy.de/user/s/steinweg/devel/podio/tests/unittest.cpp > CMakeFiles/unittest.dir/unittest.cpp.i

tests/CMakeFiles/unittest.dir/unittest.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/unittest.dir/unittest.cpp.s"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && /afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /afs/desy.de/user/s/steinweg/devel/podio/tests/unittest.cpp -o CMakeFiles/unittest.dir/unittest.cpp.s

tests/CMakeFiles/unittest.dir/unittest.cpp.o.requires:
.PHONY : tests/CMakeFiles/unittest.dir/unittest.cpp.o.requires

tests/CMakeFiles/unittest.dir/unittest.cpp.o.provides: tests/CMakeFiles/unittest.dir/unittest.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/unittest.dir/build.make tests/CMakeFiles/unittest.dir/unittest.cpp.o.provides.build
.PHONY : tests/CMakeFiles/unittest.dir/unittest.cpp.o.provides

tests/CMakeFiles/unittest.dir/unittest.cpp.o.provides.build: tests/CMakeFiles/unittest.dir/unittest.cpp.o

# Object files for target unittest
unittest_OBJECTS = \
"CMakeFiles/unittest.dir/unittest.cpp.o"

# External object files for target unittest
unittest_EXTERNAL_OBJECTS =

tests/unittest: tests/CMakeFiles/unittest.dir/unittest.cpp.o
tests/unittest: tests/CMakeFiles/unittest.dir/build.make
tests/unittest: tests/libTestDataModelDict.so
tests/unittest: tests/libTestDataModel.so
tests/unittest: src/libpodio.so
tests/unittest: tests/CMakeFiles/unittest.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable unittest"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/unittest.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/unittest.dir/build: tests/unittest
.PHONY : tests/CMakeFiles/unittest.dir/build

tests/CMakeFiles/unittest.dir/requires: tests/CMakeFiles/unittest.dir/unittest.cpp.o.requires
.PHONY : tests/CMakeFiles/unittest.dir/requires

tests/CMakeFiles/unittest.dir/clean:
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && $(CMAKE_COMMAND) -P CMakeFiles/unittest.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/unittest.dir/clean

tests/CMakeFiles/unittest.dir/depend:
	cd /afs/desy.de/user/s/steinweg/devel/podio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /afs/desy.de/user/s/steinweg/devel/podio /afs/desy.de/user/s/steinweg/devel/podio/tests /afs/desy.de/user/s/steinweg/devel/podio /afs/desy.de/user/s/steinweg/devel/podio/tests /afs/desy.de/user/s/steinweg/devel/podio/tests/CMakeFiles/unittest.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/unittest.dir/depend
