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
include lib/quazip/CMakeFiles/quazip.dir/depend.make

# Include the progress variables for this target.
include lib/quazip/CMakeFiles/quazip.dir/progress.make

# Include the compile flags for this target's objects.
include lib/quazip/CMakeFiles/quazip.dir/flags.make

lib/quazip/CMakeFiles/quazip.dir/zip.c.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/zip.c.o: lib/quazip/zip.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object lib/quazip/CMakeFiles/quazip.dir/zip.c.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/quazip.dir/zip.c.o   -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/zip.c

lib/quazip/CMakeFiles/quazip.dir/zip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quazip.dir/zip.c.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/zip.c > CMakeFiles/quazip.dir/zip.c.i

lib/quazip/CMakeFiles/quazip.dir/zip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quazip.dir/zip.c.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/zip.c -o CMakeFiles/quazip.dir/zip.c.s

lib/quazip/CMakeFiles/quazip.dir/zip.c.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/zip.c.o.requires

lib/quazip/CMakeFiles/quazip.dir/zip.c.o.provides: lib/quazip/CMakeFiles/quazip.dir/zip.c.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/zip.c.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/zip.c.o.provides

lib/quazip/CMakeFiles/quazip.dir/zip.c.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/zip.c.o

lib/quazip/CMakeFiles/quazip.dir/unzip.c.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/unzip.c.o: lib/quazip/unzip.c
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building C object lib/quazip/CMakeFiles/quazip.dir/unzip.c.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -o CMakeFiles/quazip.dir/unzip.c.o   -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/unzip.c

lib/quazip/CMakeFiles/quazip.dir/unzip.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/quazip.dir/unzip.c.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/unzip.c > CMakeFiles/quazip.dir/unzip.c.i

lib/quazip/CMakeFiles/quazip.dir/unzip.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/quazip.dir/unzip.c.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/cc  $(C_DEFINES) $(C_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/unzip.c -o CMakeFiles/quazip.dir/unzip.c.s

lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.requires

lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.provides: lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.provides

lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/unzip.c.o

lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o: lib/quazip/quacrc32.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quacrc32.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quacrc32.cpp

lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quacrc32.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quacrc32.cpp > CMakeFiles/quazip.dir/quacrc32.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quacrc32.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quacrc32.cpp -o CMakeFiles/quazip.dir/quacrc32.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o: lib/quazip/quazip.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quazip.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazip.cpp

lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quazip.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazip.cpp > CMakeFiles/quazip.dir/quazip.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quazip.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazip.cpp -o CMakeFiles/quazip.dir/quazip.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o: lib/quazip/quaziodevice.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quaziodevice.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quaziodevice.cpp

lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quaziodevice.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quaziodevice.cpp > CMakeFiles/quazip.dir/quaziodevice.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quaziodevice.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quaziodevice.cpp -o CMakeFiles/quazip.dir/quaziodevice.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o: lib/quazip/quazipdir.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quazipdir.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipdir.cpp

lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quazipdir.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipdir.cpp > CMakeFiles/quazip.dir/quazipdir.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quazipdir.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipdir.cpp -o CMakeFiles/quazip.dir/quazipdir.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o: lib/quazip/quazipnewinfo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_7)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quazipnewinfo.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipnewinfo.cpp

lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quazipnewinfo.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipnewinfo.cpp > CMakeFiles/quazip.dir/quazipnewinfo.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quazipnewinfo.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipnewinfo.cpp -o CMakeFiles/quazip.dir/quazipnewinfo.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o

lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o: lib/quazip/qioapi.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_8)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/qioapi.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/qioapi.cpp

lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/qioapi.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/qioapi.cpp > CMakeFiles/quazip.dir/qioapi.cpp.i

lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/qioapi.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/qioapi.cpp -o CMakeFiles/quazip.dir/qioapi.cpp.s

lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o: lib/quazip/quaadler32.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_9)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quaadler32.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quaadler32.cpp

lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quaadler32.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quaadler32.cpp > CMakeFiles/quazip.dir/quaadler32.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quaadler32.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quaadler32.cpp -o CMakeFiles/quazip.dir/quaadler32.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o: lib/quazip/quazipfile.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_10)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quazipfile.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipfile.cpp

lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quazipfile.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipfile.cpp > CMakeFiles/quazip.dir/quazipfile.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quazipfile.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipfile.cpp -o CMakeFiles/quazip.dir/quazipfile.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o: lib/quazip/quagzipfile.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_11)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quagzipfile.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quagzipfile.cpp

lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quagzipfile.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quagzipfile.cpp > CMakeFiles/quazip.dir/quagzipfile.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quagzipfile.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quagzipfile.cpp -o CMakeFiles/quazip.dir/quagzipfile.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o

lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o: lib/quazip/JlCompress.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_12)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/JlCompress.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/JlCompress.cpp

lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/JlCompress.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/JlCompress.cpp > CMakeFiles/quazip.dir/JlCompress.cpp.i

lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/JlCompress.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/JlCompress.cpp -o CMakeFiles/quazip.dir/JlCompress.cpp.s

lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o: lib/quazip/quazipfileinfo.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_13)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quazipfileinfo.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipfileinfo.cpp

lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quazipfileinfo.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipfileinfo.cpp > CMakeFiles/quazip.dir/quazipfileinfo.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quazipfileinfo.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazipfileinfo.cpp -o CMakeFiles/quazip.dir/quazipfileinfo.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o

lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o: lib/quazip/CMakeFiles/quazip.dir/flags.make
lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o: lib/quazip/quazip_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_14)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/quazip.dir/quazip_automoc.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazip_automoc.cpp

lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/quazip.dir/quazip_automoc.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazip_automoc.cpp > CMakeFiles/quazip.dir/quazip_automoc.cpp.i

lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/quazip.dir/quazip_automoc.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/quazip_automoc.cpp -o CMakeFiles/quazip.dir/quazip_automoc.cpp.s

lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.requires:
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.requires

lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.provides: lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.requires
	$(MAKE) -f lib/quazip/CMakeFiles/quazip.dir/build.make lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.provides.build
.PHONY : lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.provides

lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.provides.build: lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o

# Object files for target quazip
quazip_OBJECTS = \
"CMakeFiles/quazip.dir/zip.c.o" \
"CMakeFiles/quazip.dir/unzip.c.o" \
"CMakeFiles/quazip.dir/quacrc32.cpp.o" \
"CMakeFiles/quazip.dir/quazip.cpp.o" \
"CMakeFiles/quazip.dir/quaziodevice.cpp.o" \
"CMakeFiles/quazip.dir/quazipdir.cpp.o" \
"CMakeFiles/quazip.dir/quazipnewinfo.cpp.o" \
"CMakeFiles/quazip.dir/qioapi.cpp.o" \
"CMakeFiles/quazip.dir/quaadler32.cpp.o" \
"CMakeFiles/quazip.dir/quazipfile.cpp.o" \
"CMakeFiles/quazip.dir/quagzipfile.cpp.o" \
"CMakeFiles/quazip.dir/JlCompress.cpp.o" \
"CMakeFiles/quazip.dir/quazipfileinfo.cpp.o" \
"CMakeFiles/quazip.dir/quazip_automoc.cpp.o"

# External object files for target quazip
quazip_EXTERNAL_OBJECTS =

bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/zip.c.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/unzip.c.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/build.make
bin/libquazip.a: lib/quazip/CMakeFiles/quazip.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX static library ../../bin/libquazip.a"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && $(CMAKE_COMMAND) -P CMakeFiles/quazip.dir/cmake_clean_target.cmake
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/quazip.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
lib/quazip/CMakeFiles/quazip.dir/build: bin/libquazip.a
.PHONY : lib/quazip/CMakeFiles/quazip.dir/build

lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/zip.c.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/unzip.c.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quacrc32.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quazip.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quaziodevice.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quazipdir.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quazipnewinfo.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/qioapi.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quaadler32.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quazipfile.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quagzipfile.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/JlCompress.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quazipfileinfo.cpp.o.requires
lib/quazip/CMakeFiles/quazip.dir/requires: lib/quazip/CMakeFiles/quazip.dir/quazip_automoc.cpp.o.requires
.PHONY : lib/quazip/CMakeFiles/quazip.dir/requires

lib/quazip/CMakeFiles/quazip.dir/clean:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip && $(CMAKE_COMMAND) -P CMakeFiles/quazip.dir/cmake_clean.cmake
.PHONY : lib/quazip/CMakeFiles/quazip.dir/clean

lib/quazip/CMakeFiles/quazip.dir/depend:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/quazip/CMakeFiles/quazip.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/quazip/CMakeFiles/quazip.dir/depend
