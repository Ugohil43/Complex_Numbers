#ifndef MYCOMPLEX_H
#define MYCOMPLEX_H

class MyComplex
{
public:
    double Real,Imag;
    MyComplex(double Re = 0, double Im = 0) : Real(Re), Imag(Im) {}
    ~MyComplex();

    MyComplex operator+(const MyComplex & MC)const;
    MyComplex operator-(const MyComplex & MC)const;
    MyComplex operator*(const MyComplex & MC)const;

    void print();
};

#endif