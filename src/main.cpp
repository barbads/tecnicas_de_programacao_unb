/**
* @file         main.cpp
* @brief        Programa roda os testes unitarios para cada dominio. Cada teste foi feito em 'testes.cpp'
* @author       Matheus Barbosa de Miranda
* @include      stdexcept
* @include      iostream
* @include      string
*/

#include <stdexcept>
#include <iostream>
#include <string>
#include "testes.h"
#include "dominios.h"
#include "entidades.h"

using namespace std;

int main() {
    TUNome testeNome;

    if (testeNome.run()) {
        cout << "Teste Unitario do dominio NOME NAO PASSOU. FALHA." << endl;
    } else {
        cout << "Teste Unitario do dominio NOME passou." << endl;
    }


    return 0;
}