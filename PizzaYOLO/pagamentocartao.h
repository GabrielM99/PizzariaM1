#ifndef PAGAMENTOCARTAO_H
#define PAGAMENTOCARTAO_H
#include <iostream>
using namespace std;

enum TipoCartao {Credito, Debito};

class PagamentoCartao
{
private:
    string numCartao;
    int codigoCartao;
    int senhaCartao;
    int numParcelas;
    float valorParcelas;
    float valorJuros;
    TipoCartao tipoC;

public:
    PagamentoCartao();
    PagamentoCartao(const string &numCartao, int codigoCartao, int senhaCartao, int numParcelas, float valorParcelas, float valorJuros, TipoCartao tipoC);

    string getNumCartao() const;
    void setNumeroCartao(const string &value);
    int getCodigoCartao() const;
    void setCodigoCartao(const int &value);
    int getSenhaCartao() const;
    void setSenhaCartao(const int &value);
    int getNumParcelas() const;
    void setNumParcelas(const int &value);
    float getValorParcelas() const;
    void setValorParcelas(const float &value);
    float getValorJuros() const;
    void setValorJuros(const float &value);
    TipoCartao getTipoC() const;
    void setTipoC(const TipoCartao &value);

    virtual void imprimir();
};

#endif // PAGAMENTOCARTAO_H
