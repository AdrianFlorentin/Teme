//
// Created by Cenars on 09.01.2021.
//

#ifndef PROIECTE_IN_CLION_CARTE_H
#define PROIECTE_IN_CLION_CARTE_H

#include <iostream>
#include "Articol.h"
#include <string>

class carte : private articol {
protected:
    std::string autor;
    bool poze;
    std::string marime;

public:
    carte(const std::string &titlu, int pret, const std::string &categorie, const std::string &autor, bool poze,
          const std::string &marime);

    friend std::ostream &operator<<(std::ostream &os, const carte &carte);
};

#endif //PROIECTE_IN_CLION_CARTE_H
