#include "borda.h"

SaboresBorda Borda::getSaborB() const
{
    return saborB;
}

void Borda::setSaborB(const SaboresBorda &value){
    saborB = value;
}

void Borda::imprimir()
{
    cout<<"\n Sabor de borda:\t"<<this->getSaborB();
}

void imprimir();

Borda::Borda()
{

}

Borda::Borda (SaboresBorda saborB)
    : saborB(saborB)
{

}
