/**
 * @file listedetaches.cpp
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.2
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */


/***************/
/** LIBRARIES **/
/***************/
#include "tache.h"
#include "functions.h"
#include "listedetaches.h"
#include <string>
#include <iostream>

using namespace std;


/**
 * @brief Construct a new Liste De Tache:: Liste De Tache object
 * 
 */
ListeDeTache::ListeDeTache(){
    this->max = 50;
    this->prochain = 0;
    this->Liste = new Tache [max];
    this->nb = 0;
}


/**
 * @brief Construct a new Liste De Tache:: Liste De Tache object
 * 
 * @param m 
 * @param t 
 */
ListeDeTache::ListeDeTache(int m, Tache t){
    this->max = m;
    this->nb = 1;
    this->prochain = 0; 
    this->Liste = new Tache [max];
    this->Liste[0] = t;
}


//Exercice 1
/**
 * @brief Construct a new Liste De Tache:: Liste De Tache object
 * 
 * @param t 
 */
ListeDeTache::ListeDeTache(const ListeDeTache &t ){
    max=t.max;
    prochain=t.prochain;
    nb=t.nb;
    Liste = new Tache [t.max];
    Liste = t.Liste;
}


/**
 * @brief Destroy the Liste De Tache:: Liste De Tache object
 * 
 */
ListeDeTache::~ListeDeTache(){
    delete [] Liste;
}

/**
 * @brief 
 * 
 * @return int 
 */
int ListeDeTache::getNb(){
    return this->nb;
}

/**
 * @brief 
 * 
 * @return int 
 */
int ListeDeTache::getProchain(){
    return this->prochain;
}

/**
 * @brief 
 * 
 * @return int 
 */
int ListeDeTache::getMax(){
    return this->max;
}

/**
 * @brief 
 * 
 * @return Tache* 
 */
Tache * ListeDeTache::getListe(){
    return this->Liste;
}


/**
 * @brief 
 * 
 * @param t 
 */
void ListeDeTache::AjouterTache(Tache t){
    if (this->nb == this->max)
        cout << "Impossible d ajouter une tache supplementaire dans la liste de tache\nCreez une nouvelle liste ou augmentez la taille de la liste" << endl;
    else {
        this->nb = this->nb + 1;
        this->Liste[nb-1] = t;
        cout << "Tache ajoutee avec succes" << endl;
        if (t.getPriorite() > this->Liste[this->prochain].getPriorite())
            this->prochain = nb-1;
    }
}


/**
 * @brief 
 * 
 * @return true : correct treatment
 * @return false : incorrect treatment
 */
bool ListeDeTache::TraiterTache(){
    if (this->nb == 0){
        cout << "Aucune tache a traiter" << endl;
        return true; //i consider : if nothing happen so it's a correct treatment 
    }
    else {
        cout << "Affichage de la tache a traiter" << endl;
        afficher_tache(this->Liste[this->prochain]);
        if (this->Liste[this->prochain].traiter()){
            int i = 0,j = 0, tmp_priorite= -1, tmp_id = -1;
            Tache * tmp_liste = new Tache [max];
            if (this->nb == 1){
                this->Liste = tmp_liste;
                this->prochain = 0;
                this->nb = 0;
            }
            else {
                for(i=0;i<this->nb;i++){
                    if (this->prochain != i){
                        tmp_liste[j] = this->Liste[i];
                        j+=1;
                    }
                }
                this->Liste = tmp_liste;
                this->nb = this->nb - 1;
                for (i=0;i<this->nb;i++){
                    if (tmp_priorite < this->Liste[i].getPriorite()){
                        tmp_priorite = this->Liste[i].getPriorite();
                        tmp_id = i;
                    }
                }
                this->prochain = tmp_id;
                
            }
            delete [] tmp_liste;
            return true;
        }
        else {
            return false;
        }
    }
}


ostream & operator<<(ostream& os, const ListeDeTache& lt){
    os << "Liste de " << lt.nb << " taches(s)" << endl;
    for(int i=0; i<lt.nb;i++){
        os << "      " << i+1 << ")" << lt.Liste[i];
    }
    return os;
}

Tache ListeDeTache::operator[](int const i){
    return Liste[i];
}


ListeDeTache& ListeDeTache::operator+=(Tache const& t){
    if (this->nb == this->max)
        cout << "Impossible d ajouter une tache supplementaire dans la liste de tache\nCreez une nouvelle liste ou augmentez la taille de la liste" << endl;
    else {
        this->nb = this->nb + 1;
        this->Liste[nb-1] = t;
        cout << "Tache ajoutee avec succes" << endl;
        if (t.getPriorite() > this->Liste[this->prochain].getPriorite())
            this->prochain = nb-1;
    }
    return *this;
}



bool ListeDeTache::operator--(int i){
    if (this->nb == 0){
        cout << "Aucune tache a traiter" << endl;
        return true; //i consider : if nothing happen so it's a correct treatment 
    }
    else {
        int p=-1,id=-1;
        if (Liste[this->getProchain()].traiter()){ //c'est bien traitée
            Liste[this->getProchain()].~Tache();
            for (int i = this->getProchain(); i<nb;i++){
                Liste[i]=Liste[i+1]; 
            }
            this->nb = nb-1;
            for (int i=0;i<nb;i++){
                if (Liste[i].getPriorite()>p){
                    p=Liste[i].getPriorite();
                    id=i;
                }
            this->prochain = id;
            }
            return true;
        }
        //malgré mal traité on la supprime quand même
        Liste[getProchain()].~Tache();
        for (int i = getProchain(); i<nb;i++){
            Liste[i]=Liste[i+1];
        }
        this->nb = nb-1;
        for (int i=0;i<nb;i++){
            if (Liste[i].getPriorite()>p){
                p=Liste[i].getPriorite();
                id=i;
            }
        }
        this->prochain = id;
        return false;
    }
}