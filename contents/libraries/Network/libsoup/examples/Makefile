ALL     = simplest-server simplest-client

all: $(ALL)

%: %.c
	gcc $^ -o $@ `pkg-config --cflags --libs libsoup-3.0`

clean:
	rm $(ALL)
