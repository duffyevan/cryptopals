all: main

main: main.o stringtohex.o decode.o
	gcc -o main main.o stringtohex.o decode.o

main.o: main.c 
	gcc -c main.c -o main.o

stringtohex.o: stringtohex.c
	gcc -c stringtohex.c -o stringtohex.o

decode.o: decode.c
	gcc -c decode.c -o decode.o

clean:
	rm -rf *.o main
