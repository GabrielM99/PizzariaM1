#ifndef PIZZA_H
#define PIZZA_H
#include "item.h"
#include "borda.h"

enum TamanhosPizza {Pequena, Media, Grande, Familia, Gigante};
enum SaboresPizza{Calabresa, QuatroQueijos, Marquerita, Mussarela, AlhoOlho};

class Pizza: public  Borda, public Item
{
private:
    TamanhosPizza tamanho;
    int qtdSabores;
    SaboresPizza saborP;
    Borda borda;

public:
    Pizza();
    Pizza(TamanhosPizza tamanho, int qtdSabores, SaboresPizza saborP, SaboresBorda saborB, int id, float preco, float desconto);

    TamanhosPizza getTamanho() const;
    void setTamanho(const TamanhosPizza &value);
    int getQTDSabotes() const;
    void setQTDSabores(const int &value);
    SaboresPizza getSaborP()const;
    void setSaborP(const SaboresPizza &value);
    void imprimir();
};

#endif // PIZZA_H
