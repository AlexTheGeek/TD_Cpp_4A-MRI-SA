#include <iostream>
#include "solve.h"

using namespace std;

EqDegreUn::EqDegreUn(){
    this->a=0;
    this->b=0;
    this->x=0;
    this->s = false;
}

EqDegreUn::EqDegreUn(float m, float n){
    this->a=0;
    this->b=0;
    this->x=0;
    this->s = false;
}
void EqDegreUn::solve(){
    if (!this->getSolve()){
        this->x = -(this->getA()/this->getB());
        this->s = true;
    }
    //else
    //   cout << "nope";
}

bool EqDegreUn::getSolve(){
    return this->s;
}

float EqDegreUn::getSolution(){
    return this->x;
}

float EqDegreUn::getA(){
    return this->a;
}

float EqDegreUn::getB(){
    return this->b;
}


void EqDegreUn::setA(int val){
    a = val;
    this->solve();
}

void EqDegreUn::setB(int val){
    b = val;
    this->solve();
}

EqDegreUn::~EqDegreUn(){

}