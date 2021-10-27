all : main

main : main.o Polynomial.o
	g++ main.o Polynomial.o -o main
	
main.o : main.cpp 
	g++ -c main.cpp
	
Polynomial.o : Polynomial.cpp
	g++ -c Polynomial.cpp
	
clean :
	rm main *.o 
