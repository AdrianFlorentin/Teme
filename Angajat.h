//
// Created by Cenars on 09.01.2021.
//

#ifndef PROIECTE_IN_CLION_ANGAJAT_H
#define PROIECTE_IN_CLION_ANGAJAT_H
#include <iostream>
#include <string>
class angajat
{
protected:
    std::string nume;
  std::string prenume;
  std::string functie;
  int salariu;
public:
    angajat(const std::string &nume, const std::string &prenume, const std::string &functie, int salariu);

    friend std::ostream &operator<<(std::ostream &os, const angajat &angajat);
};
#endif //PROIECTE_IN_CLION_ANGAJAT_H
