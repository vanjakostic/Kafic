#ifndef PROIZVODI_HPP_INCLUDED
#define PROIZVODI_HPP_INCLUDED

#include "dinstring.hpp"

class Proizvodi{
protected:

    DinString naziv;
    int cena;
    int kalorije;

public:

    Proizvodi(){naziv="nije unet"; cena=150; kalorije=0; }
    Proizvodi(DinString n, int c, int k){naziv=n; cena=c; kalorije=k; }
    Proizvodi(const Proizvodi &p){naziv=p.naziv; cena=p.cena; kalorije=p.kalorije; }

     void setNaziv(DinString n){naziv=n; }
     void setCena(int c){cena=c; }
     void setKalorije(int k){kalorije=k; }

     DinString getNaziv(){return naziv; }
    int getCena(){return cena; }
     int getKalorije(){return kalorije;}





};



#endif // PROIZVODI_HPP_INCLUDED
