all : main

main : main.o EqDegreUn.o
	g++ main.o EqDegreUn.o -o main
	
main.o : main.cpp 
	g++ -c main.cpp
	
EqDegreUn.o : EqDegreUn.cpp
	g++ -c EqDegreUn.cpp
	
clean :
	rm main *.o 
