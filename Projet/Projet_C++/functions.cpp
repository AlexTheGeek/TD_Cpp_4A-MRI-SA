/**
 * @file functions.cpp
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.2
 * @date 2021-11-02
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/***************/
/** LIBRARIES **/
/***************/
#include <iostream>
#include <cstdlib>
#include "tache.h"
#include "functions.h"
#include "listedetaches.h"

/**********************/
/** STATIC FUNCTIONS **/
/**********************/
/**
 * @brief Affichage d'une tâche
 * 
 * @param ta la tâche à afficher
 */
void afficher_tache(Tache ta){
    cout << "Nom : " << ta.getName() << endl;
    cout << "Description : " << ta.getDescription() << endl;
    cout << "Priorite : " << ta.getPriorite() << endl;
}

/**
 * @brief Affichage de la liste de tâche passé en paramètre
 * 
 * @param ldt la liste de tâche à afficher
 */
void afficher_ListeDeTaches(ListeDeTache ldt){
    int i;
    if (ldt.getNb() == 0)
        cout << "La liste est vide" << endl;
    else {
        Tache * liste = ldt.getListe();
        cout << "Affichage de la Liste" << endl;
        cout << "Il y a " << ldt.getNb() << " tache(s)." << endl;
        cout << "Indice de la plus grande priorite est " << ldt.getProchain() << " pour " << liste[ldt.getProchain()].getPriorite() << " de priorite." << endl;
        cout << "La capacite max de cette liste est de " << ldt.getMax() << " taches." << endl;
        for (i=0;i<ldt.getNb();i++){
            cout << "\n\n-------------------------------\n\nTache n°" << i+1 << endl;
            afficher_tache(liste[i]);
        }
    }
}