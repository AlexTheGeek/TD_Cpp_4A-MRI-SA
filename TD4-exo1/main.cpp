#include <string>
#include <iostream>
#include "Point.h"
#include "Polygone.h"
#include "Cercle.h"
#include "PointTroisD.h"

using namespace std;

int main(){
    
    PointTroisD p1(0,0,0);
    PointTroisD p2(0,2,0);
    PointTroisD p3(2,2,0);
    PointTroisD p4(2,0,0);
    PointTroisD  tabtri[] = {p2, p3, p4}; 
    PointTroisD  tab[] = {p1, p2, p3, p4}; 
    Polygone triangle(3,tabtri);
    Polygone pol(4,tab); 
    Cercle cer1(p1,p2); 
    Cercle cer2(p2,p3); 
    
    cout << "quelques points..." << endl;
    for (int i = 0; i < 4; i++)
        cout << tab[i] << ", ";
    cout << endl;
    
    cout << "La distance entre " << p1 << " et " 
         << p2 << " est de " << p1.distance(p2) << "cm."<< endl; 
    
    cout << "Un polygone :" << endl;
    cout << pol << endl;
    
    cout << "Un autre polygone :" << endl;
    cout << triangle << endl;
    
    
    cout << "Un cercle :" << endl;
    cout << cer1 << endl;
    
    cout << "Un autre cercle :" << endl;
    cout << cer2 << endl;
    return 0;
}
