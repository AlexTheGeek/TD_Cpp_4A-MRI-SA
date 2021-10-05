/**
 * @file exo2.cpp
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
 */
void tabf(){
    int *tab,i, sum=0;
    tab = new int [50];
    float avrg;
    srand((unsigned)time(0));
    for (i=0;i<50;i++){
        tab[i] = (rand() %100) +1;
        sum = tab[i] + sum;
        avrg = sum/(float)50;
    }

    for (i=0;i<50;i++){
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }

    //cout << "Somme = " << sum << endl;
    cout << "La moyenne du tableau est de " << avrg << endl;
    delete tab;
}

/**
 * @brief 
 * 
 * @param n 
 */
void tabn(int n){
    int *tab,i, sum=0;
    tab = new int [n];
    float avrg;
    srand((unsigned)time(0));
    for (i=0;i<n;i++){
        tab[i] = (rand() %100) +1;
        sum = tab[i] + sum;
        avrg = sum/(float)n;
    }

    for (i=0;i<n;i++){
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }

    //cout << "Somme = " << sum << endl;
    cout << "La moyenne du tableau est de " << avrg << endl;
    delete tab;
}


/**
 * @brief 
 * 
 * @param n 
 * @param m 
 */
void tabn_avrgm(int n, int m){
    int *tab,i, sum=0;
    tab = new int [n];
    float avrg;
    srand((unsigned)time(0));
    for (i=0;i<n;i++){
        tab[i] = (rand() %100) +1;
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }

    for (i=0;i<m;i++){
        sum = tab[i] + sum;
        avrg = sum/(float)m;
    }

    //cout << "Somme = " << sum << endl;
    cout << "La moyenne du tableau est de " << avrg << endl;
    delete tab;
}



int main(){
    int a;
    cin >> a;

    //tabf();
    tabn(a);
    //tabn_avrgm(a, 50);

    return 0;
}