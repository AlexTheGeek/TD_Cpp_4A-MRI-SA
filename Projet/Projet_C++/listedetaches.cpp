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

//***************//
//** LIBRARIES **//
//***************//
#include "tache.h"
#include "functions.h"
#include "listedetaches.h"
#include <string>
#include <iostream>

using namespace std;

//**********************************//
//** FUNCTIONS CLASS ListeDeTache **//
//**********************************//


//Part 1
/**
 * @brief Construction d'un nouvel objet ListeDeTache
 * 
 */
ListeDeTache::ListeDeTache(){
    this->max = 50;
    this->prochain = 0;
    this->Liste = new Tache [max];
    this->nb = 0;
}

/**
 * @brief Construction d'un nouvel objet ListeDeTache à partir d'un max et d'une tâche passés en paramètre
 * 
 * @param m le nombre maximum que la liste peut recevoir de tâche
 * @param t première tâche de la liste
 */
ListeDeTache::ListeDeTache(int m, Tache t){
    this->max = m;
    this->nb = 1;
    this->prochain = 0; 
    this->Liste = new Tache [max];
    this->Liste[0] = t;
}


/**
 * @brief Destructeur de l'objet de ListeDeTache
 * 
 */
ListeDeTache::~ListeDeTache(){
    delete [] Liste; //Suppression/Désallocation des epaces à allocation dynamique, le tableau de tâche appelé Liste dans la classe. 
}

/**
 * @brief Accesseur du nombre de tâche dans la Liste
 * 
 * @return int le nombre de tâche dans cette liste
 */
int ListeDeTache::getNb(){
    return this->nb;
}

/**
 * @brief Accesseur de l'ID de la prochaine tâche à traiter
 * 
 * @return int l'ID (numéro dans le tableau) dans cette Liste de la prochaine tâche à traiter
 */
int ListeDeTache::getProchain(){
    return this->prochain;
}

/**
 * @brief Accesseur du nombre maximum de tâche accepté dans la liste
 * 
 * @return int le nombre maximum de tâche
 */
int ListeDeTache::getMax(){
    return this->max;
}

/**
 * @brief Accesseur de la Liste de la Class ListeDeTache
 * 
 * @return Tache* un tableau de Tâche correspondant à la Liste
 */
Tache * ListeDeTache::getListe(){
    return this->Liste;
}


/**
 * @brief Ajout d'une tâche à la suite dans la liste de tâche
 * 
 * @param t la tâche à ajouter
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
 * @brief Traitement de la prochaine tâche et sa suppression suite à son traitement correct. Pour un traitement un correct pas de suppression de la tâche dans la Liste.
 * 
 * @return true traitement correct
 * @return false traitement incorrect
 */
bool ListeDeTache::TraiterTache(){
    if (this->nb == 0){ //Vérification s'il n'y a pas de tâche dans la liste
        //Pas de tâche à traiter
        cout << "Aucune tache a traiter" << endl;
        return true; //Je considére que si rien ne se passe, c'es-à-dire pas de tâche à traiter qu'alors c'est un traitement correct
    }
    else {
        //On traite la prochaine tâche à traiter et on la supprime
        cout << "Affichage de la tache a traiter" << endl;
        //afficher_tache(this->Liste[this->prochain]); Affichage de la tâche part1
        cout << this->Liste[this->prochain]; //Affichage de la tâche avec la surcharge de l'opérateur de sortie, part2
        if (this->Liste[this->prochain].traiter()){ //Vérification si elle a été correctement traitée
        //la tâche s'est correctement traité dans ce cas nous allons la supprimer de la Liste sans destructeur dans la part1.
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
            //la tâche ne s'est pas correctement traitée, dans la part1 nous considérons qu'il ne faut pas la supprimer de la liste
            return false;
        }
    }
}


//Part 2

/**
 * @brief Construction d'un nouvel object ListeDeTache par copie
 * 
 * @param lt ListeDeTache passé en copie constante
 */
ListeDeTache::ListeDeTache(const ListeDeTache &lt){
    max=lt.max;
    prochain=lt.prochain;
    nb=lt.nb;
    Liste = new Tache [lt.max];
    Liste = lt.Liste;
}


/**
 * @brief Operateur d'affichage d'une ListeDeTache
 * 
 * @param os référence sur un objet de type ostream
 * @param lt La liste de tâche à afficher
 * @return ostream& la référence de l'affichage de la ListeDeTache
 */
ostream & operator<<(ostream& os, const ListeDeTache& lt){
    os << "Liste de " << lt.nb << " taches(s)" << endl;
    for(int i=0; i<lt.nb;i++){
        os << "     " << i+1 << ") " << lt.Liste[i];
    }
    return os;
}



