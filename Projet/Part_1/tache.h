/**
 * @file tache.h
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#ifndef TACHE_H
#define TACHE_H

#include <string>

using namespace std;

class Tache{
    private:
        string nom;
        string description;
        int priorite;
    
    public:
        //constructeur
        Tache();
        Tache(string, string, int);

        //destructeur
        virtual ~Tache();

        //assesseurs
        string getName();
        string getDescription();
        int getPriorite();

        //mutateurs
        void setName(string);
        void setDescription(string);
        void setPriorite(int);

        //Methodes
        int traiter();
       

    


};





#endif