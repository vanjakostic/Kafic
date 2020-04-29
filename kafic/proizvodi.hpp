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

    virtual void setNaziv(DinString n)=0;
    virtual void setCena(int c)=0;
    virtual void setKalorije(int k)=0;

    virtual DinString getNaziv()const{};
    virtual int getCena()const{};
    virtual int getKalorije()const{};




};



#endif // PROIZVODI_HPP_INCLUDED
