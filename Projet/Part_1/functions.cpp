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
 * @brief Affichage du nom, description et priorité d'une tache passée en paramètre
 * 
 * @param ta Prend en paramètre une Tache
 */
void afficher_tache(Tache ta){
    cout << "Nom : " << ta.getName() << endl; //Affichage du nom de la tache
    cout << "Description : " << ta.getDescription() << endl; //Affichage de la description de la tache
    cout << "Priorite : " << ta.getPriorite() << endl; //Affichage de la priorité de la tache
}

/**
 * @brief Affichage de la liste, c'est-à-dire chacun des tâches de manière détaillée
 * 
 * @param ldt Prend en paramètre une ListeDeTache
 */
void afficher_ListeDeTaches(ListeDeTache ldt){
    int i; //initilisation de i en entier afin de parcourir le tableau de tache dans la liste de taches
    if (ldt.getNb() == 0) //utilisation du if pour savoir si la liste contient des tâches
        printf("La liste est vide\n"); //Affichage texte que la liste est vide
    else { 
        Tache * liste = ldt.getListe(); //Récupération de la liste de tâche dans une variable local à la fonction, car la variable de liste est privée dans la class, donc y accéde via un assesseur
        printf("Affichage de la Liste\n"); //Affichage texte
        printf("Il y a %i tache(s).\n", ldt.getNb()); //Affichage du nombre de tâches contenues dans la liste de tâches
        printf("Indice de la plus grande priorite est %i pour %i de priorite.\n", ldt.getProchain(), liste[ldt.getProchain()].getPriorite()); //Affichage de la priorité de la prochaine tâche qui sera traitée
        printf("La capacite max de cette liste est de %i taches.\n", ldt.getMax()); //Affichage de la capacité de la liste de tache
        for (i=0;i<ldt.getNb();i++){ // début de boucle for, avec initialisation de i à 0 par incrémentation de 1 jusqu'au strictement nombre de tâche contenu dans la liste de taches
            printf("\n\n-------------------------------\n\nTache n°%i\n", i+1); //Affichage d'un séparateur et du numéro de la tâche
            afficher_tache(liste[i]); //appelle de la fonction d'affichage de la tâche
        }
    }
}