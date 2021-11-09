
#include "Personne.h"
#include "Francais.h"
#include <iostream>
#include <string>

using namespace std;

//Constructeurs
Francais::Francais(string name, int age):Personne(name,age){
}

//Destructeur
Francais::~Francais(){        
}

// Méthodes

void Francais::hello(){
    cout << "Salut, moi c'est " << name << ", j'ai " << age << " ans." << endl; 
}


