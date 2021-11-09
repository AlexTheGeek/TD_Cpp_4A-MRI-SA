#ifndef POINTTROISD_H
#define POINTTROISD_H
#include <string>
#include <iostream>
#include "Point.h"

using namespace std;

class PointTroisD: public Point{
    protected:
        float altitude;
    public:
        PointTroisD();
        PointTroisD(float, float, float);
        
        float getAltitude();

        virtual float distance(PointTroisD);

        friend ostream & operator<<(ostream &, Point &);
};

#endif