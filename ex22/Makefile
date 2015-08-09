CC=cc
CFLAGS=-g -Wall -DNDEBUG

all: ex22_main

ex22_main: ex22.o
	$(CC) $(CFLAGS) ex22_main.c ex22.o -o ex22_main.out

ex22.o: ex22.c
	$(CC) $(CFLAGS) -c ex22.c

clean:
	rm -f *.out *.o