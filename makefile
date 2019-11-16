# makefile for libtrim.a static library, using archive members as targets.
# (c) Ian Bruntlett, October 2019

CC = gcc
CFLAGS = -g
ARFLAGS = rvU
executables =  test_ltrim test_rtrim
tar_filename = trim-source-$(shell date "+%Y-%m-%d" ).tar

all: $(executables)

test_ltrim : test_ltrim.c trim.h libtrim.a(ltrim.o)
	$(CC) -g -L.    test_ltrim.c -ltrim -o$@

test_rtrim : test_rtrim.c trim.h libtrim.a(rtrim.o)
	$(CC) -g -L.    test_rtrim.c -ltrim -o$@

ltrim.o : ltrim.c trim.h

rtrim.o : rtrim.c trim.h

.PHONY: tar-it
tar-it:
	tar -cvf $(tar_filename) *.c *.h makefile

.PHONY: clean
clean:
	rm -fv *.o libtrim.a $(executables)
