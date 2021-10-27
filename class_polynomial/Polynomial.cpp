#include "Polynomial.h"
#include <iostream>

using namespace std;

Polynomial::Polynomial(){
    this->deg = 0;
}

Polynomial::Polynomial(int d, float* c){
    deg = d;
    coef = new float[d];
    for (int i = 0; i < d; i++)
        coef[i] = c[i];
}

Polynomial::Polynomial(int d){
    this->deg = d;
    this->coef = new float[d];
    for (int i =0; i < d; i++){
        coef[i] = 0;
    }
}

Polynomial::Polynomial(const Polynomial& p){
    deg = p.deg;
    coef = new float[deg];
    for (int i = 0; i < deg; i++)
        coef[i] = p.coef[i];
}

Polynomial::~Polynomial(){
    delete [] coef;
}


bool Polynomial::operator==(const Polynomial &p){
    if (deg != p.deg)
        return false;
    for (int i=0;i<deg;i++){
        if (coef[i] != p.coef[i])
            return false;
    }
    return true;
}

bool Polynomial::operator!=(const Polynomial &p){
    return !(*this == p);
}


ostream & operator<<(ostream& out, const Polynomial& p){
    if (p.deg == -1)
        out << "vide";
    for(int i = 0;i<p.deg;i++){
        if (p.coef !=0){
            if (i == 0)
                out << p.coef[0];
            else if (i==1)
                out << p.coef[1] << "x";
            else {
                out << "+" << p.coef[i] << "x^" << i;
            }
        }
    }
    return out;
}
















