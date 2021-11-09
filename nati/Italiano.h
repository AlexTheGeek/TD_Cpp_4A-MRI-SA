

#ifndef ITALIANO_H_
#define ITALIANO_H_
#include "Personne.h"
#include <string>
using namespace std;
class Italiano: public Personne {
public:
	//Constructeurs
	Italiano(string, int);

	//Destructeur
	virtual ~Italiano();

	// Méthodes
	virtual void hello();
};

#endif 
