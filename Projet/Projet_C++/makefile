all : main

main : main.o tache.o listedetaches.o functions.o
	g++ main.o tache.o listedetaches.o functions.o -o main

main.o : main.cpp
	g++ -c main.cpp

tache.o : tache.cpp
	g++ -c tache.cpp 

listedetache.o : listedetaches.cpp
	g++ -c listedetaches.cpp 

functions.o : functions.cpp
	g++ -c functions.cpp

clean :
	rm *.o