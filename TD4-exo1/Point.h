#ifndef POINT_H_
#define POINT_H_
#include <string>
#include <iostream>

using namespace std;

class Point {
protected:
    float abscisse;
    float ordonnee;
public:
    //Constructeurs
    Point();
    Point(float, float);
    
    //Destructeur
    virtual ~Point();
    
    //Accesseurs
    float getAbscisse();
    float getOrdonnee();
    
    //Méthodes
    virtual float distance(Point p);
    friend ostream & operator<<(ostream &, Point &);
};
#endif 
