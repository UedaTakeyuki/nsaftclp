# [Testing Framework](https://docs.gtk.org/glib/testing.html)

# Dependency
Depends only [GLib](https://docs.gtk.org/glib/)

# Building
You can use pkg-config to provide compiler options with the package name **glib-2.0** like as following Makefile:

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
- [g_assert_null](https://docs.gtk.org/glib/func.assert_null.html)  
Debugging macro to check an expression is `NULL`.

- [g_assert_true](https://docs.gtk.org/glib/func.assert_true.html)  
Debugging macro to check that an expression is true.

- [g_assert_error](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to check that a method has returned the correct [struct@GLib.Error].

- [g_assert_false](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to check an expression is false.

- [g_assert_cmphex](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare to unsigned integers.

- [g_assert_cmpint](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare two integers.

- [g_assert_cmpmem](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare memory regions.

- [g_assert_cmpstr](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare two strings.

- [g_assert_cmpstrv](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to check if two `NULL`-terminated string arrays (i.e. 2 `GStrv`) are equal.

- [g_assert_cmpuint](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare two unsigned integers.

- [g_assert_nonnull](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to check an expression is not `NULL`.

- [g_assert_cmpfloat](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare two floating point numbers.

- [g_assert_no_errno](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to check that an expression has a non-negative return value.

- [g_assert_no_error](https://docs.gtk.org/glib/func.assert_no_error.html)  
Debugging macro to check that a [struct@GLib.Error] is not set. [example](https://github.com/GNOME/json-glib/blob/json-glib-1-6/json-glib/tests/reader.c#L33)  

- [g_assert_cmpvariant](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare two [struct@GLib.Variant] values.

- [g_assert_not_reached](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to terminate the application if it is ever reached.

- [g_assert_cmpfloat_with_epsilon](https://docs.gtk.org/glib/func.assert_.html)  
Debugging macro to compare two floating point numbers within an epsilon.
