/**
 * @file listedetaches.cpp
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

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
    this->max = 50; //Initialisation du max à 50
    this->prochain = 0; //Initialisation du prochain à 0
    this->Liste = new Tache [max]; //Initialisation du tableau de Tache
    this->nb = 0; //Initialisation de nombre de tache à 0
}


/**
 * @brief Construct a new Liste De Tache:: Liste De Tache object
 * 
 * @param m Passage du max de la liste
 * @param t Passage de la tâche de base à mettre
 */
ListeDeTache::ListeDeTache(int m, Tache t){
    this->max = m;
    this->nb = 1;
    this->prochain = 0; 
    this->Liste = new Tache [max];
    this->Liste[0] = t;
}

/**
 * @brief Destroy the Liste De Tache:: Liste De Tache object
 * 
 */
ListeDeTache::~ListeDeTache(){

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
    if (this->nb + 1 == this->max)
        printf("Impossible d ajouter une tache supplementaire dans la liste de tache\nCreez une nouvelle liste ou augmentez la taille de la liste\n");
    else {
        this->nb = this->nb + 1;
        this->Liste[nb-1] = t;
        printf("Tache ajoutee avec succes\n");
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
        printf("Aucun tache a traiter");
        return true; //i consider : if nothing happen so it's a correct treatment 
    }
    else {
        printf("Affichage de la tache a traiter\n");
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
            return true;
        }
        else {
            return false;
        }
    }
}


