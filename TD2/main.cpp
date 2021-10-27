#include <iostream>
#include "solve.h"

using namespace std;

int main(){
    int bonjour;
    int a,b; //equation coef
    cout << "Quels sont vos coef ? \na = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    EqDegreUn eq1(a,b);
    cout << "Résolue ? " << eq1.getSolve() << endl;
    eq1.solve();
    cout << "Solution = " << eq1.getSolution() << endl;
    cout << "Résolue ? " << eq1.getSolve() << endl;
    eq1.solve();
    return 0;
}
