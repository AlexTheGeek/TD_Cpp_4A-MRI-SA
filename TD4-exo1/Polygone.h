#ifndef POLYGONE_H_
#define POLYGONE_H_
#include <string>
#include <iostream>
#include "Point.h"
#include "PointTroisD.h"

using namespace std;

class Polygone{
private:
    int nb;
    PointTroisD * points;
public:
    //Constructeurs
    Polygone();
    Polygone(int, PointTroisD *);
    
    //Destructeur
    virtual ~Polygone();
    
    //accesseurs
    float getNb();
    PointTroisD * getpoints();
    
    //Méthodes
    friend ostream & operator<<(ostream &, Polygone &);
};
#endif 
