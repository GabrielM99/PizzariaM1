#include "pessoa.h"

int Pessoa::getID() const
{
    return id;
}

void Pessoa::setID(const int &value){
    id = value;
}

string Pessoa::getNome() const
{
    return nome;
}

void Pessoa::setNome(const string &value){
    nome = value;
}

string Pessoa::getDataNasc() const
{
    return dataNasc;
}

void Pessoa::setDataNasc(const string &value){
    dataNasc = value;
}
string Pessoa::getContato() const
{
    return contato;
}

void Pessoa::setContato(const string &value){
    contato = value;
}

string Pessoa::getCPF() const
{
    return cpf;
}

void Pessoa::setCPF(const string &value){
    cpf = value;
}
string Pessoa::getEndereco() const
{
    return endereco;
}

void Pessoa::setEndereco(const string &value){
    endereco = value;
}

void Pessoa::imprimir()
{
    cout<<"\n ID:\t"<<this->getID();
    cout<<"\n Nome:\t"<<this->getNome();
    cout<<"\n Data de Nascimento:\t"<<this->getDataNasc();
    cout<<"\n Contato:\t"<<this->getContato();
    cout<<"\n CPF:\t"<<this->getCPF();
    cout<<"\n Endereco:\t"<<this->getEndereco();
}

void imprimir();


Pessoa::Pessoa()
{

}
Pessoa::Pessoa(int id, const string &nome, const string &dataNasc, const string &contato, const string &cpf, const string &endereco)
    : id(id), nome(nome), dataNasc(dataNasc), contato(contato), cpf(cpf), endereco(endereco)
{


}
