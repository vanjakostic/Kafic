#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED

#include "dinstring.hpp"

enum Radnomesto {kuvar,konobar,spremacica};

class Zaposleni{
private:
    DinString ime;
    DinString prezime;
    DinString brojtelefona;
    Radnomesto zanimanje;

public:
    Zaposleni(){ime="ime"; prezime="prezime"; brojtelefona="broj"; zanimanje=konobar; }
    Zaposleni(DinString i, DinString p, DinString bt, Radnomesto z){ime=i; prezime=p; brojtelefona=bt; zanimanje=z; }
    Zaposleni(const Zaposleni &z){ime=z.ime; prezime=z.prezime; brojtelefona=z.brojtelefona; zanimanje=z.zanimanje; }

    void setIme (DinString i){ime=i; }
    void setPrezime (DinString p){prezime=p; }
    void setBrojTelefona (DinString bt){brojtelefona=bt; }
    void setZanimanje (Radnomesto rm){zanimanje=rm; }

    DinString getIme()const {return ime;}
    DinString getPrezime()const {return prezime;}
    DinString getBrojTelefona()const {return brojtelefona; }
    Radnomesto getZanimanje()const {return zanimanje; }



};


#endif // ZAPOSLENI_HPP_INCLUDED
