#include "funcionario.h"

float Funcionario::getSalario() const
{
    return salario;
}

void Funcionario::setSalario(const float &value){
    salario = value;
}

Cargos Funcionario::getCargo() const
{
    return cargo;
}

void Funcionario::setCargo(const Cargos &value){
    cargo = value;
}

void Funcionario::imprimir()
{
    cout<<"\n ID:\t"<<this->getID();
    cout<<"\n Nome:\t"<<this->getNome();
    cout<<"\n Data de Nascimento:\t"<<this->getDataNasc();
    cout<<"\n Contato:\t"<<this->getContato();
    cout<<"\n CPF:\t"<<this->getCPF();
    cout<<"\n Endereco:\t"<<this->getEndereco();
    cout<<"\n Salario:\t"<<this->getSalario();
    cout<<"\n Cargo:\t"<<this->getCargo();
}

void imprimir();

Funcionario::Funcionario()
{

}

Funcionario::Funcionario(float salario, Cargos cargo,int id, const string &nome, const string &dataNasc, const string &contato, const string &cpf, const string &endereco)
    : Pessoa(id, nome, dataNasc, contato, cpf, endereco), salario(salario), cargo(cargo)
{

}
