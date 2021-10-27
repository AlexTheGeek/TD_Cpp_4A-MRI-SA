
#include <iostream>
#include <cstdlib>
#include "EqDegreUn.h"
using namespace std;

int main() {

	float a = 3, b = 4;
	EqDegreUn eq(a,b); 
	cout << "test 1 :" << endl;
	cout << "a = " << eq.getA() << endl;
	cout << "b = " << eq.getB() << endl;
	if(eq.isSolved()){
		cout << "sol = " << eq.getSol() << endl;
	}
	eq.solve();
	cout << "test 2 :" << endl;
	cout << "a = " << eq.getA() << endl;
	cout << "b = " << eq.getB() << endl;
	if(eq.isSolved()){
		cout << "sol = " << eq.getSol() << endl;
	}
	eq.setB(1);
	cout << "test 3 :" << endl;
	cout << "a = " << eq.getA() << endl;
	cout << "b = " << eq.getB() << endl;
	if(eq.isSolved()){
		cout << "sol = " << eq.getSol() << endl;
	}
	eq.solve();
	cout << "test 4 :" << endl;
	cout << "a = " << eq.getA() << endl;
	cout << "b = " << eq.getB() << endl;
	if(eq.isSolved()){
		cout << "sol = " << eq.getSol() << endl;
	}
	return 0;
}


