# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.0

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
CMAKE_SOURCE_DIR = /home/turbineyan/Downloads/WizQTClient-2.1.0

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/turbineyan/Downloads/WizQTClient-2.1.0

# Include any dependencies generated for this target.
include lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/depend.make

# Include the progress variables for this target.
include lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/progress.make

# Include the compile flags for this target's objects.
include lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/flags.make

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/flags.make
lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o: lib/clucene/src/core/CLucene/CLMonolithic.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/core/CLucene/CLMonolithic.cpp

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/core/CLucene/CLMonolithic.cpp > CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.i

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/core/CLucene/CLMonolithic.cpp -o CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.s

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.requires:
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.requires

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.provides: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.requires
	$(MAKE) -f lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/build.make lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.provides.build
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.provides

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.provides.build: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/flags.make
lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o: lib/clucene/src/test/CLMonolithic_Test.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test/CLMonolithic_Test.cpp

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test/CLMonolithic_Test.cpp > CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.i

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test/CLMonolithic_Test.cpp -o CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.s

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.requires:
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.requires

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.provides: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.requires
	$(MAKE) -f lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/build.make lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.provides.build
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.provides

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.provides.build: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o

# Object files for target cl_test-refcnt
cl_test__refcnt_OBJECTS = \
"CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o" \
"CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o"

# External object files for target cl_test-refcnt
cl_test__refcnt_EXTERNAL_OBJECTS =

bin/cl_test-refcnt: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o
bin/cl_test-refcnt: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o
bin/cl_test-refcnt: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/build.make
bin/cl_test-refcnt: /usr/lib/x86_64-linux-gnu/libz.so
bin/cl_test-refcnt: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX executable ../../../../bin/cl_test-refcnt"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/cl_test-refcnt.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/build: bin/cl_test-refcnt
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/build

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/requires: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/__/core/CLucene/CLMonolithic.o.requires
lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/requires: lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/CLMonolithic_Test.o.requires
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/requires

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/clean:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && $(CMAKE_COMMAND) -P CMakeFiles/cl_test-refcnt.dir/cmake_clean.cmake
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/clean

lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/depend:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/clucene/src/test/CMakeFiles/cl_test-refcnt.dir/depend

