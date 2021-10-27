/**
 * @file main.cpp
 * @author Alexis Brunet (alexis.brunet@lapinfo.fr)
 * @brief 
 * @version 0.1
 * @date 2021-10-09
 * 
 * @copyright Copyright (c) 2021
 * 
 */

/***************/
/** LIBRARIES **/
/***************/
#include <iostream>
#include <string>
#include "tache.h"
#include "functions.h"
#include "listedetaches.h"



/**********/
/** MAIN **/
/**********/
int main(){
    //string n, d;
    //int p;
    //getline(cin, n);
    //getline(cin, d);
    //cin >> p;
    printf("\n-------------------------------\n");
    Tache tache1("Panne", "Reparer la machine N856", 8), tache2("Achat", "Acheter des pieces de rechange", 4); 
    Tache tache3("tache 3", "tache 3", 8), tache4("tache 4", "tache 4", 4);
    Tache tache5("tache 5", "tache 5", 1), tache6("tache 6", "tache 6", 10);
    Tache tache7("tache 7", "tache 7", 2), tache8("tache 8", "tache 8", 6);
    Tache tache9("tache 8", "tache 8", 11), tache10("tache 10", "tache 10", 15);
    Tache tache11("tache 11", "tache 11", 3), tache12("tache 12", "tache 12", 7);

    printf("\n-------------------------------\n");
    //Tache tache3(n,d,p);
    //afficher_tache(tache1);
    //printf("\n-------------------------------\n");
    //afficher_tache(tache2);
    printf("\n-------------------------------\n");
    //afficher_tache(tache3);
    ListeDeTache liste_de_tache1(15,tache1);
    printf("\n-------------------------------\n");
    afficher_ListeDeTaches(liste_de_tache1);
    printf("\n-------------------------------\n");
    liste_de_tache1.AjouterTache(tache2);
    liste_de_tache1.AjouterTache(tache3);
    liste_de_tache1.AjouterTache(tache4);
    liste_de_tache1.AjouterTache(tache5);
    liste_de_tache1.AjouterTache(tache6);
    liste_de_tache1.AjouterTache(tache7);
    liste_de_tache1.AjouterTache(tache8);
    liste_de_tache1.AjouterTache(tache9);
    liste_de_tache1.AjouterTache(tache10);
    liste_de_tache1.AjouterTache(tache11);
    liste_de_tache1.AjouterTache(tache12);
    liste_de_tache1.AjouterTache(tache2);
    liste_de_tache1.AjouterTache(tache3);
    liste_de_tache1.AjouterTache(tache4);
    liste_de_tache1.AjouterTache(tache5);
    int i = 0, nb_el = liste_de_tache1.getNb();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);
    liste_de_tache1.TraiterTache();
    printf("\n**********\n");
    afficher_ListeDeTaches(liste_de_tache1);

    liste_de_tache1.AjouterTache(tache1);
    afficher_ListeDeTaches(liste_de_tache1);

    return 0;
}
