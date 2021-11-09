#include "PointTroisD.h"
#include <iostream>
#include <cmath>


using namespace std;

PointTroisD::PointTroisD(){
    this->altitude = 0;
}

PointTroisD::PointTroisD(float a, float o, float h):Point(a, o){
    this->altitude = h;
}

float PointTroisD::getAltitude(){
    return this->altitude;
}

ostream & operator<<(ostream &o, PointTroisD &pd){
    o << "(" << pd.getAbscisse() << "," << pd.getOrdonnee() << "," << pd.getAltitude() << ")";
    return o;
}


float PointTroisD::distance(PointTroisD pd){
    return sqrt((this->abscisse - pd.getAbscisse()) *(this->abscisse - pd.getAbscisse()) 
    +(this->ordonnee - pd.getOrdonnee()) *(this->ordonnee - pd.getOrdonnee())
    +(this->altitude - pd.getAltitude()) * (this->altitude - pd.getAltitude())
    );
}