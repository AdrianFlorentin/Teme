//
// Created by Cenars on 09.01.2021.
//

#include "Revista.h"

revista::revista(const std::string &titlu, int pret, const std::string &categorie, const std::string &editura,
                 int limitaDeVarsta, bool integrame) : articol(titlu, pret, categorie), editura(editura),
                                                       limita_de_varsta(limitaDeVarsta), integrame(integrame) {}

std::ostream &operator<<(std::ostream &os, const revista &revista) {
    os << static_cast<const articol &>(revista) << " editura: " << revista.editura << " limita_de_varsta: "
       << revista.limita_de_varsta << " integrame: " << revista.integrame;
    return os;
}

int revista::getLimitaDeVarsta() const {
    return limita_de_varsta;
}
