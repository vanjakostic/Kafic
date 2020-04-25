#ifndef KONOBARI_HPP_INCLUDED
#define KONOBARI_HPP_INCLUDED

#include "zaposleni.hpp"

class Konobari: public Zaposleni{
private:
    int brojkonobara;

public:
    void setBrojKonobara(int bk){brojkonobara=bk; }
    void setIme(DinString i){ime=i; }
    void setPrezime(DinString p){prezime=p; }
    void setBrojTelefona(DinString bt){brojtelefona=bt; }
    void setZanimanje(Radnomesto rm=konobar){zanimanje=rm; }

    int getBrojKonobara(){return brojkonobara; }
    DinString getIme(){return ime; }
    DinString getPrezime(){return prezime; }
    DinString getBrojTelefona(){return brojtelefona; }
    Radnomesto getZanimanje(){return zanimanje; }

};


#endif // KONOBARI_HPP_INCLUDED
