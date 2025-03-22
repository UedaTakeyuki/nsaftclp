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

g_assert macro
Debugging macro to terminate the application if the assertion fails. If the assertion fails (i.e. the expression is ...
g_assert_null macro
Debugging macro to check an expression is `NULL`. If the assertion fails (i.e. the expression is not `NULL`), ...
g_assert_true macro
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
g_assertion_message function
No description available.
g_assert_cmpvariant macro
Debugging macro to compare two [struct@GLib.Variant] values. If the comparison fails, an error message is logged and the ...
g_assert_not_reached macro
Debugging macro to terminate the application if it is ever reached. If it is reached, an error message ...
g_assertion_message_expr function
Internal function used to print messages from the public g_assert() and g_assert_not_reached() macros.
g_assertion_message_error function
No description available.
g_assertion_message_cmpint function
No description available.
g_assertion_message_cmpnum function
No description available.
g_assertion_message_cmpstr function
No description available.
g_assertion_message_cmpstrv function
No description available.
g_assert_cmpfloat_with_epsilon macro
Debugging macro to compare two floating point numbers within an epsilon. The effect of `g_assert_cmpfloat_with_epsilon (n1, n2, epsilon)` ...
G_STATIC_ASSERT macro
The G_STATIC_ASSERT() macro lets the programmer check a condition at compile time, the condition needs to be compile time ...
G_STATIC_ASSERT_EXPR macro
The G_STATIC_ASSERT_EXPR() macro lets the programmer check a condition at compile time. The condition needs to be compile time ...
g_test_trap_assertions function
No description available.
g_test_trap_assert_failed macro
Assert that the last test subprocess failed. See [func@GLib.test_trap_subprocess]. This is sometimes used to test situations that ...
g_test_trap_assert_passed macro
Assert that the last test subprocess passed. See [func@GLib.test_trap_subprocess].
g_test_trap_assert_stderr macro
Assert that the stderr output of the last test subprocess matches @serrpattern. See [func@GLib.test_trap_subprocess]. This is sometimes ...
g_test_trap_assert_stdout macro
Assert that the stdout output of the last test subprocess matches @soutpattern. See [func@GLib.test_trap_subprocess].
g_test_assert_expected_messages macro
Asserts that all messages previously indicated via [func@GLib.test_expect_message] have been seen and suppressed. This API may only be ...
g_test_trap_assert_stderr_unmatched macro
Assert that the stderr output of the last test subprocess does not match @serrpattern. See [func@GLib.test_trap_subprocess].
g_test_trap_assert_stdout_unmatched macro
Assert that the stdout output of the last test subprocess does not match @soutpattern. See [func@GLib.test_trap_subprocess].
g_test_set_nonfatal_assertions function
Changes the behaviour of the various assertion macros. The `g_assert_*()` macros, `g_test_assert_expected_messages()` and the various `g_test_trap_assert_*()` macros are ...
G_TEST_OPTION_NONFATAL_ASSERTIONS constant
A value that can be passed as an option to [func@GLib.test_init]. If this option is given, assertions will ...
g_hash_table_insert function
Inserts a new key and value into a #GHashTable. If the key already exists in the #GHashTable its ...
g_main_context_find_source_by_user_data method
Finds a source with the given user data for the callback. If multiple sources exist with the same ...
g_main_context_find_source_by_funcs_user_data method
Finds a source with the given source functions and user data. If multiple sources exist with the same ...
g_markup_parse_context_get_user_data method
Returns the user_data associated with @context. This will either be the user_data that was provided to g_markup_parse_context_new() or ...
