#include <QCoreApplication>
#include <iostream>
#include "listaitem.h"

using namespace std;

ListaItem::ListaItem()
{

}

void ListaItem::registraItem(Item *item){
    this->listaItens.append(item);
}


void ListaItem::imprimeLista(){
    for(Item *item : listaItens){
        cout << item->getID() << endl;
        cout << item->getPreco() << endl;
        cout << item->getDesconto() << endl;
    }
}

Item* ListaItem::getItem(int id){
    return listaItens.at(id);
}

void ListaItem::removeItem(int id){
    listaItens.removeAt(id);
}
