target: main.o Functions.o
	gcc -o target main.o Functions.o
main.o: main.c
	gcc -c main.c
Functions.o: Functions.c
	gcc -c Functions.c
clean:
	rm *.o target
