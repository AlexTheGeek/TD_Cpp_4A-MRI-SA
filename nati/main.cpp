

#include <iostream>
#include <string>
#include "Personne.h"
#include "American.h"
#include "Francais.h"
#include "Italiano.h"
using namespace std;


int main() {

        American usa;
        American sam("Sam",20,27);
        Francais jean("Jean",19);
        Italiano mario("Mario",20);
        
//         tests des differentes classes
        cout << " ========= Traitement manuel ==================================================" << endl;
        sam.hello();
        if(sam.isMajor())
            cout << sam.getName() << " est majeur." << endl;
        else
            cout << sam.getName() << " est mineur." << endl;
        jean.hello();
        if(jean.isMajor())
            cout << jean.getName() << " est majeur." << endl;
        else
            cout << jean.getName() << " est mineur." << endl;
        mario.hello();
        if(mario.isMajor())
            cout << mario.getName() << " est majeur." << endl;
        else
            cout << mario.getName() << " est mineur." << endl;
        
        //par tableau d'objets : pas de polymorphisme
        cout << " ========= Traitement automatique : tableau d'objets ==========================" << endl;
        
        Personne  perso[] = {
            sam, jean, mario
        };

        for (int i =0 ; i < 3 ; i++){
            perso[i].hello();
            if(perso[i].isMajor())
                cout << perso[i].getName() << " est majeur." << endl;
            else
                cout << perso[i].getName() << " est mineur." << endl;
        }



//         par tableau de pointeurs : polymorphisme 
        cout << " ========= Traitement automatique : tableau de pointeurs sur objet ============" << endl;
        Personne * perso2[] = {
            &sam, &jean, &mario
        };

        for (int i =0 ; i < 3 ; i++){
            perso2[i]->hello();
            if(perso2[i]->isMajor())
                cout << perso2[i]->getName() << " est majeur." << endl;
            else
                cout << perso2[i]->getName() << " est mineur." << endl;
        }
        
        

}
