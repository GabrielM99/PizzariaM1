#ifndef LISTAITEM_H
#define LISTAITEM_H
#include <QCoreApplication>

#include "item.h"

class ListaItem : private Item
{
private:
    QList<Item*> listaItens;

public:
    ListaItem();
    void registraItem(Item *item);
    void imprimeLista();
    Item* getItem(int id);
    void removeItem(int id);
};

#endif // LISTAITEM_H
