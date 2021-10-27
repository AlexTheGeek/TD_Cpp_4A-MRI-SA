#include "Polynomial.h"
#include <iostream>

using namespace std;

Polynomial::Polynomial(){
	this->deg = 0;
    coef = new float[0];
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

Polynomial& Polynomial::operator=(const Polynomial& p){
	deg = p.deg;
    delete [] coef;
    coef = new float[deg];
    for (int i = 0; i < deg; i++)
        coef[i] = p.coef[i];
}

ostream & operator<<(ostream& os, const Polynomial& p) {
    
    os << p.coef[0];
    
    if (p.deg > 1) {
        if (p.coef[1] >= 0)
            os << "+";
        os << p.coef[1] << "x";
    }
    for (int i = 2; i< p.deg; i++){
        if (p.coef[i] >= 0)
            os << "+";
        os << p.coef[i] << "x^" << i;
    }
    return os;
}

float Polynomial::operator()(float const x){
    float res = coef[0];
    float xx = x;
    for (int i = 1; i < deg; i++){
        res = res + (coef[i] * xx);
        xx = xx * x;
    }
    return res;
}

float Polynomial::operator[](int const i){
    return coef[i];
}

bool Polynomial::operator==(Polynomial const& p){
    if (deg != p.deg)
        return 0;
    for (int  i = 0; i < deg; i++) 
        if (coef[i] != p.coef[i]) 
            return 0;
    return 1;
}

bool Polynomial::operator!=(Polynomial const& p){
    return !(*this == p);
}

Polynomial Polynomial::operator+(Polynomial const& p) const{
    if (deg >= p.deg){
        Polynomial* res = new Polynomial(deg);
        for (int  i = 0; i < p.deg; i++)
            res->coef[i] = coef[i] + p.coef[i]; 
        for (int  i = p.deg; i < deg; i++)
            res->coef[i] = coef[i];
        return *res;
    }
    else{
        Polynomial *res = new Polynomial(p.deg);
        for (int  i = 0; i < deg; i++)
            res->coef[i] = coef[i] + p.coef[i];
        for (int  i = deg; i < p.deg; i++)
            res->coef[i] = p.coef[i];
        return *res;
    }
}

Polynomial Polynomial::operator+(float const c) const{
    
    Polynomial res(deg);
    res.coef[0] = coef[0] + c;
    for (int  i = 1; i < deg; i++)
        res.coef[i] = coef[i];
    return res;
}

Polynomial operator+( float const c,  Polynomial const& p){
    return p + c;
}

Polynomial& Polynomial::operator++(){
    ++coef[0];
    return *this;
}

Polynomial Polynomial::operator++(int i){
    Polynomial res(deg,coef);
    ++(*this);
    return res;
}

Polynomial Polynomial::operator*(float const c) const{
    Polynomial res(deg);
    for (int  i = 0; i < deg; i++){
        res.coef[i] = coef[i] * c;
    }
    return res;
}

Polynomial& Polynomial::operator+=(Polynomial const& p){ 
    if (deg >= p.deg){
        for (int  i = 0; i < p.deg; i++)
            coef[i] = coef[i] + p.coef[i];
    }
    else{
        Polynomial pre(*this);
        deg = p.deg;
        delete [] coef;
        coef = new float[deg];
        for (int  i = 0; i < pre.deg; i++)
            coef[i] = pre.coef[i] + p.coef[i];
        for (int  i = pre.deg; i < p.deg; i++)
            coef[i] = p.coef[i];        
    }
    return *this;
}
