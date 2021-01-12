//
// Created by Cenars on 09.01.2021.
//

#ifndef PROIECTE_IN_CLION_CUMPARATOR_H
#define PROIECTE_IN_CLION_CUMPARATOR_H

#include <iostream>
#include <string>
#include <vector>
#include "Articol.h"
#include "Carte.h"
#include "Revista.h"

class cumparator {
protected:
    std::string nume_prenume;
    int varsta;
    std::vector<carte> cos_cumparaturi;
    std::vector<revista> cos_cumparatura;
public:
    cumparator(const std::string &numePrenume, int varsta);

    friend std::ostream &operator<<(std::ostream &os, const cumparator &cumparator);

    void cumpara(carte &a);

    void cumpara(revista &b);

    void pret_total() {
        int i;
        for (i = 0; i < cos_cumparatura.size(); i++) {
            std::cout << i + 1 << ":" << cos_cumparatura[i].getEditura() << std::endl;
        }
        std::cout << "Pret total:" << cos_cumparatura.size() * 10 << " lei" << std::endl;
    }
};

#endif //PROIECTE_IN_CLION_CUMPARATOR_H
