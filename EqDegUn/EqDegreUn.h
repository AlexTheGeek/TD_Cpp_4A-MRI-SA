
#ifndef EQDEGREUN_H
#define EQDEGREUN_H

class EqDegreUn{
protected:
	float a;
	float b;
	float sol;
	bool solved;
public:
	//Constructeurs
	EqDegreUn(float, float);

	//Destructeur
	virtual ~EqDegreUn();

	// accesseurs
	float getA();
	float getB();
	float getSol();
	bool isSolved();
    
    //mutateurs
	void setA(float);
	void setB(float);
	
	// Méthodes
	float solve();

};
#endif
