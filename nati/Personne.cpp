
#include "Personne.h"
#include <iostream>
#include <string>

using namespace std;

//Constructeurs
Personne::Personne(){
    this->age = 0;
    this->name = "no name";
//     cout << "Constructeur de Personne" << endl;
}

Personne::Personne(string name, int age){
    this->age = age;
    this->name = name;
//     cout << "Constructeur de Personne" << endl;
}

//Destructeur
Personne::~Personne(){        
//     cout << "Destructeur de Personne" << endl;
}

// accesseurs
string Personne::getName(){
    return name;
}

int Personne::getAge(){
    return age;
}
        
// Méthodes
bool Personne::isMajor(){
    return age >= 18;
}

void Personne::hello(){
}


