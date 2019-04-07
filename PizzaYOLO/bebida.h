#ifndef BEBIDA_H
#define BEBIDA_H
#include "item.h"

class Bebida:public Item
{
private:
    int tamanho;
    string sabor;
    string marca;
public:
    Bebida();
    Bebida(int tamanho, const string &sabor, const string &marca, int id, float preco, float desconto);

    int getTamanho() const;
    void setTamanho(const int &value);
    string getSabor() const;
    void setsabor(const string &value);
    string getMarca() const;
    void setMarca(const string &value);
    virtual void imprimir();
};

#endif // BEBIDA_H
