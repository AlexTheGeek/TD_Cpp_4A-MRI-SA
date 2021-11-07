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

//*****************//
//** CLASS Tache **//
//*****************//

/**
 * @brief Création de la structure d'une Tache définie par un nom (string), description (string) et une priorité (int).
 * 
 */
class Tache{
    private:
        string nom; //Nom de la tâche
        string description; //Description de la tâche
        int priorite; //priorité de la tâche, c'est-à-dire son importance
    
    public:
    //constructeur
        Tache(); //de base
        Tache(string, string, int); //avec un nom, description et priorité

    //destructeur
        virtual ~Tache();

    //Accesseur
        string getName();
        string getDescription();
        int getPriorite() const;

    //Mutateur
        void setName(string);
        void setDescription(string);
        void setPriorite(int);

    //Méthodes
        int traiter();
       
        friend ostream & operator<<(ostream& os, const Tache& t);

        bool operator==(Tache const&);
        bool operator!=(Tache const&);
        bool operator<=(Tache const&);
        bool operator>=(Tache const&);
        bool operator<(Tache const&);
        bool operator>(Tache const&);
};

#endif