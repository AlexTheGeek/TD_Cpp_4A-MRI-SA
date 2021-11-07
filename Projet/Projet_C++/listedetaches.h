/**
 * @file listedetaches.h
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef LISTEDETACHES_H
#define LISTEDETACHES_H

#include "tache.h"
#include <string>

using namespace std;

//************************//
//** CLASS ListeDeTache **//
//************************//

/**
 * @brief Ensemble des Tâches, une class ListeDeTache définit par un max (int), prochain (int), nb (int) et un tableau Liste de Tache. 
 * 
 */
class ListeDeTache{
    private:
        int max; //nombre maximum de tâche dans la liste
        int prochain; //id (numéro dans la liste de tâche) de la prochaine tâche à traiter (avec une forte priorité)
        int nb; //nombre de tâche dans la Liste
        Tache *Liste; //Tableau de Tâches

    public:
    //constructeurs
        ListeDeTache(); //de base
        ListeDeTache(int, Tache); //avec un int pour le max de tâche pour la liste, et la première tâche à ajouter dans la liste
        ListeDeTache(const ListeDeTache&); //par copie

    //destructeur
        virtual ~ListeDeTache();
    
    //Accesseur
        int getMax();
        int getProchain();
        int getNb();
        Tache * getListe();
    
    //Méthodes
        void AjouterTache(Tache);
        bool TraiterTache();
        
        friend ostream & operator<<(ostream& os, const ListeDeTache& lt);

        Tache operator[](int const);
        ListeDeTache& operator+=(const Tache&);
        bool operator--(int);
};

#endif