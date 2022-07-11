/*
@brief Main class
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