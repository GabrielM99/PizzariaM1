#include "cupomdesconto.h"

int CupomDesconto::getID() const
{
    return id;
}

void CupomDesconto::setID(const int &value){
    id = value;
}

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
    cout<<"\n ID:\t"<<this->getID();
    cout<<"\n Tipo:\t"<<this->getTipo();
    cout<<"\n Aspecto:\t"<<this->getAspecto();
    cout<<"\n Desconto:\t"<<this->getDesconto();
}

void imprimir();



CupomDesconto::CupomDesconto()
{

}

CupomDesconto::CupomDesconto(int id, CupomTipo tipo, CupomAspecto aspecto, float desconto)
    :id(id),tipo(tipo), aspecto(aspecto), desconto(desconto)
{

}

