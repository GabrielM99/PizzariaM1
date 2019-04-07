#include "bebida.h"

int Bebida::getTamanho() const
{
    return tamanho;
}

void Bebida::setTamanho(const int &value){
    tamanho = value;
}

string Bebida::getSabor() const
{
    return sabor;
}

void Bebida::setsabor(const string &value){
    sabor = value;
}

string Bebida::getMarca() const
{
    return marca;
}

void Bebida::setMarca(const string &value){
    marca = value;
}

void Bebida::imprimir()
{
    cout<<"\n Tamanho:\t"<<this->getTamanho();
    cout<<"\n Sabor:\t"<<this->getSabor();
    cout<<"\n Marca:\t"<<this->getMarca();
}

void imprimir();

Bebida::Bebida()
{

}

Bebida::Bebida(int tamanho, const string &sabor, const string &marca, int id, float preco, float desconto)
    :Item (id, preco, desconto), tamanho(tamanho), sabor(sabor), marca(marca)
{

}
