all: main

main: main.o stringtohex.o xor.o
	cc -o main main.o stringtohex.o xor.o
stringtohex.o: stringtohex.c
	cc -c stringtohex.c -o stringtohex.o

xor.o: xor.c
	cc -c xor.c -o xor.o

main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm -rf *.o main
