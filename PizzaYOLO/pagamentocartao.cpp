#include "pagamentocartao.h"

string PagamentoCartao::getNumCartao() const
{
    return numCartao;
}

void PagamentoCartao::setNumeroCartao(const string &value)
{
    numCartao = value;
}

int PagamentoCartao::getCodigoCartao() const
{
    return codigoCartao;
}

void PagamentoCartao::setCodigoCartao(const int &value){
    codigoCartao = value;
}

int PagamentoCartao::getSenhaCartao() const
{
    return senhaCartao;
}

void PagamentoCartao::setSenhaCartao(const int &value){
    senhaCartao = value;
}

int PagamentoCartao::getNumParcelas() const
{
    return numParcelas;
}

void PagamentoCartao::setNumParcelas(const int &value){
    numParcelas = value;
}

float PagamentoCartao::getValorParcelas() const
{
    return valorParcelas;
}

void PagamentoCartao::setValorParcelas(const float &value){
   valorParcelas = value;
}

float PagamentoCartao::getValorJuros() const
{
    return valorJuros;
}

void PagamentoCartao::setValorJuros(const float &value){
   valorJuros = value;
}

TipoCartao PagamentoCartao::getTipoC() const
{
    return tipoC;
}

void PagamentoCartao::setTipoC(const TipoCartao &value){
    tipoC = value;
}

void PagamentoCartao::imprimir()
{
    cout<<"\n Numero Cartao:\t"<<this->getNumCartao();
    cout<<"\n Codigo Cartao:\t"<<this->getCodigoCartao();
    cout<<"\n Senha Cartao:\t"<<this->getSenhaCartao();
    cout<<"\n Numero Parcelas:\t"<<this->getNumParcelas();
    cout<<"\n Valor Parcelas:\t"<<this->getValorParcelas();
    cout<<"\n Valor Juros:\t"<<this->getValorJuros();
    cout<<"\n Tipo Cartao:\t"<<this->getTipoC();
}

void imprimir();


PagamentoCartao::PagamentoCartao()
{

}
PagamentoCartao::PagamentoCartao(const string &numCartao, int codigoCartao, int senhaCartao, int numParcelas, float valorParcelas, float valorJuros, TipoCartao tipoC)
    :numCartao(numCartao), codigoCartao(codigoCartao), senhaCartao(senhaCartao), numParcelas(numParcelas), valorParcelas(valorParcelas), valorJuros(valorJuros), tipoC(tipoC)
{

}
