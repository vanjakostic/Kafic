#ifndef PICE_HPP_INCLUDED
#define PICE_HPP_INCLUDED

#include "proizvodi.hpp"
enum Serviranjepica{solja,casa};

class Pice:public Proizvodi{
protected:
    Serviranjepica posuda;
    double zapremina;

public:

    Pice(){naziv="nije unet"; cena=150; kalorije=0; posuda=solja; zapremina=0.2;  }
    Pice(DinString n,int c,int k,Serviranjepica p,double z){naziv=n; cena=c; kalorije=k; posuda=p; zapremina=z; }
    Pice(const Pice &p){naziv=p.naziv; cena=p.cena; kalorije=p.kalorije; posuda=p.posuda; zapremina=p.zapremina; }

     void setPosuda(Serviranjepica sp){posuda=sp; }
     void setZapremina(double z){zapremina=z; }

     virtual double getZapremina()const =0;
     Serviranjepica getPosuda(){return posuda; }


};



#endif // PICE_HPP_INCLUDED
