# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.26

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake

# The command to remove a file.
RM = /opt/homebrew/Cellar/cmake/3.26.4/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build

# Include any dependencies generated for this target.
include addons/image/CMakeFiles/allegro_image.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include addons/image/CMakeFiles/allegro_image.dir/compiler_depend.make

# Include the progress variables for this target.
include addons/image/CMakeFiles/allegro_image.dir/progress.make

# Include the compile flags for this target's objects.
include addons/image/CMakeFiles/allegro_image.dir/flags.make

addons/image/CMakeFiles/allegro_image.dir/bmp.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/bmp.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/bmp.c
addons/image/CMakeFiles/allegro_image.dir/bmp.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object addons/image/CMakeFiles/allegro_image.dir/bmp.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/bmp.c.o -MF CMakeFiles/allegro_image.dir/bmp.c.o.d -o CMakeFiles/allegro_image.dir/bmp.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/bmp.c

addons/image/CMakeFiles/allegro_image.dir/bmp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/bmp.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/bmp.c > CMakeFiles/allegro_image.dir/bmp.c.i

addons/image/CMakeFiles/allegro_image.dir/bmp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/bmp.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/bmp.c -o CMakeFiles/allegro_image.dir/bmp.c.s

addons/image/CMakeFiles/allegro_image.dir/iio.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/iio.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/iio.c
addons/image/CMakeFiles/allegro_image.dir/iio.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building C object addons/image/CMakeFiles/allegro_image.dir/iio.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/iio.c.o -MF CMakeFiles/allegro_image.dir/iio.c.o.d -o CMakeFiles/allegro_image.dir/iio.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/iio.c

addons/image/CMakeFiles/allegro_image.dir/iio.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/iio.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/iio.c > CMakeFiles/allegro_image.dir/iio.c.i

addons/image/CMakeFiles/allegro_image.dir/iio.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/iio.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/iio.c -o CMakeFiles/allegro_image.dir/iio.c.s

addons/image/CMakeFiles/allegro_image.dir/pcx.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/pcx.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/pcx.c
addons/image/CMakeFiles/allegro_image.dir/pcx.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Building C object addons/image/CMakeFiles/allegro_image.dir/pcx.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/pcx.c.o -MF CMakeFiles/allegro_image.dir/pcx.c.o.d -o CMakeFiles/allegro_image.dir/pcx.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/pcx.c

addons/image/CMakeFiles/allegro_image.dir/pcx.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/pcx.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/pcx.c > CMakeFiles/allegro_image.dir/pcx.c.i

addons/image/CMakeFiles/allegro_image.dir/pcx.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/pcx.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/pcx.c -o CMakeFiles/allegro_image.dir/pcx.c.s

addons/image/CMakeFiles/allegro_image.dir/tga.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/tga.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/tga.c
addons/image/CMakeFiles/allegro_image.dir/tga.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Building C object addons/image/CMakeFiles/allegro_image.dir/tga.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/tga.c.o -MF CMakeFiles/allegro_image.dir/tga.c.o.d -o CMakeFiles/allegro_image.dir/tga.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/tga.c

addons/image/CMakeFiles/allegro_image.dir/tga.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/tga.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/tga.c > CMakeFiles/allegro_image.dir/tga.c.i

addons/image/CMakeFiles/allegro_image.dir/tga.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/tga.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/tga.c -o CMakeFiles/allegro_image.dir/tga.c.s

addons/image/CMakeFiles/allegro_image.dir/dds.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/dds.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/dds.c
addons/image/CMakeFiles/allegro_image.dir/dds.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Building C object addons/image/CMakeFiles/allegro_image.dir/dds.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/dds.c.o -MF CMakeFiles/allegro_image.dir/dds.c.o.d -o CMakeFiles/allegro_image.dir/dds.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/dds.c

addons/image/CMakeFiles/allegro_image.dir/dds.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/dds.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/dds.c > CMakeFiles/allegro_image.dir/dds.c.i

addons/image/CMakeFiles/allegro_image.dir/dds.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/dds.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/dds.c -o CMakeFiles/allegro_image.dir/dds.c.s

addons/image/CMakeFiles/allegro_image.dir/identify.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/identify.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/identify.c
addons/image/CMakeFiles/allegro_image.dir/identify.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Building C object addons/image/CMakeFiles/allegro_image.dir/identify.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/identify.c.o -MF CMakeFiles/allegro_image.dir/identify.c.o.d -o CMakeFiles/allegro_image.dir/identify.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/identify.c

