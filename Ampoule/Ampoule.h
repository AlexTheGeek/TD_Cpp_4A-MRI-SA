#ifndef AMPOULE_H 
#define AMPOULE_H

#include <string>

using namespace std;

class Ampoule{
protected:
    string type;
    int puissance;
    bool alimentee;
    bool grillee;
    int max;
    int cnt;
public:
    //Constructeurs
    Ampoule();
    Ampoule(string,int,int);
    
    //Destructeur
    virtual ~Ampoule();
    
    // accesseurs
    string getType();
    int getPuissance();
    bool isAlimentee();
    bool isGrillee();
    int getMax();
    int getCnt();
    
    //methodes
    void allumer();
    void eteindre();
    void changer();
};
#endif
