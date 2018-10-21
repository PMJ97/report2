arithmetic : main.o add.o subtract.o multiply.o divide.o
	gcc -o arithmetic main.o add.o subtract.o multiply.o divide.o
main.o : main.c
	gcc -c main.c
add.o : add.c
	gcc -c add.c
subtract.o : subtract.c
	gcc -c subtract.c
multiply.o : multiply.c
	gcc -c multiply.c
divide.o : divide.c
	gcc -c divide.c
clean : 
	rm -f arithmetic main.o add.o subtract.o multiply.o divide.o
