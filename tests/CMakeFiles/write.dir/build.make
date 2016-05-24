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
include tests/CMakeFiles/write.dir/depend.make

# Include the progress variables for this target.
include tests/CMakeFiles/write.dir/progress.make

# Include the compile flags for this target's objects.
include tests/CMakeFiles/write.dir/flags.make

tests/CMakeFiles/write.dir/write.cpp.o: tests/CMakeFiles/write.dir/flags.make
tests/CMakeFiles/write.dir/write.cpp.o: tests/write.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /afs/desy.de/user/s/steinweg/devel/podio/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object tests/CMakeFiles/write.dir/write.cpp.o"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && /afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/g++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/write.dir/write.cpp.o -c /afs/desy.de/user/s/steinweg/devel/podio/tests/write.cpp

tests/CMakeFiles/write.dir/write.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/write.dir/write.cpp.i"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && /afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -E /afs/desy.de/user/s/steinweg/devel/podio/tests/write.cpp > CMakeFiles/write.dir/write.cpp.i

tests/CMakeFiles/write.dir/write.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/write.dir/write.cpp.s"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && /afs/cern.ch/sw/lcg/contrib/gcc/4.8.1/x86_64-slc6-gcc48-opt/bin/g++  $(CXX_DEFINES) $(CXX_FLAGS) -S /afs/desy.de/user/s/steinweg/devel/podio/tests/write.cpp -o CMakeFiles/write.dir/write.cpp.s

tests/CMakeFiles/write.dir/write.cpp.o.requires:
.PHONY : tests/CMakeFiles/write.dir/write.cpp.o.requires

tests/CMakeFiles/write.dir/write.cpp.o.provides: tests/CMakeFiles/write.dir/write.cpp.o.requires
	$(MAKE) -f tests/CMakeFiles/write.dir/build.make tests/CMakeFiles/write.dir/write.cpp.o.provides.build
.PHONY : tests/CMakeFiles/write.dir/write.cpp.o.provides

tests/CMakeFiles/write.dir/write.cpp.o.provides.build: tests/CMakeFiles/write.dir/write.cpp.o

# Object files for target write
write_OBJECTS = \
"CMakeFiles/write.dir/write.cpp.o"

# External object files for target write
write_EXTERNAL_OBJECTS =

tests/write: tests/CMakeFiles/write.dir/write.cpp.o
tests/write: tests/CMakeFiles/write.dir/build.make
tests/write: tests/libTestDataModelDict.so
tests/write: tests/libTestDataModel.so
tests/write: src/libpodio.so
tests/write: tests/CMakeFiles/write.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable write"
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/write.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
tests/CMakeFiles/write.dir/build: tests/write
.PHONY : tests/CMakeFiles/write.dir/build

tests/CMakeFiles/write.dir/requires: tests/CMakeFiles/write.dir/write.cpp.o.requires
.PHONY : tests/CMakeFiles/write.dir/requires

tests/CMakeFiles/write.dir/clean:
	cd /afs/desy.de/user/s/steinweg/devel/podio/tests && $(CMAKE_COMMAND) -P CMakeFiles/write.dir/cmake_clean.cmake
.PHONY : tests/CMakeFiles/write.dir/clean

tests/CMakeFiles/write.dir/depend:
	cd /afs/desy.de/user/s/steinweg/devel/podio && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /afs/desy.de/user/s/steinweg/devel/podio /afs/desy.de/user/s/steinweg/devel/podio/tests /afs/desy.de/user/s/steinweg/devel/podio /afs/desy.de/user/s/steinweg/devel/podio/tests /afs/desy.de/user/s/steinweg/devel/podio/tests/CMakeFiles/write.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : tests/CMakeFiles/write.dir/depend

