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

# Utility rule file for test-all.

# Include the progress variables for this target.
include lib/clucene/src/test/CMakeFiles/test-all.dir/progress.make

lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-pedantic
lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-ascii
lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-namespace
lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-mmap
lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-singlethreading
lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-refcnt
lib/clucene/src/test/CMakeFiles/test-all: bin/cl_test-platform-charfuncs
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && ../../../../bin/cl_test-pedantic
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && ../../../../bin/cl_test-ascii
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && ../../../../bin/cl_test-namespace
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && ../../../../bin/cl_test-mmap
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && ../../../../bin/cl_test-singlethreading
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && ../../../../bin/cl_test-refcnt

test-all: lib/clucene/src/test/CMakeFiles/test-all
test-all: lib/clucene/src/test/CMakeFiles/test-all.dir/build.make
.PHONY : test-all

# Rule to build all files generated by this target.
lib/clucene/src/test/CMakeFiles/test-all.dir/build: test-all
.PHONY : lib/clucene/src/test/CMakeFiles/test-all.dir/build

lib/clucene/src/test/CMakeFiles/test-all.dir/clean:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test && $(CMAKE_COMMAND) -P CMakeFiles/test-all.dir/cmake_clean.cmake
.PHONY : lib/clucene/src/test/CMakeFiles/test-all.dir/clean

lib/clucene/src/test/CMakeFiles/test-all.dir/depend:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene/src/test/CMakeFiles/test-all.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/clucene/src/test/CMakeFiles/test-all.dir/depend

