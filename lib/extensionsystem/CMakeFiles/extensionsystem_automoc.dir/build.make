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

# Utility rule file for extensionsystem_automoc.

# Include the progress variables for this target.
include lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/progress.make

lib/extensionsystem/CMakeFiles/extensionsystem_automoc:
	$(CMAKE_COMMAND) -E cmake_progress_report /home/turbineyan/Downloads/WizQTClient-2.1.0/CMakeFiles $(CMAKE_PROGRESS_1)
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold "Automatic moc for target extensionsystem"
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/extensionsystem && /usr/bin/cmake -E cmake_autogen /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/ Release

extensionsystem_automoc: lib/extensionsystem/CMakeFiles/extensionsystem_automoc
extensionsystem_automoc: lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/build.make
.PHONY : extensionsystem_automoc

# Rule to build all files generated by this target.
lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/build: extensionsystem_automoc
.PHONY : lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/build

lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/clean:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/extensionsystem && $(CMAKE_COMMAND) -P CMakeFiles/extensionsystem_automoc.dir/cmake_clean.cmake
.PHONY : lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/clean

lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/depend:
	cd /home/turbineyan/Downloads/WizQTClient-2.1.0 && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/extensionsystem /home/turbineyan/Downloads/WizQTClient-2.1.0 /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/extensionsystem /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : lib/extensionsystem/CMakeFiles/extensionsystem_automoc.dir/depend

