//
// Created by Cenars on 09.01.2021.
//

#include "Angajat.h"

angajat::angajat(const std::string &nume, const std::string &prenume, const std::string &functie, int salariu) : nume(
        nume), prenume(prenume), functie(functie), salariu(salariu) {}

std::ostream &operator<<(std::ostream &os, const angajat &angajat) {
    os << "nume: " << angajat.nume << " prenume: " << angajat.prenume << " functie: " << angajat.functie << " salariu: "
       << angajat.salariu;
    return os;
}
