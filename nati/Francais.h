
#ifndef FRANCAIS_H_
#define FRANCAIS_H_
#include "Personne.h"
#include <string>
using namespace std;
class Francais: public Personne {
public:
	//Constructeurs
	Francais(string, int);

	//Destructeur
	virtual ~Francais();

	// Méthodes
	virtual void hello();
};

#endif 
