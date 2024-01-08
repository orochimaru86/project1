#
# Makefile
#

CC = gcc
CFLAGS = -g
LIBS = -lm

calculator: calculate.o main.o
	gcc calculate.o main.o -o calculator $(LIBS)

calculate.o: calculate.c calculate.h
	gcc -c calculate.c $(CFLAGS)

main.o: main.c calculate.h
	gcc -c main.c $(CFLAGS)

clean:
	$(RM) calculator *.o *~
