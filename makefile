main:	main.o	kron.o
	gcc main.o kron.o -o tp0

main.o: main.c
	gcc -c main.c

kron.o:		kron.c		kron.h
	gcc -c kron.c

clean:
	rm *.o
