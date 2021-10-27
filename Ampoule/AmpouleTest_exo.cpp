
#include <iostream>
#include <cstdlib>
#include <string>
#include "Ampoule.h"
// #include "Circuit.h"

using namespace std;

void affiche_ampoule(Ampoule);
// void affiche_circuit(Circuit);

int main() {
    // Test des ampoules
    Ampoule a("vis, gros culot", 70, 10);
    for(int i = 0; i < 30 ; i ++){
        affiche_ampoule(a);
        if ( i % 2 )
            a.allumer();
        else
            a.eteindre();
    }
    a.changer();
    affiche_ampoule(a);
    
    
    
    //test d'un circuit
    //     int taille = 3;
    //     Ampoule a1("vis, gros culot", 70, 10);
    //     Ampoule a2("vis, gros culot", 50, 5);
    //     Ampoule a3("baionette", 70, 10);
    //     Ampoule tab[] = {a1, a2, a3};
    //     Circuit c(3,tab);
    
    
}

void affiche_ampoule(Ampoule a){
    cout << "Type : (" << a.getType() << "), Puissance : " << a.getPuissance();
    cout << " watt(s), Etat : ";
    if (a.isGrillee())
        cout << "grillee" << endl;
    else
        if (a.isAlimentee())
            cout << "allumee" << endl;
        else
            cout << "eteinte" << endl; 
}

// void affiche_circuit(Circuit c){
// 
// }


