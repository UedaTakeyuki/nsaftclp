# Spawning Processes

## Examples
### Synchronous functions.
For [g_spawn_sync()](https://docs.gtk.org/glib/func.spawn_sync.html) and [g_spawn_command_line_async()](https://docs.gtk.org/glib/func.spawn_command_line_sync.html)

- [source file]()
- [make file]()
- How to Build

```
make sync
```

- Expected result

```
./sync
** Message: 17:36:37.168: status: 0
result: UID        PID  PPID  C STIME TTY          TIME CMD
root         1     0  0 May17 ?        00:00:17 /sbin/init splash
root         2     0  0 May17 ?        00:00:00 [kthreadd]
root         3     2  0 May17 ?        00:00:00 [rcu_gp]
…
pi       18179 18178  0 17:36 pts/0    00:00:00 ps -aef
** Message: 17:36:37.190: status: 0
result: Makefile
sync
sync.c
```
