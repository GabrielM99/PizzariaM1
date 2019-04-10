#include <QCoreApplication>
#include "listaitem.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    ListaItem *lista = new ListaItem();

    return a.exec();
}
