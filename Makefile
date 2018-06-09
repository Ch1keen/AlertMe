AlertMe : main.o Calander.o Anniversary.o
		g++ main.o Calander.o Anniversary.o -o AlertMe

main.o : main.cpp
		g++ -c main.cpp -o main.o

Calander.o : Calander.cpp
		g++ -c Calander.cpp -o Calander.o

Anniversary.o : Anniversary.cpp
		g++ -c Anniversary.cpp -o Anniversary.o

clean :
		rm *.o AlertMe 