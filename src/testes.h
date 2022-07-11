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

#endif