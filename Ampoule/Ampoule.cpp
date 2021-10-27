#include <string>
#include <iostream>
#include "Ampoule.h"

using namespace std;

//constructeurs
Ampoule::Ampoule(){
    this->puissance = 0;
    this->type = "";
    this->grillee = false;
    this->alimentee = false;
    this->max = 0;
    this->cnt = 0;
}

Ampoule::Ampoule(string t,int p, int m){
    this->puissance = p;
    this->type = t;
    this->grillee = false;
    this->alimentee = false;
    this->max = m;
    this->cnt = 0;
}

//Destructeur
Ampoule::~Ampoule(){
    
}

// accesseurs
string Ampoule::getType(){
    return this->type;
}
int Ampoule::getPuissance(){
    return this->puissance;
}
bool Ampoule::isAlimentee(){
    return this->alimentee;
}
bool Ampoule::isGrillee(){
    return this->grillee;
}
int Ampoule::getMax(){
    return this->max;
}
int Ampoule::getCnt(){
    return this->cnt;
}

//methodes
void Ampoule::allumer(){
    this->cnt ++;
    if (this->getCnt() < this->getMax())
        this->alimentee = true; 
    else{
        this->alimentee = false; 
        this->grillee = true;
    }
}
void Ampoule::eteindre(){
    this->alimentee = false; 
}

void Ampoule::changer(){
    this->grillee = false;
    this->alimentee = false;
    this->cnt = 0;
}

