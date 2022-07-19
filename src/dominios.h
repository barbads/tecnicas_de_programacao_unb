#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <regex>
#include <stdexcept>
#include <string>

using namespace std;

/**
* @class   Nome
* @brief   Dominio de Nome.
* @detail  O nome deve ser composto por nome e sobrenome, estando separados de um espaco. O tamanho maximo eh de 30.
*/

class Nome {
private:
    static const int MAX_SIZE = 30; // Tamanho maximo da string;
    string pattern = "[A-Z]{1}[a-z]* [A-Z]{1}[a-z]*"; // Expressao regular que valida o formato do Nome
    string nome;
    void validar(string);
public:
    void setNome(string);
    string getNome() const;
};

/**
* @class   Codigo
* @brief   Dominio de Codigo.
* @detail  O codigo deve ser no formato DDDDDDDDDDX, sendo X o digito verificador de acordo com o 
           algoritmo de Luhn
*/


class Codigo {
private:
    static const int SIZE = 11;
    string codigo;
    void validar(string);
public:
    void setCodigo(string);
    string getCodigo();
};

inline string Codigo::getCodigo() {
    return codigo;
}

inline string Nome::getNome() const {
    return nome;
}

#endif