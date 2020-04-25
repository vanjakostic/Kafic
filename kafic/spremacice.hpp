#ifndef SPREMACICE_HPP_INCLUDED
#define SPREMACICE_HPP_INCLUDED

#include "zaposleni.hpp"

class Spremacice:public Zaposleni{
private:
    int brojspremacica;
public:
    void setBrojSpremacica(int bs){brojspremacica=bs; }
    void setIme(DinString i){ime=i; }
    void setPrezime(DinString p){prezime=p; }
    void setBrojTelefona(DinString bt){brojtelefona=bt; }
    void setZanimanje(Radnomesto rm=spremacica){zanimanje=rm; }

    int getBrojSpremacica(){return brojspremacica; }
    DinString getIme(){return ime; }
    DinString getPrezime(){return prezime; }
    DinString getBrojTelefona(){return brojtelefona; }
    Radnomesto getZanimanje(){return zanimanje; }

};


#endif // SPREMACICE_HPP_INCLUDED
