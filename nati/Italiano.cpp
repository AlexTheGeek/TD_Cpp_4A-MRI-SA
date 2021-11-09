
#include "Personne.h"
#include "Italiano.h"
#include <iostream>
#include <string>

using namespace std;

Italiano::Italiano(string name, int age):Personne(name,age){
}

//Destructeur
Italiano::~Italiano(){        
}

// Méthodes

void Italiano::hello(){
    cout << "Ciao, mi chiamo " << name << ", e ho " << age << " anni." << endl; 
}


