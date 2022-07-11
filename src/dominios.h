#ifndef DOMINIOS_H_INCLUDED
#define DOMINIOS_H_INCLUDED

#include <regex>
#include <stdexcept>
#include <string>

using namespace std;

class Nome {
private:
    static const int MAX_SIZE = 30; // Tamanho maximo da string;
    string pattern = "[A-Z]{1}[a-z]*\ [A-Z]{1}[a-z]*"; // Expressao regular que valida o formato do Nome
    string nome;
    void validar(string);
public:
    void setNome(string);
    string getNome() const;
};

inline string Nome::getNome() const {
    return nome;
}

#endif