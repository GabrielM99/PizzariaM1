#include "dinheirovivo.h"

float DinheiroVivo::getDesconto() const
{
    return desconto;
}

void DinheiroVivo::setDesconto(const float &value){
    desconto = value;
}

void DinheiroVivo::imprimir()
{
    cout<<"\n Desconto:\t"<<this->getDesconto();
}

void imprimir();

DinheiroVivo::DinheiroVivo()
{

}

DinheiroVivo::DinheiroVivo(float desconto)
    :desconto(desconto)
{

}
