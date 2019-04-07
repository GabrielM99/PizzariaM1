#ifndef ITEM_H
#define ITEM_H

#include <iostream>
using namespace std;
class Item
{
private:
    int id;
    float preco;
    float desconto;

public:
    Item();
    Item(int id, float preco, float desconto);
    int getID() const;
    void setID(const int &value);
    float getPreco() const;
    void setPreco(const float &value);
    float getDesconto() const;
    void setDesconto(const float &value);
    virtual void imprimir();
};

#endif // ITEM_H