addons/image/CMakeFiles/allegro_image.dir/identify.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/identify.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/identify.c > CMakeFiles/allegro_image.dir/identify.c.i

addons/image/CMakeFiles/allegro_image.dir/identify.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/identify.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/identify.c -o CMakeFiles/allegro_image.dir/identify.c.s

addons/image/CMakeFiles/allegro_image.dir/macosx.m.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/macosx.m.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/macosx.m
addons/image/CMakeFiles/allegro_image.dir/macosx.m.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "Building C object addons/image/CMakeFiles/allegro_image.dir/macosx.m.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/macosx.m.o -MF CMakeFiles/allegro_image.dir/macosx.m.o.d -o CMakeFiles/allegro_image.dir/macosx.m.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/macosx.m

addons/image/CMakeFiles/allegro_image.dir/macosx.m.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/macosx.m.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/macosx.m > CMakeFiles/allegro_image.dir/macosx.m.i

addons/image/CMakeFiles/allegro_image.dir/macosx.m.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/macosx.m.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/macosx.m -o CMakeFiles/allegro_image.dir/macosx.m.s

addons/image/CMakeFiles/allegro_image.dir/webp.c.o: addons/image/CMakeFiles/allegro_image.dir/flags.make
addons/image/CMakeFiles/allegro_image.dir/webp.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/webp.c
addons/image/CMakeFiles/allegro_image.dir/webp.c.o: addons/image/CMakeFiles/allegro_image.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Building C object addons/image/CMakeFiles/allegro_image.dir/webp.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT addons/image/CMakeFiles/allegro_image.dir/webp.c.o -MF CMakeFiles/allegro_image.dir/webp.c.o.d -o CMakeFiles/allegro_image.dir/webp.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/webp.c

addons/image/CMakeFiles/allegro_image.dir/webp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/allegro_image.dir/webp.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/webp.c > CMakeFiles/allegro_image.dir/webp.c.i

addons/image/CMakeFiles/allegro_image.dir/webp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/allegro_image.dir/webp.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image/webp.c -o CMakeFiles/allegro_image.dir/webp.c.s

# Object files for target allegro_image
allegro_image_OBJECTS = \
"CMakeFiles/allegro_image.dir/bmp.c.o" \
"CMakeFiles/allegro_image.dir/iio.c.o" \
"CMakeFiles/allegro_image.dir/pcx.c.o" \
"CMakeFiles/allegro_image.dir/tga.c.o" \
"CMakeFiles/allegro_image.dir/dds.c.o" \
"CMakeFiles/allegro_image.dir/identify.c.o" \
"CMakeFiles/allegro_image.dir/macosx.m.o" \
"CMakeFiles/allegro_image.dir/webp.c.o"

# External object files for target allegro_image
allegro_image_EXTERNAL_OBJECTS =

lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/bmp.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/iio.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/pcx.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/tga.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/dds.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/identify.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/macosx.m.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/webp.c.o
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/build.make
lib/liballegro_image.5.2.7.dylib: lib/liballegro.5.2.7.dylib
lib/liballegro_image.5.2.7.dylib: /opt/homebrew/Cellar/webp/1.3.0_1/lib/libwebp.dylib
lib/liballegro_image.5.2.7.dylib: addons/image/CMakeFiles/allegro_image.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_9) "Linking C shared library ../../lib/liballegro_image.dylib"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/allegro_image.dir/link.txt --verbose=$(VERBOSE)
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/liballegro_image.5.2.7.dylib ../../lib/liballegro_image.5.2.dylib ../../lib/liballegro_image.dylib

lib/liballegro_image.5.2.dylib: lib/liballegro_image.5.2.7.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate lib/liballegro_image.5.2.dylib

lib/liballegro_image.dylib: lib/liballegro_image.5.2.7.dylib
	@$(CMAKE_COMMAND) -E touch_nocreate lib/liballegro_image.dylib

# Rule to build all files generated by this target.
addons/image/CMakeFiles/allegro_image.dir/build: lib/liballegro_image.dylib
.PHONY : addons/image/CMakeFiles/allegro_image.dir/build

addons/image/CMakeFiles/allegro_image.dir/clean:
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image && $(CMAKE_COMMAND) -P CMakeFiles/allegro_image.dir/cmake_clean.cmake
.PHONY : addons/image/CMakeFiles/allegro_image.dir/clean

addons/image/CMakeFiles/allegro_image.dir/depend:
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/addons/image /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/addons/image/CMakeFiles/allegro_image.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : addons/image/CMakeFiles/allegro_image.dir/depend

