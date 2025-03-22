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
The available [functions and macros](https://docs.gtk.org/glib/func.test_run.html?q=g_assert_).

- g_assert_null macro
Debugging macro to check an expression is `NULL`. If the assertion fails (i.e. the expression is not `NULL`), ...

- g_assert_true macro
Debugging macro to check that an expression is true. If the assertion fails (i.e. the expression is not ...
g_assert_error macro
Debugging macro to check that a method has returned the correct [struct@GLib.Error]. The effect of `g_assert_error (err, dom, ...
g_assert_false macro
Debugging macro to check an expression is false. If the assertion fails (i.e. the expression is not false), ...
g_assert_cmphex macro
Debugging macro to compare to unsigned integers. This is a variant of [func@GLib.assert_cmpuint] that displays the numbers in ...
g_assert_cmpint macro
Debugging macro to compare two integers. The effect of `g_assert_cmpint (n1, op, n2)` is the same as `g_assert_true ...
g_assert_cmpmem macro
Debugging macro to compare memory regions. If the comparison fails, an error message is logged and the application ...
g_assert_cmpstr macro
Debugging macro to compare two strings. If the comparison fails, an error message is logged and the application ...
g_assert_warning function
No description available.
g_assert_cmpstrv macro
Debugging macro to check if two `NULL`-terminated string arrays (i.e. 2 `GStrv`) are equal. If they are not ...
g_assert_cmpuint macro
Debugging macro to compare two unsigned integers. The effect of `g_assert_cmpuint (n1, op, n2)` is the same as ...
g_assert_nonnull macro
Debugging macro to check an expression is not `NULL`. If the assertion fails (i.e. the expression is `NULL`), ...
g_assert_cmpfloat macro
Debugging macro to compare two floating point numbers. The effect of `g_assert_cmpfloat (n1, op, n2)` is the same ...
g_assert_no_errno macro
Debugging macro to check that an expression has a non-negative return value, as used by traditional POSIX functions (such ...
g_assert_no_error macro
Debugging macro to check that a [struct@GLib.Error] is not set. The effect of `g_assert_no_error (err)` is the same ...
g_assert_cmpvariant macro
Debugging macro to compare two [struct@GLib.Variant] values. If the comparison fails, an error message is logged and the ...
g_assert_not_reached macro
Debugging macro to terminate the application if it is ever reached. If it is reached, an error message ...
g_assert_cmpfloat_with_epsilon macro
Debugging macro to compare two floating point numbers within an epsilon. The effect of `g_assert_cmpfloat_with_epsilon (n1, n2, epsilon)` ...
