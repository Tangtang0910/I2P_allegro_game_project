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
include examples/CMakeFiles/ex_mixer_pp.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/ex_mixer_pp.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/ex_mixer_pp.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/ex_mixer_pp.dir/flags.make

examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o: examples/CMakeFiles/ex_mixer_pp.dir/flags.make
examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o: /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/examples/ex_mixer_pp.c
examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o: examples/CMakeFiles/ex_mixer_pp.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building C object examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -MD -MT examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o -MF CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o.d -o CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o -c /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/examples/ex_mixer_pp.c

examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing C source to CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.i"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -E /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/examples/ex_mixer_pp.c > CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.i

examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling C source to assembly CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.s"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples && /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/cc $(C_DEFINES) $(C_INCLUDES) $(C_FLAGS) -S /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/examples/ex_mixer_pp.c -o CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.s

# Object files for target ex_mixer_pp
ex_mixer_pp_OBJECTS = \
"CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o"

# External object files for target ex_mixer_pp
ex_mixer_pp_EXTERNAL_OBJECTS =

examples/ex_mixer_pp: examples/CMakeFiles/ex_mixer_pp.dir/ex_mixer_pp.c.o
examples/ex_mixer_pp: examples/CMakeFiles/ex_mixer_pp.dir/build.make
examples/ex_mixer_pp: lib/liballegro_main.5.2.7.dylib
examples/ex_mixer_pp: lib/liballegro_acodec.5.2.7.dylib
examples/ex_mixer_pp: lib/liballegro_primitives.5.2.7.dylib
examples/ex_mixer_pp: lib/liballegro_image.5.2.7.dylib
examples/ex_mixer_pp: lib/liballegro_dialog.5.2.7.dylib
examples/ex_mixer_pp: lib/liballegro_audio.5.2.7.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libFLAC.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libogg.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libdumb.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libvorbisfile.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libvorbis.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libopusfile.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libopus.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libogg.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libdumb.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libvorbisfile.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libvorbis.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libopusfile.dylib
examples/ex_mixer_pp: /opt/homebrew/lib/libopus.dylib
examples/ex_mixer_pp: /opt/homebrew/Cellar/webp/1.3.0_1/lib/libwebp.dylib
examples/ex_mixer_pp: lib/liballegro.5.2.7.dylib
examples/ex_mixer_pp: examples/CMakeFiles/ex_mixer_pp.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking C executable ex_mixer_pp"
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/ex_mixer_pp.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/ex_mixer_pp.dir/build: examples/ex_mixer_pp
.PHONY : examples/CMakeFiles/ex_mixer_pp.dir/build

examples/CMakeFiles/ex_mixer_pp.dir/clean:
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/ex_mixer_pp.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/ex_mixer_pp.dir/clean

examples/CMakeFiles/ex_mixer_pp.dir/depend:
	cd /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/examples /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples /Users/liuyutang/Downloads/final_project_bundle/Final_project_template/allegro/build/examples/CMakeFiles/ex_mixer_pp.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/ex_mixer_pp.dir/depend

