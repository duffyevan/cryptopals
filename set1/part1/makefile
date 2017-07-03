all: main

main: main.o stringtohex.o hexto64.o
	cc -o main main.o stringtohex.o hexto64.o

stringtohex.o: stringtohex.c
	gcc -c -o stringtohex.o stringtohex.c

hexto64.o: hexto64.c
	gcc -c -o hexto64.o hexto64.c

main.o: main.c
	gcc -c -o main.o main.c

clean:
	rm -rf main *.o
