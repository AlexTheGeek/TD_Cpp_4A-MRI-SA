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

    bool operator==(const Polynomial&);
    bool operator!=(const Polynomial&);

    friend ostream & operator<<(ostream&, const Polynomial&);

};
#endif
