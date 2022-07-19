#include "dominios.h"
#include <regex>
#include <iostream>
#include <exception>
#include <list>

/**
 * @brief Testa se o nome esta dentro do padrao e seu tamanho maximo.
 * 
 */
void Nome::validar(string nome) {
    regex name_pattern(Nome::pattern);
    if (!regex_match(nome, name_pattern)) {
        throw invalid_argument("Formato do nome nao eh valido!");
    } else if ((nome.size() - 1) >= MAX_SIZE ) {
        throw invalid_argument("Nome muito longo!");
    }
}

void Codigo::validar(string codigo) {
/**
 * @brief Testa o tamanho do codigo (deve ser exatamente 11.)
 * 
 */
    if (codigo.size() != SIZE) {
        throw invalid_argument("Tamanho do codigo excede o limite.");
    } 
/**
 * @brief Testa se o digito identificador esta correto.
 * @detail Segue o exemplo de pseudo codigo fornecido em https://en.wikipedia.org/wiki/Luhn_algorithm
 * 
 */
    else {
        int verificador_correto = 0;
        string payload = codigo.substr(0, 9);
        int verificador_usuario = static_cast<int>(codigo.at(10));
        int paridade = (SIZE-2) % 2;  
        for (int i=0; i<10; i++) {
            int numero_atual = static_cast<int>(payload.at(i)); // static_cast faz o casting em tempo de compilacao.
            cout << numero_atual << endl;
            if (i%2 == paridade) {
                if (numero_atual%2 == paridade) {
                    numero_atual = numero_atual*2;
                }
            }
            if (numero_atual > 9) { 
                numero_atual -= 9;
            }
            verificador_correto += numero_atual; 
        }
        verificador_correto = verificador_correto % 10;
        if (verificador_correto != verificador_usuario) {
            throw invalid_argument("Digito verificador invalido.");
        }
    }
}


/**
 * @brief Atributo recebe o nome.
 * @param string nome
 */
void Nome::setNome(string nome) {
    validar(nome);
    this->nome = nome;
}

/**
 * @brief Atributo recebe o codigo.
 * @param string codigo
 */
void Codigo::setCodigo(string codigo) {
    validar(codigo);
    this->codigo = codigo;
}
