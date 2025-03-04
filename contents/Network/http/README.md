# HTTP

## [libsoup](https://libsoup.gnome.org/libsoup-3.0/index.html)
HTTP client/server library for [GNOME](https://www.gnome.org/).

### [Dependency]()
depending on the [GLib](https://docs.gtk.org/glib/), [GObject](https://docs.gtk.org/gobject/), and [Gio](https://docs.gtk.org/gio/). 

### [Building with libsoup](https://libsoup.gnome.org/libsoup-3.0/build-howto.html#building-with-libsoup)
You can use ``pkg-config`` to provide compiler options with the package name ``libsoup-3.0`` like as following Makefile:

```
%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs libsoup-3.0`
```
