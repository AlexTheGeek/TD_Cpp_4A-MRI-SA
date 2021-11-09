#include "Point.h"
#include <iostream>
#include <cmath>

//Constructeurs
Point::Point(){
    abscisse = 0;
    ordonnee = 0;
}

Point::Point(float a, float o){
    abscisse = a;
    ordonnee = o;
}

//Destructeur
Point::~Point(){
}

//Accesseurs
float Point::getAbscisse(){
    return abscisse;
}

float Point::getOrdonnee(){
    return ordonnee;
}

//Méthodes
float Point::distance(Point p){
    return sqrt((this->abscisse - p.getAbscisse()) *(this->abscisse - p.getAbscisse()) 
    +(this->ordonnee - p.getOrdonnee()) *(this->ordonnee - p.getOrdonnee())
    );
}

ostream & operator<<(ostream &o, Point &p){
    o << "(" << p.abscisse << "," << p.ordonnee << ")";
    return o;
}

