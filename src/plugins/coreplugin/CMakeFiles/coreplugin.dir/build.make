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
include src/plugins/coreplugin/CMakeFiles/coreplugin.dir/depend.make

# Include the progress variables for this target.
include src/plugins/coreplugin/CMakeFiles/coreplugin.dir/progress.make

# Include the compile flags for this target's objects.
include src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o: src/plugins/coreplugin/coreplugin.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coreplugin.dir/coreplugin.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/coreplugin.cpp

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coreplugin.dir/coreplugin.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/coreplugin.cpp > CMakeFiles/coreplugin.dir/coreplugin.cpp.i

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coreplugin.dir/coreplugin.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/coreplugin.cpp -o CMakeFiles/coreplugin.dir/coreplugin.cpp.s

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.requires:
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.provides: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.requires
	$(MAKE) -f src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.provides.build
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.provides

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.provides.build: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o: src/plugins/coreplugin/icore.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_2)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coreplugin.dir/icore.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/icore.cpp

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coreplugin.dir/icore.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/icore.cpp > CMakeFiles/coreplugin.dir/icore.cpp.i

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coreplugin.dir/icore.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/icore.cpp -o CMakeFiles/coreplugin.dir/icore.cpp.s

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.requires:
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.provides: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.requires
	$(MAKE) -f src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.provides.build
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.provides

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.provides.build: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o: src/plugins/coreplugin/inoteview.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_3)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coreplugin.dir/inoteview.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/inoteview.cpp

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coreplugin.dir/inoteview.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/inoteview.cpp > CMakeFiles/coreplugin.dir/inoteview.cpp.i

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coreplugin.dir/inoteview.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/inoteview.cpp -o CMakeFiles/coreplugin.dir/inoteview.cpp.s

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.requires:
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.provides: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.requires
	$(MAKE) -f src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.provides.build
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.provides

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.provides.build: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o: src/plugins/coreplugin/itreeview.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_4)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coreplugin.dir/itreeview.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/itreeview.cpp

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coreplugin.dir/itreeview.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/itreeview.cpp > CMakeFiles/coreplugin.dir/itreeview.cpp.i

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coreplugin.dir/itreeview.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/itreeview.cpp -o CMakeFiles/coreplugin.dir/itreeview.cpp.s

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.requires:
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.provides: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.requires
	$(MAKE) -f src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.provides.build
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.provides

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.provides.build: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o: src/plugins/coreplugin/aboutdialog.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_5)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coreplugin.dir/aboutdialog.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/aboutdialog.cpp

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coreplugin.dir/aboutdialog.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/aboutdialog.cpp > CMakeFiles/coreplugin.dir/aboutdialog.cpp.i

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coreplugin.dir/aboutdialog.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/aboutdialog.cpp -o CMakeFiles/coreplugin.dir/aboutdialog.cpp.s

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.requires:
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.provides: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.requires
	$(MAKE) -f src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.provides.build
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.provides

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.provides.build: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/flags.make
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o: src/plugins/coreplugin/coreplugin_automoc.cpp
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_6)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Building CXX object src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++   $(CXX_DEFINES) $(CXX_FLAGS) -o CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o -c /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/coreplugin_automoc.cpp

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.i"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -E /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/coreplugin_automoc.cpp > CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.i

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.s"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/c++  $(CXX_DEFINES) $(CXX_FLAGS) -S /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/coreplugin_automoc.cpp -o CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.s

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.requires:
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.provides: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.requires
	$(MAKE) -f src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.provides.build
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.provides

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.provides.build: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o

# Object files for target coreplugin
coreplugin_OBJECTS = \
"CMakeFiles/coreplugin.dir/coreplugin.cpp.o" \
"CMakeFiles/coreplugin.dir/icore.cpp.o" \
"CMakeFiles/coreplugin.dir/inoteview.cpp.o" \
"CMakeFiles/coreplugin.dir/itreeview.cpp.o" \
"CMakeFiles/coreplugin.dir/aboutdialog.cpp.o" \
"CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o"

# External object files for target coreplugin
coreplugin_EXTERNAL_OBJECTS =

lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build.make
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtWebKit.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtXmlPatterns.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
lib/wiznote/plugins/libCore.so: lib/wiznote/plugins/libextensionsystem.so
lib/wiznote/plugins/libCore.so: lib/wiznote/plugins/libaggregation.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtWebKit.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtXmlPatterns.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtGui.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtXml.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtNetwork.so
lib/wiznote/plugins/libCore.so: /usr/lib/x86_64-linux-gnu/libQtCore.so
lib/wiznote/plugins/libCore.so: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --red --bold "Linking CXX shared library ../../../lib/wiznote/plugins/libCore.so"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/coreplugin.dir/link.txt --verbose=$(VERBOSE)
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && /usr/bin/cmake -E copy /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/Core.pluginspec /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/wiznote/plugins

# Rule to build all files generated by this target.
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build: lib/wiznote/plugins/libCore.so
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/build

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin.cpp.o.requires
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/icore.cpp.o.requires
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/inoteview.cpp.o.requires
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/itreeview.cpp.o.requires
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/aboutdialog.cpp.o.requires
src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires: src/plugins/coreplugin/CMakeFiles/coreplugin.dir/coreplugin_automoc.cpp.o.requires
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/requires

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/clean:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin && $(CMAKE_COMMAND) -P CMakeFiles/coreplugin.dir/cmake_clean.cmake
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/clean

src/plugins/coreplugin/CMakeFiles/coreplugin.dir/depend:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin /home/turbineyan/Downloads/WizQTClient-2.1.0/src/plugins/coreplugin/CMakeFiles/coreplugin.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : src/plugins/coreplugin/CMakeFiles/coreplugin.dir/depend

