#ifndef BORDA_H
#define BORDA_H
#include <iostream>
using namespace std;

enum SaboresBorda {SemSabor, Requeijao, Cheddar, Catupiry, Chocolate, ChocolateBranco, CremeAvela, Ovomaltine};

class Borda
{
private:
    SaboresBorda saborB;
public:
    Borda();
    Borda(SaboresBorda saborB);
    SaboresBorda getSaborB() const;
    void setSaborB(const SaboresBorda &value);
    virtual void imprimir();
};

#endif // BORDA_H
