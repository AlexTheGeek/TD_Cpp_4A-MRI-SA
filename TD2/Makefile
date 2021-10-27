#g++ -c *.cpp && g++ *.o -o main && rm *.o
all : main

main : main.o solve.o
	g++ main.o solve.o -o main

main.o : main.cpp
	g++ -c main.cpp

Ampoule.o : solve.cpp
	g++ -c solve.cpp 

clean :
	rm *.o
