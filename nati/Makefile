all : main

main : main.o Personne.o Italiano.o American.o Francais.o
	g++ main.o Personne.o Italiano.o American.o Francais.o -o main
	
main.o : main.cpp 
	g++ -c main.cpp
	
Personne.o : Personne.cpp
	g++ -c Personne.cpp
	
Italiano.o : Italiano.cpp
	g++ -c Italiano.cpp
	
American.o : American.cpp
	g++ -c American.cpp
	
Francais.o : Francais.cpp
	g++ -c Francais.cpp
	
clean :
	rm main *.o 
