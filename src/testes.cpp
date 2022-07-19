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

void TUCodigo::setup() {
    codigo = new Codigo();
    error = false;
}

void TUCodigo::tearDown(){
    delete codigo;
}

void TUCodigo::testarCenarioSucesso() {
    try {
        codigo->setCodigo(CODIGO_VALIDO);
        if (codigo->getCodigo() != CODIGO_VALIDO) {
           error = true;
        }
    } catch(invalid_argument &excecao) {
        error = true;
    } 
}

void TUCodigo::testarCenarioFalha() {
    try {
        codigo->setCodigo(CODIGO_INVALIDO);
        error = true;
    } catch (invalid_argument &excecao) {
        if (codigo->getCodigo() != CODIGO_INVALIDO) {
            error = false;
        }
    }
}

bool TUNome::run() {
    setup();
    cout << "TESTE SETUP NOME --- ERROR = " << boolalpha << error << endl;
    testarCenarioSucesso();
    cout << "TESTE CENARIO SUCESSO NOME --- ERROR = " << boolalpha <<error << endl;
    testarCenarioFalha();
    cout << "TESTE CENARIO FALHA NOME --- ERROR = " << boolalpha << error << endl;
    tearDown();
    cout << "TESTE TEARDOWN NOME --- ERROR = " << boolalpha << error << endl;
    return error;
}

bool TUCodigo::run() {
    setup();
    cout << "TESTE SETUP CODIGO --- ERROR = " << boolalpha << error << endl;
    testarCenarioSucesso();
    cout << "TESTE CENARIO SUCESSO CODIGO --- ERROR = " << boolalpha <<error << endl;
    testarCenarioFalha();
    cout << "TESTE CENARIO FALHA CODIGO --- ERROR = " << boolalpha << error << endl;
    tearDown();
    cout << "TESTE TEARDOWN -CODIGO -- ERROR = " << boolalpha << error << endl;
    return error;
}