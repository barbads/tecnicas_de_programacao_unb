#ifndef ENTIDADES_H_INCLUDED
#define ENTIDADES_H_INCLUDED

#include "dominios.h"
#include <string>

using namespace std;

class Usuario {
public:
    void setNome(string);
    Nome getNome () const;
};

#endif