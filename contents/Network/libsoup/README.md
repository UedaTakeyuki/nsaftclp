# [libsoup](https://libsoup.gnome.org/libsoup-3.0/index.html)
HTTP client/server library for [GNOME](https://www.gnome.org/).

## [Dependency](https://libsoup.gnome.org/libsoup-3.0/index.html#dependencies)
depending on the [GLib](https://docs.gtk.org/glib/), [GObject](https://docs.gtk.org/gobject/), and [Gio](https://docs.gtk.org/gio/). 

## [Building with libsoup](https://libsoup.gnome.org/libsoup-3.0/build-howto.html#building-with-libsoup)
You can use ``pkg-config`` to provide compiler options with the package name ``libsoup-3.0`` like as following Makefile:

```
%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs libsoup-3.0`
```

## The simplest implementation of a server with libsoup.
Implementing the ***simplest*** server with libsoup would be:

1. Implement the callback function [ServerCallback](https://libsoup.gnome.org/libsoup-3.0/callback.ServerCallback.html) calls [soup_server_message_set_response](https://libsoup.gnome.org/libsoup-3.0/method.ServerMessage.set_response.html) to set response body.
2. Call [soup_server_add_handler](https://libsoup.gnome.org/libsoup-3.0/method.Server.add_handler.html) with ``ServerCallback`` mentioned above.

A running example is available as [simplest-server.c](examples/simplest-server.c).

## The simplest implementation of a client with libsoup.
Implementing the ***simplest*** client with libsoup would be:

1. Prepare [SoupMessage](https://gnome.pages.gitlab.gnome.org/libsoup/libsoup-3.0/class.Message.html) with ***method*** and ***url***.
2. Call [soup_session_send_and_read](https://gnome.pages.gitlab.gnome.org/libsoup/libsoup-3.0/method.Session.send_and_read.html) with ```SoupMessage``` prepared above.
3. ***Response body*** is returned as a return value of ```soup_session_send_and_read```. ***Download bytes*** and ***Response headers*** are added into the ***SoupMessage*** passed to the ```soup_session_send_and_read```.

A running example is available as [simplest-client.c](examples/simplest-client.c).

## How to confirm the simplest examples.
The ***server example*** [simplest-server.c](examples/simplest-server.c) waits for a connection on port ```8080``` and returns just a string ***hello*** as type text/html. Build it as follow:

```
make simple-server
```

The ***client example*** [simplest-client.c](examples/simplest-client.c) send HTTP Get method to address 0.0.0.0 on 8080, print debug log, and show download bytes, content-type, and response body.

Build it as follow:

```
make simple-client
```

Then, run simple-server first and run simple-client. Expected output of simple-client is something like as follows:

```
> GET / HTTP/1.1
> Soup-Debug-Timestamp: 1741218957
> Soup-Debug: SoupSession 1 (0x13c1868), SoupMessage 1 (0x13c80a0), GSocket 1 (0xb4c07eb8)
> Accept-Encoding: gzip, deflate
> Connection: Keep-Alive
> Host: 0.0.0.0:8080
  
< HTTP/1.1 200 OK
< Soup-Debug-Timestamp: 1741218957
< Soup-Debug: SoupMessage 1 (0x13c80a0)
< Server: simple-httpd libsoup/3.2.2
< Date: Wed, 05 Mar 2025 23:55:57 GMT
< Content-Type: text/html
< Content-Length: 5
< 
< hello
  
Downloaded bytes: 5
type: text/html
response_body: hello
```
