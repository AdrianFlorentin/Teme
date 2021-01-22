#include <iostream>
#include "Articol.h"
#include "Carte.h"
#include "Cumparator.h"
#include "Revista.h"
#include "Angajat.h"
int main()
{
 angajat A("Chelu","Mihai","Casier",1000);
 angajat B("Vaidos","Fabian","Manager",3000);
 angajat C("Radu","Florentin","Sef Magazin",4000);
 carte d("Cei 3 cai de la rasarit",20,"Animale","Dragoiu Bogdan",true,"Medie");
 revista e("Nopti fierbinti",100,"Playboy","Notforkids",18,true);
 revista f("Game Night", 15,"Jocuri","Nexus",13,false);
 cumparator g("Buiciuc Ana",20);
 cumparator h("Avram Ioana", 13);
 revista i("Carte de colorat",5,"Copii","Forkids",3,false);
 carte j("Inima de piatra",30,"Fantezie","Ben Brode",true,"Mare");
g.cumpara(e);
g.cumpara(f);
std::cout<<g;

g.pret_total(); // fiecare carte costa 10 lei;

    revista anime("Naruto",300,"Anime","Manga",18,false);
    articol &ar = anime;
    ar.afisare();          //functie virtuala;


    return 0;
}
