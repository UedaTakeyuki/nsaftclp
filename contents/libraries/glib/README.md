# [glib](https://docs.gtk.org/glib)
general-purpose, portable utility library, which provides many useful data types, macros, type conversions, string utilities, file utilities, a mainloop abstraction, and so on.

## Header file
glib.h

## Building with glib
You can use pkg-config to provide compiler options with the package name libsoup-3.0 like as following Makefile:

```
%: %.c
	gcc $^ `pkg-config --cflags --libs glib-2.0` -o $@
```

## Stuffs

- [Spawning Processes](SpawningProcesses)
- timer
