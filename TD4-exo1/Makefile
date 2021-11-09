all : main

main : main.o Point.o Polygone.o Cercle.o PointTroisD.o
	g++ main.o Point.o Polygone.o Cercle.o PointTroisD.o -o main
	
main.o : main.cpp 
	g++ -c main.cpp
	
Point.o : Point.cpp
	g++ -c Point.cpp
	
Polygone.o : Polygone.cpp
	g++ -c Polygone.cpp
	
Cercle.o : Cercle.cpp
	g++ -c Cercle.cpp
	
PointTroisD.o : PointTroisD.cpp
	g++ -c PointTroisD.cpp


clean :
	rm main *.o 
