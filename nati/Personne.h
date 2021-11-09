
#ifndef PERSONNE_H_
#define PERSONNE_H_

#include <string>
using namespace std;
class Personne {
protected:
    string name;
    int age;
public:
    //Constructeurs
    Personne();
    Personne(string, int);
    
    //Destructeur
    virtual ~Personne();
    
    // accesseurs
    string getName();
    
    int getAge();
    
    // Méthodes
    virtual bool isMajor();
    
    virtual void hello(); //=0 
};

#endif 
