# [Testing Framework](https://docs.gtk.org/glib/testing.html)

# Dependency
Depends only [GLib](https://docs.gtk.org/glib/)

# Building
You can use pkg-config to provide compiler options with the package name glib-2.0 like as following Makefile:

```
%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs glib-2.0`
```

## The simplest example of Unit Test.
1. Call [g_test_init](https://docs.gtk.org/glib/func.test_init.html).
2. Make test func and add it by calling [g_test_add_func](https://docs.gtk.org/glib/func.test_add_func.html).
3. Call [g_test_run](https://docs.gtk.org/glib/func.test_run.html).

## How to confirm the simplest examples.
The simplest unit test example is available as [example.c](example/example.c)

## Available assertions
The available [functions and macros](https://docs.gtk.org/glib/func.test_run.html?q=g_assert).