/**
 * @brief Récupération de la ième tâche par surchage de []
 * 
 * @param i le numéro de la tâche que l'on souhaite récupérer
 * @return Tache La tâche qu'on souhaite récupéré par son numéro
 */
Tache ListeDeTache::operator[](int const i){
    return Liste[i-1]; //i-1 car par exemple si on demande l[10] soit la tâche 10 cela correspond à la 9eme case de la liste
}



/**
 * @brief Ajout d'un tâche par surcharge de l'opération +=
 * 
 * @param t Tache qu'on souhaite ajouter
 * @return ListeDeTache& La ListeDeTache avec la Liste avec la tâche ajouté et le nombre de tâche incrémenté de 1 et la vérification de la prochaine priorité
 */
ListeDeTache& ListeDeTache::operator+=(Tache const& t){
    if (this->nb == this->max) //On vérfie si on est pas déjà au max de la taille de la Liste
    //Liste déjà pleine, impossibilité d'ajouter de nouvelle tâche
        cout << "Impossible d ajouter une tache supplementaire dans la liste de tache\nCreez une nouvelle liste ou augmentez la taille de la liste" << endl;
    else {
    //Ajout de la nouvelle tâche dans la liste
        this->nb = this->nb + 1;
        this->Liste[nb-1] = t;
        cout << "Tache ajoutee avec succes" << endl;
        if (t.getPriorite() > this->Liste[this->prochain].getPriorite())
            this->prochain = nb-1;
    }
    return *this;
}


/**
 * @brief Traitement de la prochaine tâche avec l'opérateur --
 * 
 * @param i 
 * @return true 
 * @return false 
 */
bool ListeDeTache::operator--(int i){
    if (this->nb == 0){ //Vérification s'il n'y a pas de tâche dans la liste
    //Pas de tâche dans la Liste
        cout << "Aucune tache a traiter" << endl;
        return true; //Je considére que si rien ne se passe, c'es-à-dire pas de tâche à traiter qu'alors c'est un traitement correct
    }
    else {
    //On traite la prochaine tâche à traiter et on la supprime
        int p=-1,id=-1;
        cout << "Affichage de la tache a traiter" << endl;
        cout << this->Liste[this->prochain]; //Affichage de la tâche avec la surcharge de l'opérateur de sortie
        if (Liste[this->getProchain()].traiter()){ //Vérification si elle a été correctement traitée
        //Tâche correctement traité
            Liste[this->getProchain()].~Tache(); //Utilisation destructeur de la Class Tâche pour supprimer la prochaine tâche (celle qu'on doit traiter)
            //après la suppresion de la tâche traitée, on avance les tâches qui sont derrière elle dans la Liste
            for (int i = this->getProchain(); i<nb;i++){
                Liste[i]=Liste[i+1]; 
            }
            this->nb = nb-1; //désincrémentation du nombre de tâche dans la Liste suite à la suppression de la tâche de la Liste
            //recherche de la prochaine tâche à traiter afin de mettre son ID dans la variable prochain
            for (int i=0;i<nb;i++){
                if (Liste[i].getPriorite()>p){ //on considére que si 2 tâches ou plus ont la même priorité dans ce cas, on prend la première tâche rencontré avec cette priorité comme prochaine tâche à traiter
                    p=Liste[i].getPriorite();
                    id=i;
                }
            }
            this->prochain = id; //récupération de l'id (numéro de la case dans la Liste de la prochaine tâche à traiter)
            return true;
        }
        //Même si la tâche ne s'est pas bien traité, dans le cas de la part2, il faut quand même la supprimer de la Liste mais on renvoie un false afin de confirmer que cela s'est mal passé
        Liste[getProchain()].~Tache();//Utilisation destructeur de la Class Tâche pour supprimer la prochaine tâche (celle qu'on doit traiter)
        //après la suppresion de la tâche non traitée, on avance les tâches qui sont derrière elle dans la Liste
        for (int i = getProchain(); i<nb;i++){
            Liste[i]=Liste[i+1];
        }
        this->nb = nb-1; //désincrémentation du nombre de tâche dans la Liste suite à la suppression de la tâche de la Liste
        //recherche de la prochaine tâche à traiter afin de mettre son ID dans la variable prochain
        for (int i=0;i<nb;i++){
            if (Liste[i].getPriorite()>p){ //on considére que si 2 tâches ou plus ont la même priorité dans ce cas, on prend la première tâche rencontré avec cette priorité comme prochaine tâche à traiter
                p=Liste[i].getPriorite();
                id=i;
            }
        }
        this->prochain = id; //récupération de l'id (numéro de la case dans la Liste de la prochaine tâche à traiter)
        return false;
    }
}