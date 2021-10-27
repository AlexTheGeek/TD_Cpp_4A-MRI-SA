#include <iostream>
#include <cstdlib>
#include "Polynomial.h"
using namespace std;

int main() {
    int deg = 4;
    int degb = 3;
    float* coef = new float[deg];
	for (int i = 0 ; i < deg ; i ++)
        coef[i] = i + 1;
    float* coefb = new float[degb];
	for (int i = 0 ; i < degb ; i ++)
        coefb[i] = -1 * (i % 2)  + 1 - (i % 2) ;   
	Polynomial p(deg,coef);
    Polynomial q(degb,coefb);
    Polynomial r;
    
    //tests
    
    cout << "p(x)=" << p << " -- q(x)=" << q << endl;
    cout << "(p==q)=" << (p==q) << endl;
    cout << "(p!=q)=" << (p!=q) << endl;
    cout << "p(x)+3=" << p+3 << endl;
    cout << "3+p(x)=" << 3+p << endl;
    cout << "q(x)*2=" << q*2 << endl;
    cout << "p(x)+q(x)=" << (q+p) << endl;
    r = p + q;
    cout << "r(x)=p(x)+q(x); r(x)=" << r << endl;
    cout << "p(x)+q(x)" << q+p << endl;
    cout << "p(x)++=" << p++ << endl;
    cout << "++p(x)=" << ++p << endl;
    cout << "p(x)=" << p << endl;
    cout << "p(2)=" << p(2) << ", p[2]=" << p[2] << endl;
    cout << "p(x)+=q(x)=" << (p+=q) << endl; 
    cout << "p(x)=" << p << endl;
    r = q * 10; 
    cout << "r(x)=q(x)*10; r(x)=" << r << endl;
	return 0;
}


