


CC=clang

CFLAGS=-c -Wall

SRCPATH=$(CURDIR)/src/

all: tardString


#tardString

tardString: main.o tardString.o
	$(CC) main.o tardString.o -o tardString

main.o: main.c
	$(CC) $(CFLAGS) main.c

tardString.o: $(SRCPATH)tardString.c
	$(CC) $(CFLAGS) $(SRCPATH)tardString.c

