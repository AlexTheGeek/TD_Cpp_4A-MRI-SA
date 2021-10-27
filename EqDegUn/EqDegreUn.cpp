

#include "EqDegreUn.h"
#include <iostream>

using namespace std;

EqDegreUn::EqDegreUn(float a, float b){
	this->a = a;
	this->b = b;
	this->solved = false;
	this->sol = 0;
}

//Destructeur
EqDegreUn::~EqDegreUn(){

}

// accesseurs
float EqDegreUn::getA() {
	return this->a;
}
float EqDegreUn::getB() {
	return this->b;
}
float EqDegreUn::getSol() {
	if (!this->isSolved())
		this->solve();
	return this->sol;
}
bool EqDegreUn::isSolved() {
	return this->solved;
}

// mutateurs
void EqDegreUn::setA(float a) {
	this->a = a;
	this->solved = false;
}
void EqDegreUn::setB(float b) {
	this->b = b;
	this->solved = false;
}
	
// Méthodes
float EqDegreUn::solve(){
	this->solved = true;
    if (a)
        this->sol = (-b)/a;
	return this->sol;
}
