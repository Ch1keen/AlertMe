AlertMe : main.o Calander.o
		gcc main.o Calander.o -o AlertMe

main.o : main.cpp
		gcc -c main.cpp -o main.o

Calander.o : Calander.cpp
		gcc -c Calander.cpp -o Calander.o

clean :
		rm *.o AlertMe 