#include "cupomdesconto.h"

CupomTipo CupomDesconto::getTipo() const
{
    return tipo;
}

void CupomDesconto::setTipo(const CupomTipo &value){
    tipo = value;
}

CupomAspecto CupomDesconto::getAspecto() const
{
    return aspecto;
}

void CupomDesconto::setAspecto(const CupomAspecto &value){
    aspecto = value;
}

float CupomDesconto::getDesconto() const
{
    return desconto;
}

void CupomDesconto::setDesconto(const float &value){
    desconto = value;
}

void CupomDesconto::imprimir()
{
    cout<<"\n Tipo:\t"<<this->getTipo();
    cout<<"\n Aspecto:\t"<<this->getAspecto();
    cout<<"\n Desconto:\t"<<this->getDesconto();
}

void imprimir();



CupomDesconto::CupomDesconto()
{

}

CupomDesconto::CupomDesconto(CupomTipo tipo, CupomAspecto aspecto, float desconto)
    :tipo(tipo), aspecto(aspecto), desconto(desconto)
{

}

