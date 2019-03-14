CC=gcc
CFLAGS=-Wno-implicit-int

all: clean doraemon malaysia run

doraemon: doraemon.c
malaysia: malaysia.c

clean:
	rm -f doraemon malaysia
run:
	./doraemon && ./malaysia
