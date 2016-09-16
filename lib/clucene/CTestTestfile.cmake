# CMake generated Testfile for 
# Source directory: /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene
# Build directory: /home/turbineyan/Downloads/WizQTClient-2.1.0/lib/clucene
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(SimpleTest "/home/turbineyan/Downloads/WizQTClient-2.1.0/bin/cl_test")
subdirs(src/ext)
subdirs(src/shared)
subdirs(src/core)
subdirs(src/test)
subdirs(src/demo)
