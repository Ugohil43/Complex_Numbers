#include <iostream>
#include "MyComplex.h"

MyComplex::~MyComplex()
{
}

MyComplex MyComplex::operator+(const MyComplex &MC) const
{
    return MyComplex(Real + MC.Real, Imag + MC.Imag);
}

MyComplex MyComplex::operator-(const MyComplex &MC) const
{
    return MyComplex(Real - MC.Real, Imag - MC.Imag);
}

MyComplex MyComplex::operator*(const MyComplex &MC) const
{
    return MyComplex(Real * MC.Real - Imag * MC.Imag, Real * MC.Imag + Imag * MC.Real);
}

void MyComplex::print()
{
    std::cout << this->Real << " + " << this->Imag << "i" <<std::endl;
}
