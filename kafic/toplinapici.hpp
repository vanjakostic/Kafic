#ifndef TOPLINAPICI_HPP_INCLUDED
#define TOPLINAPICI_HPP_INCLUDED

#include "pice.hpp"
enum Toplinapicitip{caj_kamilica,caj_nana,caj_zeleni,caj_brusnica,caj_limun,kafa,kapucino,toplacokolada};
enum Toplidodaci{mleko,secer,med,slag,bez_dodatka,limun};

class Toplinapici:public Pice{
private:
    Toplinapicitip tip;
    Toplidodaci dodatak;

public:

    Toplinapici(){
        naziv="caj";
        cena=150;
        kalorije=50;
        posuda=solja;
        tip=caj_kamilica;
        dodatak=med;
        }
    Toplinapici(DinString n,int c,int k,Serviranjehrane p,Toplinapicitip t, Toplidodaci d){
        naziv=n;
        cena=c;
        kalorije=k;
        posuda=p;
        tip=t;
        dodatak=d;
         }
    Toplinapici(const Toplinapici &tn){
        naziv=tn.naziv;
        cena=tn.cena;
        kalorije=tn.kalorije;
        posuda=tn.posuda;
        tip=tn.tip;
        dodatak=tn.dodatak;
        }


    void setTip(Toplinapicitip t){tip=t; }
    void setDodatak(Toplidodaci d){dodatak=d; }

    Toplinapicitip getTip(){return tip; }
    Toplidodaci getDodatak(){return dodatak; }

    bool dodajmleko(){
        if(dodatak==bez_dodatka && (tip==kafa || tip==kapucino)){
            dodatak=mleko;
            return true;
        }else
        return false;
    }

    bool dodajslag(){
        if(dodatak==bez_dodatka && tip==toplacokolada ){
            dodatak=slag;
            return true;
        }else
        return false;
    }

    bool dodajsecer(){
        if(dodatak==bez_dodatka && (tip==kafa || tip==kapucino || tip==caj_brusnica || tip==caj_kamilica || tip==caj_limun || tip==caj_nana || tip==caj_zeleni)){
            dodatak=secer;
            return true;
        }else
        return false;
    }

    bool dodajmed(){
        if(dodatak==bez_dodatka && (tip==caj_brusnica || tip==caj_kamilica || tip==caj_limun || tip==caj_nana || tip==caj_zeleni)){
            dodatak=med;
            return true;
        }else
        return false;
    }

    bool dodajlimun(){
        if(dodatak==bez_dodatka && (tip==caj_brusnica || tip==caj_kamilica || tip==caj_limun || tip==caj_nana || tip==caj_zeleni)){
            dodatak=limun;
            return true;
        }else
        return false;
    }


};


#endif // TOPLINAPICI_HPP_INCLUDED
