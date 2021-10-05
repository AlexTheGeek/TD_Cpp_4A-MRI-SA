/**
 * @file exo1.cpp
 * @author Alexis Brunet (alexis.brunet@insa-cvl.fr)
 * @brief 
 * @version 0.1
 * @date 2021-09-17
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <cstdlib>
using namespace std;


/**
 * @brief 
 * 
 * @param n 
 * @return int 
 */
int sum_square(int n){
    if (n == 1)
        return 1;
    else
        return n*n + sum_square(n-1);
}

/**
 * @brief 
 * 
 * @param the_number 
 */
void search_number(int the_number){
    cout << "Entrez un nombre entre 0 et 20" << endl;
    int my_number, compteur=1;
    cin >> my_number;
    while (my_number != the_number){
        if ((my_number > 20) || (my_number < 0))
            cout << "Merci de saisir un nombre entre 0 et 20" << endl;
        else if (my_number < the_number)
            cout << "Plus grand" << endl;
        else if (my_number > the_number)
            cout << "Plus petit" << endl;

        cin >> my_number;
        compteur ++;
    }
    cout << "Bravo tu as trouvé en "<< compteur << "fois !!" << endl;
}


int main(){
    //a-b
    int a; 
    cout << "Choisissez les premiers carre a calculer : " ;
    cin >> a;
    cout << "Pour les " << a << " au carré : " << sum_square(a) << endl;

    //c
    srand((unsigned)time(0));
    int r = (rand() %20) +1;
    //cout << r <<;
    search_number(r);


    return 0;
}