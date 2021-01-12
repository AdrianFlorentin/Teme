

#include "Carte.h"


carte::carte(const std::string &titlu, int pret, const std::string &categorie, const std::string &autor, bool poze,
             const std::string &marime) : articol(titlu, pret, categorie), autor(autor), poze(poze), marime(marime) {}

std::ostream &operator<<(std::ostream &os, const carte &carte) {
    os << static_cast<const articol &>(carte) << " autor: " << carte.autor << " poze: " << carte.poze << " marime: "
       << carte.marime;
    return os;
}
