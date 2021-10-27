
#ifndef Polynomial_H
#define Polynomial_H
#include <iostream>

using namespace std;

class Polynomial{
protected:
	int deg;
	float* coef;
public:
    Polynomial();
	Polynomial(int, float*);
    Polynomial(int);
    Polynomial(const Polynomial&);

	virtual ~Polynomial();
   
    Polynomial& operator=(const Polynomial&);
    
    friend ostream & operator<<(ostream& os, const Polynomial& p);
    
    bool operator==(Polynomial const&);
    bool operator!=(Polynomial const&);
    
    float operator()(float const);
    float operator[](int const);
    
    Polynomial operator+(Polynomial const&) const;
    Polynomial operator+(float) const;
    friend Polynomial operator+(float const,  Polynomial const&);
    Polynomial& operator++();
    Polynomial operator++(int);
    
    Polynomial& operator+=(Polynomial const&);   
    Polynomial operator*(float const) const;
    //     friend Polynomial operator*(float const, Polynomial const&);
    //     Polynomial operator*(Polynomial const&) const;
    
};
#endif
