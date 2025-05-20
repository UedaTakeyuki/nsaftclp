# [Automatic Cleanup](https://docs.gtk.org/glib/auto-cleanup.html)
GLib provides a set of macros that wrap the GCC extension for automatic cleanup of variables when they go out of scope.
These macros can only be used with GCC and GCC-compatible C compilers.

## Variable declarations
### g_auto(TypeName)
Helper to declare a ***variable*** with automatic cleanup.

Fx.
- g_auto([GQueue](https://docs.gtk.org/glib/struct.Queue.html)) queue = G_QUEUE_INIT;
- g_auto([GVariantBuilder](https://docs.gtk.org/glib/struct.VariantBuilder.html)) builder;
- g_auto([GStrv](https://docs.gtk.org/glib/alias.Strv.html)) strv;

### g_autoptr(TypeName)
Helper to declare a ***pointer*** variable with automatic cleanup.

Fx.
- g_autoptr(GVariant) dirname, basename = NULL;

### g_autofree
Macro to add an attribute to ***pointer*** variable to ensure automatic cleanup using ***g_free()***.

Fx.
- g_autofree gchar *path = NULL;
- g_autofree guint8* membuf = NULL;

Difference from ```g_autoptr()```.
- The g_autofree is an ***attribute** supplied ***before*** the type name.
- The g_autofree always calls ***g_free() directly*** instead of using a type-specific lookup.

## Examples
- [g_autoptr(JsonParser), g_autoptr(GError)](https://gnome.pages.gitlab.gnome.org/json-glib/class.Parser.html#using-jsonparser)
- [g_autoptr(JsonReader)](https://gnome.pages.gitlab.gnome.org/json-glib/class.Reader.html#using-jsonreader)
