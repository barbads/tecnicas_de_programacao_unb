#include "dominios.h"
#include <regex>
#include <iostream>
#include <exception>

void Nome::validar(string nome) {
    regex name_pattern(Nome::pattern);
    if (!regex_match(nome, name_pattern)) {
        throw invalid_argument("Formato do nome nao eh valido!");
    } else if ((nome.size() - 1) >= MAX_SIZE ) {
        throw invalid_argument("Nome muito longo!");
    }
}

void Nome::setNome(string nome) {
    validar(nome);
    this->nome = nome;
}
