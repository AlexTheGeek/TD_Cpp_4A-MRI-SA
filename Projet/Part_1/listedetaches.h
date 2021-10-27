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

class ListeDeTache{
    private:
        int max;
        int prochain;
        int nb;
        Tache *Liste;

    public:
        ListeDeTache();
        ListeDeTache(int, Tache);

        virtual ~ListeDeTache();
        
        int getMax();
        int getProchain();
        int getNb();
        Tache * getListe();

        void setMax();
        void setProchain();

        void AjouterTache(Tache);
        bool TraiterTache();

};





#endif