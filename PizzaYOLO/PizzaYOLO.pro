QT += core
QT -= gui

CONFIG += c++11

TARGET = pipipipopopo
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    pessoa.cpp \
    cliente.cpp \
    funcionario.cpp \
    cupomdesconto.cpp \
    listapessoa.cpp \
    pizzaria.cpp \
    listapedido.cpp \
    pedido.cpp \
    listaitem.cpp \
    item.cpp \
    pagamentocartao.cpp \
    dinheirovivo.cpp \
    pizza.cpp \
    bebida.cpp \
    borda.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

HEADERS += \
    pessoa.h \
    cliente.h \
    funcionario.h \
    cupomdesconto.h \
    listapessoa.h \
    pizzaria.h \
    listapedido.h \
    pedido.h \
    listaitem.h \
    item.h \
    pagamentocartao.h \
    dinheirovivo.h \
    pizza.h \
    bebida.h \
    borda.h
