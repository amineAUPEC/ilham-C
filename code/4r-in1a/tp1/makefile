all: test

tp1.o: tp1.c tp1.h
	gcc -c tp1.c

test: tp1.o test.o
	gcc tp1.o test.o -o test

test.o: test.c tp1.h
	gcc -c test.c
