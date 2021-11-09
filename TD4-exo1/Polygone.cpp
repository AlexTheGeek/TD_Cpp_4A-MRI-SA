#include <string>
#include <iostream>
#include "Point.h"
#include "Polygone.h"
#include "PointTroisD.h"

using namespace std;

//Constructeurs
Polygone::Polygone(){
    this->nb = 0;
}

Polygone::Polygone(int nb, PointTroisD * points){
    this->nb = nb;
    this->points = new PointTroisD [nb];
    for (int i = 0 ; i < nb ; i++){
        this->points[i] = points[i];
    }
}

//Destructeur
Polygone::~Polygone(){
    delete [] points;
}

//Accesseurs
float Polygone::getNb(){
    return nb;
}

PointTroisD * Polygone::getpoints(){
    return points;
}

//Méthodes
ostream & operator<<(ostream &o, Polygone &p){
    o << "[";
    for (int i = 0 ; i < p.nb - 1; i++)
        o << p.points[i] << ", ";
    o << p.points[p.nb - 1] << "]";
    return o;
}

