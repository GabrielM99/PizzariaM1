#include "pizza.h"

TamanhosPizza Pizza::getTamanho() const
{
    return tamanho;
}

void Pizza::setTamanho(const TamanhosPizza &value)
{
    tamanho = value;
}

int Pizza::getQTDSabotes() const
{
    return qtdSabores;
}

void Pizza::setQTDSabores(const int &value)
{
    qtdSabores = value;
}

SaboresPizza Pizza::getSaborP() const
{
    return saborP;
}

void Pizza::setSaborP(const SaboresPizza &value)
{
    saborP = value;
}

void Pizza::imprimir()
{
    cout<<"\n Tamanho:\t"<<this->getTamanho();
    cout<<"\n Quantidade de Sabores:\t"<<this->getQTDSabotes();
    cout<<"\n Sabor de pizza:\t"<<this->getSaborP();
    cout<<"\n Sabor de borda:\t"<<this->getSaborB();
    cout<<"\n ID:\t"<<this->getID();
    cout<<"\n Preco:\t"<<this->getPreco();
    cout<<"\n Desconto:\t"<<this->getDesconto();
}

void imprimir();

Pizza::Pizza()
{

}

Pizza::Pizza(TamanhosPizza tamanho, int qtdSabores, SaboresPizza saborP, SaboresBorda saborB, int id, float preco, float desconto)
    :Borda(saborB), Item(id, preco, desconto), tamanho(tamanho), qtdSabores(qtdSabores), saborP(saborP)
{

}
