#ifndef KUVARI_HPP_INCLUDED
#define KUVARI_HPP_INCLUDED

#include "zaposleni.hpp"

class Kuvari:public Zaposleni{
private:
    int brojkuvara;
public:
    void setBrojKuvara(int bk){brojkuvara=bk; }
    void setIme(DinString i){ime=i; }
    void setPrezime(DinString p){prezime=p; }
    void setBrojTelefona(DinString bt){brojtelefona=bt; }
    void setZanimanje(Radnomesto rm=kuvar){zanimanje=rm; }

    int getBrojKuvara(){return brojkuvara; }
    DinString getIme(){return ime; }
    DinString getPrezime(){return prezime; }
    DinString getBrojTelefona(){return brojtelefona; }
    Radnomesto getZanimanje(){return zanimanje; }

};


#endif // KUVARI_HPP_INCLUDED
