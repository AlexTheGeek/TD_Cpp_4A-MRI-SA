
#include <string>
#include <iostream>
#include <cmath>
#include "Cercle.h"
#include "Point.h"
#include "PointTroisD.h"
#ifndef M_PI  
#define M_PI 3.14159265358979323846
#endif 

using namespace std;
//Constructeurs
Cercle::Cercle(){
    PointTroisD p(0,0,0);
    centre = p;
    pointCercle = p;
}

Cercle::Cercle(PointTroisD c, PointTroisD p){
    pointCercle = p;
    centre = c;
}

//Destructeur
Cercle::~Cercle(){
    
}

//Accesseurs
PointTroisD Cercle::getPointCercle(){
    return pointCercle;
}
PointTroisD Cercle::getCentre(){
    return centre;
}

//Méthodes
ostream & operator<<(ostream &o, Cercle &c){
    o << "("<< c.centre << "," << c.pointCercle << ")";
    return o;
}
