#ifndef TESTES_H_INCLUDED
#define TESTES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <string>
#include <iostream>

using namespace std;

class TUNome {
private:
    const string NOME_VALIDO = "Matheus Barbosa";       
    const string NOME_INVALIDO = "MATHEUS BARBOSA";
    Nome *nome;
    bool error;
    void setup();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    bool run();
};

class TUCodigo {
private:
    const string CODIGO_VALIDO = "79927398713";
    const string CODIGO_INVALIDO = "79927398710";
    Codigo *codigo;
    bool error;
    void setup();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();
public:
    bool run();
};

#endif