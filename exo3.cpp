/**
 * @file exo3.cpp
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

void procva(int x, int y)
{
    int tmp = 0;
    cout << "x = " << x << "; y = " << y << endl;
    tmp = x;
    x = y;
    y = tmp;
    cout << "x = " << x << "; y = " << y << endl;
}



void provca1(int &x, int &y)
{
    int tmp = x;
    x = y;
    y = tmp;
    cout << "x = " << x << "; y = " << y << endl;
}


void provca2(int *x, int *y)
{
    int tmp = *x;
    *x = *y;
    *y = tmp;
}

void provca3(int &x, int *y)
{
    int tmp = x;
    x = *y;
    *y = tmp;
    cout << "x = " << x << "; y = " << *y << endl;
}

void tabn(int n)
{
    int *tab, i, sum = 0;
    tab = new int[n];
    float avrg;
    srand((unsigned)time(0));
    for (i = 0; i < n; i++)
    {
        tab[i] = (rand() % 100) + 1;
        sum = tab[i] + sum;
        avrg = sum / (float)n;
    }

    for (i = 0; i < n; i++)
    {
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }

    //cout << "Somme = " << sum << endl;
    cout << "La moyenne du tableau est de " << avrg << endl;
    delete tab;
}

int main()
{
    // avant c
    cout << "1" << endl;
    int a = 3, b = 6;
    procva(a, b);


    cout << "2" << endl;
    int c = 3, d = 6;
    provca1(c, d);
    cout << "x = " << c << "; y = " << d << endl;


    cout << "3" << endl;
    int e = 3, f = 6;
    provca2(&e, &f);
    cout << "x = " << e << "; y = " << f << endl;

    cout << "4" << endl;
    int g = 3, h = 6;
    provca3(g, &h);
    cout << "x = " << g << "; y = " << h << endl;

    // c


    //d
    int length;
    cout << "Choisissez la taille de votre tableau : ";
    cin >> length;
    tabn(length);

    return 0;
}