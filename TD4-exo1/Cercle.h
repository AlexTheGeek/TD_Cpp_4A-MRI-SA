#ifndef CERCLE_H_
#define CERCLE_H_
#include <string>
#include <iostream>
#include "Point.h"
#include "PointTroisD.h"
using namespace std;

class Cercle{
private:
    PointTroisD centre;
    PointTroisD pointCercle;
public:
    //Constructeurs
    Cercle();
    Cercle(PointTroisD, PointTroisD);
    
    //Destructeur
    virtual ~Cercle();
    
    //Accesseurs
    PointTroisD getPointCercle();
    PointTroisD getCentre();
    
    // Méthodes
    friend ostream & operator<<(ostream &, Cercle &);
};
#endif 
