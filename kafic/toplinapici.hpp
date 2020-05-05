#ifndef TOPLINAPICI_HPP_INCLUDED
#define TOPLINAPICI_HPP_INCLUDED

#include "pice.hpp"
enum Toplinapicitip{caj_kamilica,caj_nana,caj_zeleni,caj_brusnica,caj_limun,kafa,kapucino,toplacokolada};
enum Toplidodaci{mleko,secer,med,slag,bez_dodatka_topli,limun};

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
    Toplinapici(DinString n,int c,int k,Serviranjepica p,Toplinapicitip t, Toplidodaci d){
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
        if(dodatak==bez_dodatka_topli && (tip==kafa || tip==kapucino)){
            dodatak=mleko;
            return true;
        }else
        return false;
    }

    bool dodajslag(){
        if(dodatak==bez_dodatka_topli && tip==toplacokolada ){
            dodatak=slag;
            return true;
        }else
        return false;
    }

    bool dodajsecer(){
        if(dodatak==bez_dodatka_topli && (tip==kafa || tip==kapucino || tip==caj_brusnica || tip==caj_kamilica || tip==caj_limun || tip==caj_nana || tip==caj_zeleni)){
            dodatak=secer;
            return true;
        }else
        return false;
    }

    bool dodajmed(){
        if(dodatak==bez_dodatka_topli && (tip==caj_brusnica || tip==caj_kamilica || tip==caj_limun || tip==caj_nana || tip==caj_zeleni)){
            dodatak=med;
            return true;
        }else
        return false;
    }

    bool dodajlimun(){
        if(dodatak==bez_dodatka_topli && (tip==caj_brusnica || tip==caj_kamilica || tip==caj_limun || tip==caj_nana || tip==caj_zeleni)){
            dodatak=limun;
            return true;
        }else
        return false;
    }

    friend ostream& operator<<(ostream& out, Toplinapici &tn){
        out<<endl<<"TOPLI NAPICI"<<endl;
        out<<"Naziv : topli napitak"<<endl;
        out<<"Cena :"<<tn.cena<<endl;
        out<<"Kalorije :"<<tn.kalorije<<endl;
        out<<"Tip :";
        switch(tn.tip){
        case caj_brusnica:
            out<<"Caj od brusnice"<<endl;
            break;
        case caj_kamilica:
            out<<"Caj od kamilica"<<endl;
            break;
        case caj_limun:
            out<<"Caj od limuna"<<endl;
            break;
        case caj_nana:
            out<<"Caj od nane"<<endl;
            break;
        case caj_zeleni:
            out<<"Zeleni cas"<<endl;
            break;
        case kafa:
            out<<"Kafa"<<endl;
            break;
        case kapucino:
            out<<"Kapucino"<<endl;
            break;
        case toplacokolada:
            out<<"Topla cokolada"<<endl;
            break;
        }
        out<<"Dodatak :";
        switch(tn.dodatak){
        case mleko:
            out<<"Mleko"<<endl;
            break;
        case secer:
            out<<"Secer"<<endl;
            break;
        case med:
            out<<"Med"<<endl;
            break;
        case slag:
            out<<"Slag"<<endl;
            break;
        case bez_dodatka_topli:
            out<<"Bez dodatka"<<endl;
            break;
        case limun:
            out<<"Limun"<<endl;
            break;
            }

     return out;
    }

    /*friend istream &operator>>(istream &in, Toplinapici &tn){
        in>>tn.tip;
        in>>tn.dodatak;
        return in;
    }*/

    Toplinapici& operator=(const Toplinapici &tn){
        tip=tn.tip;
        dodatak=tn.dodatak;
    }

    friend bool operator==(Toplinapici &tn1, Toplinapici &tn2){
        if(tn1.tip==tn2.tip && tn1.dodatak==tn2.dodatak )
            return true;
        else
            return false;
    }

    friend bool operator!=(Toplinapici &tn1, Toplinapici &tn2 ){
        if(tn1!=tn2)
            return true;
        else
            return false;
    }

};


#endif // TOPLINAPICI_HPP_INCLUDED
