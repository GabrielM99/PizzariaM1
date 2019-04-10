#ifndef CLIENTE_H
#define CLIENTE_H
#include <QCoreApplication>
#include "cupomdesconto.h"
#include"listapedido.h"
#include"pessoa.h"



class Cliente: public Pessoa, public ListaPedido, private CupomDesconto
{
private:
     QList <CupomDesconto*> listaCupom;
public:
    Cliente();
    void registraCupom(CupomDesconto *cupom);
    void imprimeCupom();
    CupomDesconto* getCupom(int id);
    void removeCupom(int id);
};

#endif // CLIENTE_H
