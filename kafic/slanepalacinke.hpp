#ifndef SLANEPALACINKE_HPP_INCLUDED
#define SLANEPALACINKE_HPP_INCLUDED

#include "palacinke.hpp"
enum Slane{pica_palacinka,vegetarijanska_palacinka};
enum Slanedodaci{bez_dodatka,sunka,mix_povrca};

class Slanepalacinke:public Palacinke{
private:
    Slane tipslane;
    Slanedodaci dodaci;

public:

    Slanepalacinke(){
        naziv="Palacinka";
        cena=120;
        kalorije=270;
        posuda=tanjir;
        tip=slane;
        stanje=palacinka_se_ispekla;
        tipslane=pica_palacinka;
        dodaci=bez_dodatka;
        }
    Palacinke(DinString n,int c,int k,Serviranjehrane p,Tippalacinki t,Stanjepalacinki sp, Slane ts,Slanedodaci sd){
        naziv=n;
        cena=c;
        kalorije=k;
        posuda=p;
        tip=t;
        stanje=sp;
        tipslane=ts;
        dodaci=sd;
        }
    Slanepalacinke(const Slanepalacinke &sp){
        naziv=sp.naziv;
        cena=sp.cena;
        kalorije=sp.kalorije;
        posuda=sp.posuda;
        tip=sp.tip;
        stanje=sp.stanje;
        tipslane=sp=tipslane;
        dodaci=sp.dodaci;
        }
    void setTip(Slane t){tip=t; }
    void setDodaci(Slanedodaci d){dodaci=d; }

    Slane getTip(){return tip; }
    Slanedodaci getDodaci(){return dodaci; }

    bool Dodajsunku(){
        if(tip==pica_palacinka && stanje==palacinka_se_ispekla){
            dodaci=sunka;
            return true;
        }else
        return false;
    }

    bool Dodajmixpovrca(){
        if(tip==vegetarijanska_palacinka && stanje==palacinka_se_ispekla){
            dodaci=mix_povrca;
            return true;
        }else
        return false;
    }

    bool Uklonidodatak(){
        if(dodaci==sunka || dodaci==mix_povrca){
            dodaci=bez_dodatka;
            return true;
        }else
        return false;
    }


};


#endif // SLANEPALACINKE_HPP_INCLUDED
