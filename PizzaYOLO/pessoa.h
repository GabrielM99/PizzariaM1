#ifndef PESSOA_H
#define PESSOA_H

#include <iostream>
using namespace std;

class Pessoa
{
private:
    int id;
    string nome;
    string dataNasc;
    string contato;
    string cpf;
    string endereco;
public:
    Pessoa();
    Pessoa(int id, const string &nome, const string &dataNasc, const string &contato, const string &cpf, const string &endereco);

    int getID() const;
    void setID(const int &value);
    string getNome() const;
    void setNome(const string &value);
    string getDataNasc() const;
    void setDataNasc(const string &value);
    string getContato() const;
    void setContato(const string &value);
    string getCPF() const;
    void setCPF(const string &value);
    string getEndereco() const;
    void setEndereco(const string &value);
    virtual void imprimir();
};

#endif // PESSOA_H
