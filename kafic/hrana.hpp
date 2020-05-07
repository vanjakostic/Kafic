#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED

#include "proizvodi.hpp"

enum Serviranjehrane {tanjir, mali_tanjir, kornet, cinija};

class Hrana : public Proizvodi{
protected:
    Serviranjehrane posuda;

public:

    Hrana(){naziv="nije unet"; cena=150; kalorije=0; posuda=mali_tanjir; }
    Hrana(DinString n,int c,int k,Serviranjehrane p){naziv=n; cena=c; kalorije=k; posuda=p; }
    Hrana(const Hrana &h){naziv=h.naziv; cena=h.cena; kalorije=h.kalorije; posuda=h.posuda; }


    void setPosuda(Serviranjehrane sh){posuda=sh; }
    Serviranjehrane getPosuda(){return posuda; }


};


#endif // HRANA_HPP_INCLUDED
