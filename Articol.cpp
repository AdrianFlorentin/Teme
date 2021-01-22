//
// Created by Cenars on 09.01.2021.
//

#include "Articol.h"

articol::articol(const std::string &titlu, int pret, const std::string &categorie) : titlu(titlu), pret(pret),
                                                                                     categorie(categorie) {}

std::ostream &operator<<(std::ostream &os, const articol &articol) {
    os << "titlu: " << articol.titlu << " pret: " << articol.pret << " categorie: " << articol.categorie;
    return os;
}

const std::string &articol::getTitlu() const {
    return titlu;
}

