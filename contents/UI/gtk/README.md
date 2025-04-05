# gtk

## Makefile
The required headers and libraries can be specified by ``pkg-config`` tool. So an example default makefile with gcc compiler for gtk3 and gtk4 are as follows:
### gtk3
```
%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs gtk+-3.0`
```
### gtk4
```
%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs gtk+-4.0`
```
## examples
- [GTK-Examples](https://github.com/Miqueas/GTK-Examples): A comprehensive examples of ``gtk-3`` and ``gtk-4`` with **C**, **lua**, and **vala**.
