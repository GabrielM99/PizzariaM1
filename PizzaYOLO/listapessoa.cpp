#include "listapessoa.h"

ListaPessoa::ListaPessoa()
{

}

void ListaPessoa::registraPessoa(Pessoa *pessoa){
    this->listaPessoas.append(pessoa);
}


void ListaPessoa::imprimeLista(){
    for(Pessoa *pessoa : listaPessoas){
        cout << pessoa->getID() << endl;
        cout << pessoa->getNome() << endl;
        cout << pessoa->getDataNasc() << endl;
        cout << pessoa->getContato() << endl;
        cout << pessoa->getCPF() << endl;
        cout << pessoa->getEndereco() << endl;
    }
}

Pessoa* ListaPessoa::getPessoa(int id){
    return listaPessoas.at(id);
}

void ListaPessoa::removePessoa(int id){
    listaPessoas.removeAt(id);
}
