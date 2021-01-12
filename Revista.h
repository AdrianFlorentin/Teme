//
// Created by Cenars on 09.01.2021.
//

#ifndef PROIECTE_IN_CLION_REVISTA_H
#define PROIECTE_IN_CLION_REVISTA_H

#include <iostream>
#include <string>
#include "Articol.h"

class revista : private articol {
protected:
    std::string editura;
    int limita_de_varsta;
    bool integrame;

    friend class cumparator;

public:

    int getLimitaDeVarsta() const;

    revista(const std::string &titlu, int pret, const std::string &categorie, const std::string &editura,
            int limitaDeVarsta, bool integrame);

    friend std::ostream &operator<<(std::ostream &os, const revista &revista);

    std::string getEditura() {
        return editura;
    }
};

#endif //PROIECTE_IN_CLION_REVISTA_H
