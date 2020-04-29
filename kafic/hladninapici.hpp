#ifndef HLADNINAPICI_HPP_INCLUDED
#define HLADNINAPICI_HPP_INCLUDED

#include "pice.hpp"
enum Hladninapicitip{sokovi,milksejk,smoothie};
enum Led{bez_leda,sa_ledom};

class Hladninapici:public Pice{
private:
    Hladninapici tip;
    Led led;
    int brojkockica;

public:

    Hladninapici(){
        naziv="Sok";
        cena=50;
        kalorije=50;
        posuda=casa;
        tip=sokovi;
        led=sa_ledom;
        brojkockica=2;
        }

    Hladninapici(DinString n,int c,int k,Serviranjehrane p,Toplinapicitip t, Toplidodaci d,Led l,int brojkockica){
        naziv=n;
        cena=c;
        kalorije=k;
        posuda=p;
        tip=t;
        if(b<5)
        brojkockica=b;
        if(brojkockica==0)
            led=bez_leda;
        else
            led=sa_ledom;
         }

    Hladninapici(const Hladninapici &hn){
        naziv=hn.naziv;
        cena=hn.cena;
        kalorije=hn.kalorije;
        posuda=hn.posuda;
        tip=hn.tip;
        dodatak=hn.dodatak;
        brojkockica=hn.brojkockica;
        led=hn.led;
        }


    void setTip(Hladninapicitip t){tip=t; }
    void setLed(Led l){led=l; }
    void setBrojkockica(int bk){if(bk<=5){brojkockica=bk; }}

    Hladninapicitip getTip(){return tip; }
    Led getLed(){return led; }
    int getBrojkockica(){return brojkockica; }

    bool Dodajled(){
        if(brojkockica <=5){
            brojkockica++;
            return true;
        }else
        return false;
    }

    bool Oduzmiled(){
        if(brojkockica >=0){
            brojkockica--;
            return true;
        }else
        return false;
    }

    bool Oduzmisavled(){
        if(led=sa_ledom){
            led=bez_leda;
            return true;
        }else
        return false;
    }

};



#endif // HLADNINAPICI_HPP_INCLUDED