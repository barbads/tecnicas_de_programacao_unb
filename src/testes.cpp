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
            error = true;
        }
    }
}

bool TUNome::run() {
    setup();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return error;
}