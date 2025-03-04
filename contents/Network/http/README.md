# HTTP

## [libsoup](https://libsoup.gnome.org/libsoup-3.0/index.html)
HTTP client/server library for [GNOME](https://www.gnome.org/).

### [Dependency](https://libsoup.gnome.org/libsoup-3.0/index.html#dependencies)
depending on the [GLib](https://docs.gtk.org/glib/), [GObject](https://docs.gtk.org/gobject/), and [Gio](https://docs.gtk.org/gio/). 

### [Building with libsoup](https://libsoup.gnome.org/libsoup-3.0/build-howto.html#building-with-libsoup)
You can use ``pkg-config`` to provide compiler options with the package name ``libsoup-3.0`` like as following Makefile:

```
%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs libsoup-3.0`
```

### Server implementing with libsoup
Implementing the ***simplest*** server with libsoup would be:

1. Implement the callback function [ServerCallback](https://libsoup.gnome.org/libsoup-3.0/callback.ServerCallback.html) calls [soup_server_message_set_response](https://libsoup.gnome.org/libsoup-3.0/method.ServerMessage.set_response.html) to set response body.
2. Call [soup_server_add_handler](https://libsoup.gnome.org/libsoup-3.0/method.Server.add_handler.html) with ``ServerCallback`` mentioned above.

A running example is available as [simplest-server.c](examples/simplest-server.c).
