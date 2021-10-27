#ifndef SOLVE_H
#define SOLVE_H

using namespace std;



class EqDegreUn{
    private:
        float a;// the a in ax+
        float b; //the b in ax+b
        bool s; //solved or not
        float x;
    public:
        EqDegreUn();
        EqDegreUn(float, float);
        void solve();


        //Destructeur
        virtual ~EqDegreUn();


        //accesseurs
        bool getSolve();
        float getA();
        float getB();
        float getSolution();

        //mutateur
        void setA(int);
        void setB(int);


};


#endif