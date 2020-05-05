#ifndef SLATKEPALACINKE_HPP_INCLUDED
#define SLATKEPALACINKE_HPP_INCLUDED

#include "palacinke.hpp"

enum Slatke{rafaelo,snikers,mars};
enum Slatkedodaci{bez_dodataka_slatka,kokos,kikiriki,lesnik};

class Slatkepalacinke: public Palacinke{
private:

    Slatke tipslatke;
    Slatkedodaci dodaci;

public:

    Slatkepalacinke(){
        naziv="Palacinka";
        cena=120;
        kalorije=270;
        posuda=tanjir;
        tip=slatke;
        stanje=palacinka_se_ispekla;
        tipslatke=rafaelo;
        dodaci=bez_dodataka_slatka;
        }

    Slatkepalacinke(DinString n,int c,int k,Serviranjehrane p,Tippalacinki t,Stanjepalacinki sp, Slatke ts,Slatkedodaci sd){
        naziv=n;
        cena=c;
        kalorije=k;
        posuda=p;
        tip=t;
        stanje=sp;
        tipslatke=ts;
        dodaci=sd;
        }

    Slatkepalacinke(const Slatkepalacinke &sp){
        naziv=sp.naziv;
        cena=sp.cena;
        kalorije=sp.kalorije;
        posuda=sp.posuda;
        tip=sp.tip;
        stanje=sp.stanje;
        tipslatke=sp.tipslatke;
        dodaci=sp.dodaci;
        }

    void setTip(Slatke t){tipslatke=t; }
    void setDodaci(Slatkedodaci d){dodaci=d; }

    Slatke getTip(){return tipslatke; }
    Slatkedodaci getDodaci(){return dodaci; }

    bool Dodajkokos(){
        if( dodaci==bez_dodataka_slatka && stanje==palacinka_se_ispekla){
            dodaci=kokos;
            return true;
        }else
        return false;
    }

    bool Dodajkikiriki(){
        if(dodaci==bez_dodataka_slatka && stanje==palacinka_se_ispekla){
            dodaci=kikiriki;
            return true;
        }else
        return false;
    }
    bool Dodajlesnik(){
        if(dodaci==bez_dodataka_slatka && stanje==palacinka_se_ispekla){
            dodaci=lesnik;
            return true;
        }else
        return false;
    }

    bool Uklonidodatak(){
        if(dodaci==lesnik || dodaci==kikiriki || dodaci==kokos){
            dodaci=bez_dodataka_slatka;
            return true;
        }else
        return false;
    }

    friend ostream& operator<<(ostream& out, Slatkepalacinke &sp){
        out<<"Tip slatke palacinke :"<<sp.tip<<endl<<"Dodaci :"<<sp.dodaci<<endl;
        return out;
    }

   /* friend istream& operator>>(istream& in, Slatkepalacinke &sp){
        in>>sp.tipslatke>>sp.dodaci;
        return in;
    }*/

    Slatkepalacinke& operator=(const Slatkepalacinke &sp){
        tipslatke=sp.tipslatke;
        dodaci=sp.dodaci;
    }

    friend bool operator==(Slatkepalacinke &sp1, Slatkepalacinke &sp2){
        if(sp1.tipslatke==sp2.tipslatke && sp1.dodaci==sp2.dodaci)
            return true;
        else
            return false;
    }

    friend bool operator!=(Slatkepalacinke &sp1, Slatkepalacinke &sp2 ){
        if(sp1!=sp2)
            return true;
        else
            return false;
    }



};



#endif // SLATKEPALACINKE_HPP_INCLUDED
