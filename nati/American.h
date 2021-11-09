
#ifndef AMERICAN_H_
#define AMERICAN_H_
#include "Personne.h"
#include <string>
  

    
using namespace std;
class American: public Personne {
protected:
    int etat;
public:
	//Constructeurs
    American();
	American(string, int, int);

	//Destructeur
	virtual ~American();

	// Méthodes
    virtual bool isMajor();
	virtual void hello();
};

#endif 
