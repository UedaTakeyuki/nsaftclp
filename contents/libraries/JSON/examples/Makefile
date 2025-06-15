SRCS    = *.c
HDRS    = *.h
ALL     = $(SRCS) $(HDRS) 

json: $(ALL)
	# $@ target name
	# $< the first name of dependency
	# $^ all dependencies of the target
	gcc $(SRCS) -g `pkg-config --cflags --libs json-glib-1.0` -o $@

clean:
	rm *.o json