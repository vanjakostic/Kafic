#ifndef HLADNINAPICI_HPP_INCLUDED
#define HLADNINAPICI_HPP_INCLUDED

#include "pice.hpp"
enum Hladninapicitip{sokovi,milksejk,smoothie};
enum Led{bez_leda,sa_ledom};

class Hladninapici:public Pice{
private:
    Hladninapicitip tip;
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

    Hladninapici(DinString n,int c,int k,Serviranjepica p,Hladninapicitip t, Led l,int b){
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

    friend ostream& operator<<(ostream& out, Hladninapici &hn){
        out<<endl<<"HLADNO PICE"<<endl;
        out<<"Naziv : hladno pice"<<endl;
        out<<"Cena :"<<hn.cena<<endl;
        out<<"Kalorije :"<<hn.kalorije<<endl;
        out<<"Vrsta :";
        if(hn.tip==sokovi)
            out<<"Sok"<<endl;
        else if(hn.tip==milksejk)
            out<<"Milksejk"<<endl;
        else
            out<<"Smoothie"<<endl;
        out<<"Led :";
        if(hn.led==sa_ledom)
            out<<"Sa ledom"<<endl;
        else
            out<<"Bez leda"<<endl;

     return out;
    }

   /* friend istream& operator>>(istream& in, Hladninapici &hn){
        in>>hn.tip>>hn.led>>hn.brojkockica;
        return in;
    }*/

    Hladninapici& operator=(const Hladninapici &hn){
        tip=hn.tip;
        led=hn.led;
        brojkockica=hn.brojkockica;

    }

    friend bool operator==(Hladninapici &hn1, Hladninapici &hn2){
        if(hn1.tip==hn2.tip && hn1.led==hn2.led && hn1.brojkockica==hn2.brojkockica )
            return true;
        else
            return false;
    }

    friend bool operator!=(Hladninapici &hn1, Hladninapici &hn2 ){
        if(hn1!=hn2)
            return true;
        else
            return false;
    }

    friend bool operator <=(Hladninapici &hn1, Hladninapici &hn2){
        if(hn1.kalorije<=hn2.kalorije)
            return true;
        else
            return false;
    }

    friend bool operator >=(Hladninapici &hn1, Hladninapici &hn2){
        if(hn1.kalorije>=hn2.kalorije)
            return true;
        else
            return false;
    }

};



#endif // HLADNINAPICI_HPP_INCLUDED
