#ifndef SLANEPALACINKE_HPP_INCLUDED
#define SLANEPALACINKE_HPP_INCLUDED

#include "palacinke.hpp"
enum Slane{pica_palacinka,vegetarijanska_palacinka};
enum Slanedodaci{bez_dodatka_slana,sunka,mix_povrca};

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
        dodaci=bez_dodatka_slana;
        }
    Slanepalacinke(DinString n,int c,int k,Serviranjehrane p,Tippalacinki t,Stanjepalacinki sp, Slane ts,Slanedodaci sd){
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
        tipslane=sp.tipslane;
        dodaci=sp.dodaci;
        }
    void setTip(Slane t){tipslane=t; }
    void setDodaci(Slanedodaci d){dodaci=d; }

    Slane getTip(){return tipslane; }
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
            dodaci=bez_dodatka_slana;
            return true;
        }else
        return false;
    }

    friend ostream& operator<<(ostream& out, Slanepalacinke &sp){
        out<<"Tip slane palacinke :"<<sp.tipslane<<endl<<"Dodaci :"<<sp.dodaci<<endl;
        return out;
    }

    /*friend istream& operator>>(istream& in, Slanepalacinke &sp){
        in>>sp.tipslane>>sp.dodaci;
        return in;
    }*/

    Slanepalacinke& operator=(const Slanepalacinke &sp){
        tipslane=sp.tipslane;
        dodaci=sp.dodaci;
    }

    friend bool operator==(Slanepalacinke &sp1, Slanepalacinke &sp2){
        if(sp1.tipslane==sp2.tipslane && sp1.dodaci==sp2.dodaci)
            return true;
        else
            return false;
    }

    friend bool operator!=(Slanepalacinke &sp1, Slanepalacinke &sp2 ){
        if(sp1!=sp2)
            return true;
        else
            return false;
    }



};


#endif // SLANEPALACINKE_HPP_INCLUDED
