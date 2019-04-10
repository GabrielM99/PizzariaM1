#ifndef CUPOMDESCONTO_H
#define CUPOMDESCONTO_H
#include <iostream>
using namespace std;

enum CupomTipo {Comida, Bebida, Todos};
enum CupomAspecto {Absoluto, Relativo};

class CupomDesconto
{
private:
    int id;
    CupomTipo tipo;
    CupomAspecto aspecto;
    float desconto;

public:
    CupomDesconto();
    CupomDesconto(int id, CupomTipo tipo, CupomAspecto aspecto, float desconto);
    int getID() const;
    void setID(const int &value);
    CupomTipo getTipo() const;
    void setTipo(const CupomTipo &value);
    CupomAspecto getAspecto() const;
    void setAspecto(const CupomAspecto &value);
    float getDesconto() const;
    void setDesconto(const float &value);
    virtual void imprimir ();
};

#endif // CUPOMDESCONTO_H
