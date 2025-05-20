# [Automatic Cleanup](https://docs.gtk.org/glib/auto-cleanup.html)
GLib provides a set of macros that wrap the GCC extension for automatic cleanup of variables when they go out of scope.
These macros can only be used with GCC and GCC-compatible C compilers.

## Variable declarations
### 1. g_auto(TypeName)
Helper to declare a ***variable*** with automatic cleanup.

Fx.
- g_auto([GQueue](https://docs.gtk.org/glib/struct.Queue.html)) queue = G_QUEUE_INIT;
- g_auto([GVariantBuilder]()) builder;
- g_auto(GStrv) strv;

## Examples
- [g_autoptr(JsonParser), g_autoptr(GError)](https://gnome.pages.gitlab.gnome.org/json-glib/class.Parser.html#using-jsonparser)
- [g_autoptr(JsonReader)](https://gnome.pages.gitlab.gnome.org/json-glib/class.Reader.html#using-jsonreader)
