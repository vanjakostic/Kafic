#ifndef PROIZVODI_HPP_INCLUDED
#define PROIZVODI_HPP_INCLUDED

#include "dinstring.hpp"

class Proizvodi{
protected:

    DinString naziv;
    double cena;
    double kalorije;

public:

    Proizvodi(){naziv="nije unet"; cena=150; kalorije=0; }
    Proizvodi(DinString n, double c, double k){naziv=n; cena=c; kalorije=k; }
    Proizvodi(const Proizvodi &p){naziv=p.naziv; cena=p.cena; kalorije=p.kalorije; }

     void setNaziv(DinString n){naziv=n; }
     void setCena(double c){cena=c; }
     void setKalorije(double k){kalorije=k; }

     DinString getNaziv(){return naziv; }
    double getCena(){return cena; }
     double getKalorije(){return kalorije;}
};



#endif // PROIZVODI_HPP_INCLUDED
