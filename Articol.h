//
// Created by Cenars on 09.01.2021.
//

#ifndef PROIECTE_IN_CLION_ARTICOL_H
#define PROIECTE_IN_CLION_ARTICOL_H

#include <iostream>
#include <string>

class articol {
protected:
    std::string titlu;
    int pret;
    std::string categorie;

    friend class cumparator;

public:
    virtual const std::string &getTitlu() const;

    articol(const std::string &titlu, int pret, const std::string &categorie);

    friend std::ostream &operator<<(std::ostream &os, const articol &articol);

    int getPret() {
        return pret;
    }
};

#endif //PROIECTE_IN_CLION_ARTICOL_H
