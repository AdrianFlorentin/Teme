//
// Created by Cenars on 09.01.2021.
//
#include <iostream>
#include "Cumparator.h"
#include "Revista.h"
#include "Carte.h"
#include "Articol.h"


cumparator::cumparator(const std::string &numePrenume, int varsta)
        : nume_prenume(numePrenume), varsta(varsta) {}

std::ostream &operator<<(std::ostream &os, const cumparator &cumparator) {

    os << "nume_prenume: " << cumparator.nume_prenume << " varsta: " << cumparator.varsta;
   os<<"\n Cosul de Cumparaturi contine: ";
    for(int i=0;i<cumparator.cos_cumparaturi.size();i++)
   {
       os<< cumparator.cos_cumparaturi[i];
   }
    std::cout<<"\n";
    return os;
}
void cumparator::cumpara(carte &a)
{
    cos_cumparaturi.push_back(a);
}
void cumparator::cumpara(revista &b)
{   if ( varsta>b.getLimitaDeVarsta())
    {cos_cumparatura.push_back(b);}
else

    std::cout<<nume_prenume<<" nu indepliniste conditiile de varsta pentru a cumpara aceasta revista \n";
}