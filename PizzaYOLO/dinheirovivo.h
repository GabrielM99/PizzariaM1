#ifndef DINHEIROVIVO_H
#define DINHEIROVIVO_H
#include <iostream>
using namespace std;

class DinheiroVivo
{
private:
    float desconto;
public:
    DinheiroVivo();
    DinheiroVivo(float desconto);
    float getDesconto() const;
    void setDesconto(const float &value);
    virtual void imprimir();
};

#endif // DINHEIROVIVO_H
