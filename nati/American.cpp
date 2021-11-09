
#include "Personne.h"
#include "American.h"
#include <iostream>
#include <string>

string etats[] = {"Alabama", "Alaska", "Arizona", "Arkansas", "Californie", "Caroline du Nord",
    "Caroline du Sud", "Colorado", "Connecticut", "Dakota du Nord", "Dakota du Sud", "Delaware", 
    "Floride", "Géorgie", "Hawaï", "Idaho", "Illinois", "Iowa", "Indiana", "Kansas", "Kentucky", 
    "Louisiane", "Maine", "Maryland", "Massachusetts", "Michigan", "Minnesota", "Mississippi",
    "Missouri", "Montana", "Nebraska", "Nevada", "New Hampshire", "New Jersey", "New York", "Nouveau-Mexique", 
    "Ohio", "Oklahoma", "Oregon", "Pennsylvanie", "Rhode Island", "Tennessee", "Texas", "Utah", "Vermont",
    "Virginie", "Virginie occidentale", "Washington", "Wisconsin", "Wyoming"};

using namespace std;

//Constructeurs
American::American(){
    this->etat = 0;
//     cout << "Constructeur de Americain" << endl;
}
American::American(string name, int age, int etat):Personne(name,age){
    this->etat = etat;
//     cout << "Constructeur de Americain" << endl;
}

//Destructeur
American::~American(){        
//     cout << "Destructeur de Americain" << endl;
}

// Méthodes
bool American::isMajor(){
    if (etat == 0 || etat == 30) //Alabama et le Nebraska 
        return age >= 19;
    if (etat == 27) //Mississippi
        return age >= 21;
    return age >= 18;
}

void American::hello(){
    cout << "hello, my name is " << name << ", I'm " << age << " years old. I come from " << etats[etat] << "." << endl; 
}


