#ifndef LISTAPESSOA_H
#define LISTAPESSOA_H
#include <QCoreApplication>
#include "pessoa.h"


class ListaPessoa: private Pessoa
{   
private:
    QList <Pessoa*> listaPessoas;

public:
    ListaPessoa();
    void registraPessoa(Pessoa *pessoa);
    void imprimeLista();
    Pessoa* getPessoa(int id);
    void removePessoa(int id);
};

#endif // LISTAPESSOA_H
