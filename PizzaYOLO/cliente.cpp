#include "cliente.h"

Cliente::Cliente()
{

}

void Cliente::registraCupom(CupomDesconto *cupom){
    this->listaCupom.append(cupom);
}


void Cliente::imprimeCupom(){
    for(CupomDesconto *cupom : listaCupom){
        cout << cupom->getID() << endl;
        cout << cupom->getTipo() << endl;
        cout << cupom->getAspecto() << endl;
        cout << cupom->getDesconto() << endl;
    }
}

CupomDesconto* Cliente::getCupom(int id){
    return listaCupom.at(id);
}

void Cliente::removeCupom(int id){
    listaCupom.removeAt(id);
}
