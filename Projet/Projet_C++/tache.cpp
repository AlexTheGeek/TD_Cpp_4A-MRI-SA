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

//***************//
//** LIBRARIES **//
//***************//
#include <iostream>
#include <cstdlib>
#include "tache.h"
#include "functions.h"
#include "listedetaches.h"

using namespace std;

//***************************//
//** FUNCTIONS CLASS Tache **//
//***************************//

//Part 1

/**
 * @brief Construction d'un nouvel objet Tache
 * 
 */
Tache::Tache(){
    this->nom = "Nom de la Tache";
    this->description = "Description de la Tache";
    this->priorite = 0;
}

/**
 * @brief Construction d'un nouvel objet Tache
 * 
 * @param n Le nom de la tâche
 * @param d la description de la tâche
 * @param p la priorité de la tâche
 */
Tache::Tache(string n, string d, int p){
    this->nom = n;
    this->description = d;
    this->priorite = p;
}


/**
 * @brief Destruction de l'objet de Tache
 * 
 */
Tache::~Tache(){

}

/**
 * @brief Accesseur du nom de cette tâche
 * 
 * @return string le nom de la tâche
 */
string Tache::getName(){
    return this->nom;
}

/**
 * @brief Accesseur de la description de cette tâche
 * 
 * @return string la description de la tâche
 */
string Tache::getDescription(){
    return this->description;
}

/**
 * @brief Accesseur de la priorité de cette tâche
 * 
 * @return int la valeur de la priorité de la tâche
 */
int Tache::getPriorite() const{
    return this->priorite;
}

/**
 * @brief Traitement correct de la tâche si la probabilité est inférieur à 4/5.
 * 
 * @return int 1 : si le traitement c'est correctement bien passé et 0 : si le traitemnt ce n'est pas correctement bien passé.
 */
int Tache::traiter(){
    srand(time(0));
    if (rand()%5+1<5) //Vérfication de la probabilité inférieur à 4/5, soit un chiffre aléatoire de 0 à 5. Puis on vérifie qu'il est inférieur ou pas à 5.
        return 1; //probabilité inférieur à 4/5
    else 
        return 0; //probabilité supérieur à 4/5
}

//Part 2

/**
 * @brief Opérateur d'affichage d'une Tache
 * 
 * @param os référence sur un objet de type ostream
 * @param t La Tache à afficher
 * @return ostream& la référence de l'affichage de la Tache
 */
ostream & operator<<(ostream& os, const Tache& t){
    os << t.nom << " : " << t.description << " (priorité : " << t.priorite << ")" << endl;
    return os;
}

/**
 * @brief Comparaison des priorités entre 2 tâches pour savoir si elles sont égales
 * 
 * @param t 
 * @return true les priorités des 2 tâches sont égales
 * @return false les priorités des 2 tâches ne sont pas égales
 */
bool Tache::operator==(const Tache& t){
    if (this->getPriorite() == t.getPriorite())
        return true;
    else
        return false;
}

/**
 * @brief Comparaison des priorités entre 2 tâches pour savoir si les priorités sont différentes
 * 
 * @param t 
 * @return true les priorités des 2 tâches sont différentes
 * @return false les priorités des 2 tâches ne sont pas différentes
 */
bool Tache::operator!=(const Tache& t){
    if (*this == t)
        return false;
    else
        return true;
}

/**
 * @brief Comparaison des priorités entre 2 tâches pour savoir si la priorité de la tâche1 (this) est supérieure ou égale à la priorité de la tâche2 (t)
 * 
 * @param t 
 * @return true la priorité de la tâche1 (this) est supérieure ou égale à la priorité de la tâche2 (t)
 * @return false la priorité de la tâche1 (this) n'est pas supérieure ou égale à la priorité de la tâche2 (t)
 */
bool Tache::operator>=(const Tache& t){
    if (this->getPriorite() >= t.getPriorite())
        return true;
    else
        return false;
}

/**
 * @brief Comparaison des priorités entre 2 tâches pour savoir si la priorité de la tâche1 (this) est inférieure ou égale à la priorité de la tâche2 (t)
 * 
 * @param t 
 * @return true la priorité de la tâche1 (this) est inférieure ou égale à la priorité de la tâche2 (t)
 * @return false la priorité de la tâche1 (this) n'est pas inférieure ou égale à la priorité de la tâche2 (t)
 */
bool Tache::operator<=(const Tache& t){
    if (this->getPriorite() <= t.getPriorite())
        return true;
    else
        return false;
}

/**
 * @brief Comparaison des priorités entre 2 tâches pour savoir si la priorité de la tâche1 (this) est inférieure strictement à la priorité de la tâche2 (t)
 * 
 * @param t 
 * @return true la priorité la tâche1 (this) est inférieure strictement à la priorité de la tâche2 (t)
 * @return false la priorité la tâche1 (this) n'est pas inférieure strictement à la priorité de la tâche2 (t)
 */
bool Tache::operator<(const Tache& t){
    if (this->getPriorite() < t.getPriorite())
        return true;
    else
        return false;
}

/**
 * @brief Comparaison des priorités entre 2 tâches pour savoir si la priorité de la tâche1 (this) est supérieur strictement à la priorité de la tâche2 (t)
 * 
 * @param t 
 * @return true la priorité de la tâche1 (this) est supérieur strictement à la priorité de la tâche2 (t)
 * @return false la priorité de la tâche1 (this) n'est pas supérieur strictement à la priorité de la tâche2 (t)
 */
bool Tache::operator>(const Tache& t){
    if (this->getPriorite() > t.getPriorite())
        return true;
    else
        return false;
}