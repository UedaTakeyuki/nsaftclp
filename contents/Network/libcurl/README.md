# [libcurl](https://curl.se/libcurl/)
A free and easy-to-use client-side URL transfer library, supporting DICT, FILE, FTP, FTPS, GOPHER, GOPHERS, HTTP, HTTPS, IMAP, IMAPS, LDAP, LDAPS, MQTT, POP3, POP3S, RTMP, RTMPS, RTSP, SCP, SFTP, SMB, SMBS, SMTP, SMTPS, TELNET, TFTP, WS and WSS. libcurl supports SSL certificates, HTTP POST, HTTP PUT, FTP uploading, HTTP form based upload, proxies, HTTP/2, HTTP/3, cookies, user+password authentication (Basic, Digest, NTLM, Negotiate, Kerberos), file transfer resume, http proxy tunneling and more.

## Install
For installation on debianapt, refer [curl-config.setup.sh](https://github.com/UedaTakeyuki/gc_setups/blob/master/curl-config.setup.sh).

## Build
Instead of pkg-config, libcurl provides an internal tool named ```curl-config``` to provide necessary information for build like header file or libraries. for more detail, refer document "[curl-config is our friend](https://curl.se/libcurl/using/)".

## The simplest implementation of a server with libsoup.
Implementing the ***simplest*** server with libsoup would be:

1. Create Curl handler by calling the function [curl_easy_init](https://curl.se/libcurl/c/curl_easy_init.html).

2. Implement the callback function [CURLOPT_WRITEFUNCTION]([https://libsoup.gnome.org/libsoup-3.0/callback.ServerCallback.html](https://curl.se/libcurl/c/CURLOPT_WRITEFUNCTION.html)) to handle ***received response body***. Set this to curl by calling [curl_easy_setopt](https://curl.se/libcurl/c/curl_easy_setopt.html) with parameter ```CURLOPT_WRITEFUNCTION```. The necessary user data for CURLOPT_WRITEFUNCTION, that is passed by 3rd parameter, is also set by ```curl_easy_setopt``` with parameter ```CURLOPT_WRITEDATA```.

3. Set a URL by ```curl_easy_setopt``` with parameter ```CURLOPT_URL```
4. Perform calling curl by [curl_easy_perform](https://curl.se/libcurl/c/curl_easy_perform.html).
5. Clean up resouces relate curl by [curl_easy_cleanup](https://curl.se/libcurl/c/curl_easy_cleanup.html).

A running example is available as [simplest.c](examples/simplest.c).

## How to confirm the simplest examples.
The simplest example [simplest.c](examples/simplest.c) send http get to port 8080 of local host as ```[HTTP://[]](http://[::]:8080/)``` and print the ***response body***. So, first of all, you should run a server on port 8080, for example [simplest-server.c](https://github.com/UedaTakeyuki/nsaftclp/blob/main/contents/Network/libsoup/examples/simplest-server.c) of the libsoup server example, reference is available as document "[How to confirm the simplest examples.](https://github.com/UedaTakeyuki/nsaftclp/blob/main/contents/Network/libsoup/README.md#how-to-confirm-the-simplest-examples)".

The [simplest.c](examples/simplest.c) can be build as follow:

```
make simplest
```

Then, run simple-server first and run simplest. Expected output of simplest is something like as follows:

```
./simplest 
hello
```
