# gtk

## Install with apt
- [gtk3](https://github.com/UedaTakeyuki/gc_setups/blob/master/gtk3.setup.sh)
- [gtk4](https://github.com/UedaTakeyuki/gc_setups/blob/master/gtk4.setup.sh)
- [gtkmm4](https://github.com/UedaTakeyuki/gc_setups/blob/master/gtkmm4.setup.sh)

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

## Namespaces
- [Gdk-3.0](https://docs.gtk.org/gdk3/)
- [GdkX11-3.0](https://docs.gtk.org/gdk3-x11/)
  
## examples
- [gtk3-tutorial](https://github.com/RainMark/gtk3-tutorial): A comprehensive examples of ``gtk-3``.
- [GTK-Examples](https://github.com/Miqueas/GTK-Examples): A comprehensive examples of ``gtk-3`` and ``gtk-4`` with **C**, **lua**, and **vala**.

## Tips
### In case the **gtk_window_move** is not working.
With recent gtk3, calling **gtk_window_move** before **gtk_widget_show_all** may not work.

### No **gtk_window_move** in **gtk4**
[refer](https://discourse.gnome.org/t/set-absolut-window-position-in-gtk4/8552/4). 
