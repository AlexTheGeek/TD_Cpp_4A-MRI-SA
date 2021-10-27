#include <iostream>
#include <cstdlib>
#include "Polynomial.h"
using namespace std;

int main() {
    int deg_p = 4;
    int deg_q = 3;
    float* coef_p = new float[deg_p];
	for (int i = 0 ; i < deg_p ; i ++)
        coef_p[i] = i + 1;
    float* coef_q = new float[deg_q];
	for (int i = 0 ; i < deg_q ; i ++)
        coef_q[i] =  1 - 2 * (i % 2) ;   
	Polynomial p(deg_p,coef_p);
    Polynomial q(deg_q,coef_q);
    cout << "p(x)=" << p << endl;
    cout << "q(x)=" << q << endl;
    cout << "(p==q)=" << (p==q) << endl;
    cout << "(p!=q)=" << (p!=q) << endl;
	return 0;
}


