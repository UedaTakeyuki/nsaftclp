# A modern and practical C language programming.
The following is a memo for myself about some tools and libraries that supplement the C language compiler and standard library. 
Due to the long history and conservative evolution of the C language, the functionality of the compiler and standard library of C is fairly simple.
This simplicity is one of the fascinations of the C language and the source of its speed and small footprint. However, you may be concerned that it will be difficult to write code to solve modern practical problems using a standard library that does not have features that other modern languages ​​have, such as an HTTP client or JSON parser.

Don't worry, many of these missing ones have been provided by passionate, dedicated and incredibly grateful C programming communities as wonderful pieces of stuff.
Thankfully, we can use these to make modern and practical programming in the C language.

I'm still looking for a comprehensive book on the complements needed for modern programming in C, the next book after the C language primer, but I have not found one yet. 
So I decided to leave a memo for myself with links to documentation for things I've used and found useful, some brief comments, and simple executable samples, as this repository. 

## Contents
- [Preface](contents/Preface)
- tools
  - Compiler
    - gcc
    - llvm  
  - Build
    - build system
      - [make](contents/tools/Build/build_system/make)
      - [cmake](contents/tools/Build/build_system/cmake)
      - [meson](contents/tools/Build/build_system/meson)
    - helper
      - [pkg-config](contents/tools/Build/helper/pkg-config)
  - Binary tools  
  - [Testing Framework](contents/tools/Test)
  - Debug
    - gdb
  - Dynamic analysis tools
    - gprof
    - Valgrind
  - Reverse engineering tools
    - ghidra 
- libraries
  - [glib](contents/libraries/glib)
  - UI
    - [gtk](contents/libraries/UI/gtk): Offering a complete set of UI elements, GTK is suitable for projects ranging from small one-off tools to complete application suites.
      - gtk3
      - gtk4  
  - Network
    - [libsoup](contents/libraries/Network/libsoup): HTTP client/server library for GNOME
    - [libcurl](contents/libraries/Network/libcurl): Your network transfer library
  - JSON
    - [json-glib](contents/libraries/JSON/json-glib): A JSON reader and writer library using GLib and GObject
  - DB
