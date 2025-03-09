# [libcurl](https://curl.se/libcurl/)
A free and easy-to-use client-side URL transfer library, supporting DICT, FILE, FTP, FTPS, GOPHER, GOPHERS, HTTP, HTTPS, IMAP, IMAPS, LDAP, LDAPS, MQTT, POP3, POP3S, RTMP, RTMPS, RTSP, SCP, SFTP, SMB, SMBS, SMTP, SMTPS, TELNET, TFTP, WS and WSS. libcurl supports SSL certificates, HTTP POST, HTTP PUT, FTP uploading, HTTP form based upload, proxies, HTTP/2, HTTP/3, cookies, user+password authentication (Basic, Digest, NTLM, Negotiate, Kerberos), file transfer resume, http proxy tunneling and more.

## Install
For installation on debianapt, refer [curl-config.setup.sh](https://github.com/UedaTakeyuki/gc_setups/blob/master/curl-config.setup.sh).

## Build
Instead of pkg-config, libcurl provides an internal tool named ```curl-config``` to provide necessary information for build like header file or libraries. for more detail, refer document "[curl-config is our friend](https://curl.se/libcurl/using/)".
