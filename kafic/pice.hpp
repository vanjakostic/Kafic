#ifndef PICE_HPP_INCLUDED
#define PICE_HPP_INCLUDED

#include "proizvodi.hpp"
enum Serviranjepica{solja,casa};

class Pice:public Proizvodi{
protected:
    Serviranjepica posuda;

public:

    Pice(){naziv="nije unet"; cena=150; kalorije=0; posuda=solja; }
    Pice(DinString n,int c,int k,Serviranjepica p){naziv=n; cena=c; kalorije=k; posuda=p; }
    Pice(const Pice &p){naziv=p.naziv; cena=p.cena; kalorije=p.kalorije; posuda=p.posuda; }

     void setPosuda(Serviranjepica sp){posuda=sp; }
     Serviranjepica getPosuda(){return posuda; }
};



#endif // PICE_HPP_INCLUDED
