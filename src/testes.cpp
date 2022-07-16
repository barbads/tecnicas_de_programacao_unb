#include "testes.h"

void TUNome::setup() {
    nome = new Nome();
    error = false;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso() {
    try {
        nome->setNome(NOME_VALIDO);
        if (nome->getNome() != NOME_VALIDO) {
           error = true;
        }
    } catch(invalid_argument &excecao) {
        error = true;
    } 
}

void TUNome::testarCenarioFalha() {
    try {
        nome->setNome(NOME_INVALIDO);
        error = true;
    } catch (invalid_argument &excecao) {
        if (nome->getNome() != NOME_INVALIDO) {
            error = false;
        }
    }
}

bool TUNome::run() {
    setup();
    cout << "TESTE SETUP --- ERROR = " << boolalpha << error << endl;
    testarCenarioSucesso();
    cout << "TESTE CENARIO SUCESSO --- ERROR = " << boolalpha <<error << endl;
    testarCenarioFalha();
    cout << "TESTE CENARIO FALHA --- ERROR = " << boolalpha << error << endl;
    tearDown();
    cout << "TESTE TEARDOWN --- ERROR = " << boolalpha << error << endl;
    return error;
}