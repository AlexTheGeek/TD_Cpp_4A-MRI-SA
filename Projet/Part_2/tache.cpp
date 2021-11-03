/**
 * @file tache.cpp
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include <iostream>
#include <cstdlib>
#include "tache.h"
#include "functions.h"
#include "listedetaches.h"

using namespace std;


/**
 * @brief Construct a new Tache:: Tache object
 * 
 */
Tache::Tache(){
    this->nom = "Nom de la Tache";
    this->description = "Description de la Tache";
    this->priorite = 0;
}

/**
 * @brief Construct a new Tache:: Tache object
 * 
 * @param n 
 * @param d 
 * @param p 
 */
Tache::Tache(string n, string d, int p){
    this->nom = n;
    this->description = d;
    this->priorite = p;
}


/**
 * @brief Destroy the Tache:: Tache object
 * 
 */
Tache::~Tache(){

}

//assesseur
/**
 * @brief 
 * 
 * @return string 
 */
string Tache::getName(){
    return this->nom;
}

/**
 * @brief 
 * 
 * @return string 
 */
string Tache::getDescription(){
    return this->description;
}

/**
 * @brief 
 * 
 * @return int 
 */
int Tache::getPriorite() const{
    return this->priorite;
}


//methodes
/**
 * @brief 
 * 
 * @return int 
 */
int Tache::traiter(){
    srand(time(0));
    if (rand()%5+1<5)
        return 1;
    else 
        return 0;
}


ostream & operator<<(ostream& os, const Tache& t){
    os << t.nom << " : " << t.description << " (priorité : " << t.priorite << ")" << endl;
    return os;
}

bool Tache::operator==(const Tache& t){
    if (this->getPriorite() == t.getPriorite())
        return true;
    else
        return false;
}

bool Tache::operator!=(const Tache& t){
    if (*this == t)
        return false;
    else
        return true;
}

bool Tache::operator>=(const Tache& t){
    if (this->getPriorite() >= t.getPriorite())
        return true;
    else
        return false;
}

bool Tache::operator<=(const Tache& t){
    if (this->getPriorite() <= t.getPriorite())
        return true;
    else
        return false;
}

bool Tache::operator<(const Tache& t){
    if (this->getPriorite() < t.getPriorite())
        return true;
    else
        return false;
}

bool Tache::operator>(const Tache& t){
    if (this->getPriorite() > t.getPriorite())
        return true;
    else
        return false;
}