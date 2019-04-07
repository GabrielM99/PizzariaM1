#include "item.h"

int Item::getID() const
{
    return id;
}

void Item::setID(const int &value){
    id = value;
}

float Item::getPreco() const
{
    return preco;
}

void Item::setPreco(const float &value){
    preco = value;
}

float Item::getDesconto() const
{
    return desconto;
}

void Item::setDesconto(const float &value){
    desconto = value;
}

void Item::imprimir()
{
    cout<<"\n ID:\t"<<this->getID();
    cout<<"\n Preco:\t"<<this->getPreco();
    cout<<"\n Desconto:\t"<<this->getDesconto();
}

void imprimir();

Item::Item()
{

}

Item::Item (int id, float preco, float desconto)
    :id(id), preco(preco), desconto(desconto)
{

}
