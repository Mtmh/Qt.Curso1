#-------------------------------------------------
#
# Project created by QtCreator 2018-03-29T13:14:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = CuentasBancoClientes
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
        main.cpp \
    DuCuenta.cpp \
    DuCliente.cpp \
    MainWindow.cpp \
    AltaClienteform.cpp \
    AltaCuentaform.cpp \
    VerClientesform.cpp \
    VerCuentasform.cpp \
    DuLineEdit.cpp

HEADERS += \
    DuCliente.h \
    DuCuenta.h \
    MainWindow.h \
    AltaClienteform.h \
    AltaCuentaform.h \
    VerClientesform.h \
    VerCuentasform.h \
    DuLineEdit.h \
    Dudefines.h

FORMS += \
    MainWindow.ui \
    AltaClienteform.ui \
    AltaCuentaform.ui \
    VerClientesform.ui \
    VerCuentasform.ui

QMAKE_CXXFLAGS += -std=gnu++17

RESOURCES += \
    res.qrc
