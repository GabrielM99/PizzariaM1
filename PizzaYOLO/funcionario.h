#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include "pessoa.h"
enum Cargos {Gerente, Cozinheiro, Entregador, Garcon, Balconista, Zelador};

class Funcionario: public Pessoa
{
private:
    float salario;
    Cargos cargo;
public:
    Funcionario();
    Funcionario(float salario, Cargos cargo, int id, const string &nome, const string &dataNasc, const string &contato, const string &cpf, const string &endereco);

    float getSalario() const;
    void setSalario(const float &value);
    Cargos getCargo() const;
    void setCargo(const Cargos &value);
    void imprimir();
};

#endif // FUNCIONARIO_H
