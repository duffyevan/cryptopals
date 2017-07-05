all: main

main: main.o padding.o
	gcc *.o -o main

padding.o: padding.c
	gcc -c padding.c

main.o: main.c
	gcc -c main.c

clean:
	rm -rf *.o main
