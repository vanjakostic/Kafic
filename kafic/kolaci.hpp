#ifndef KOLACI_HPP_INCLUDED
#define KOLACI_HPP_INCLUDED

#include "hrana.hpp"

enum Vrstakolaca{coko_moko,cheesecake,plazmatorta};
enum Prelivkolaca{bez_preliva,sa_prelivom};
enum Slag{bez_slaga,sa_slagom};
enum Stanjekolaca{u_pripremi,pece_se,ispecen};

class Kolaci: public Hrana{
private:
    Vrstakolaca vrsta;
    Prelivkolaca preliv;
    Slag slag;
    Stanjekolaca stanje;

public:

    Kolaci(){
        naziv="Kolac";
        cena=250;
        kalorije=250;
        posuda=mali_tanjir;
        vrsta=cheesecake;
        preliv=bez_preliva;
        slag=bez_slaga;
        stanje=ispecen;
        }
    Kolaci(DinString n,int c,int k,Serviranjehrane p,Vrstakolaca v,Prelivkolaca pk, Slag s, Stanjekolaca sk){
        naziv=n;
        cena=c;
        kalorije=k;
        posuda=p;
        vrsta=v;
        preliv=pk;
        slag=s;
        stanje=sk;
         }
    Kolaci(const Kolaci &k){
        naziv=k.naziv;
        cena=k.cena;
        kalorije=k.kalorije;
        posuda=k.posuda;
        vrsta=k.vrsta;
        preliv=k.preliv;
        slag=k.slag;
        stanje=k.stanje;
        }

    void setVrsta(Vrstakolaca v){vrsta=v; }
    void setPreliv(Prelivkolaca pk){preliv=pk;}
    void setSlag(Slag s){slag=s;}
    void setStanje(Stanjekolaca s){stanje=s; }

    Vrstakolaca getVrsta(){return vrsta; }
    Prelivkolaca getPreliv(){return preliv; }
    Slag getSlag(){return slag; }
    Stanjekolaca getStanje(){return stanje; }

    bool Stavidasepece(){
        if(stanje==u_pripremi){
            stanje=pece_se;
            return true;
        }else
            return false;
    }

    bool Ispeci(){
        if(stanje==pece_se){
            stanje=ispecen;
            return true;
        }else
        return false;
    }

    bool Dodajpreliv(){
        if(stanje==ispecen && preliv==bez_preliva){
            preliv=sa_prelivom;
            return true;
        }else
            return false;
    }

    bool Sklonipreliv(){
        if(stanje==ispecen && preliv==sa_prelivom){
            preliv=bez_preliva;
            return true;
        }else
            return false;
    }

    bool Dodajslag(){
        if(stanje==ispecen && slag==bez_slaga){
            slag==sa_slagom;
            return true;
        }else
        return false;
    }

    bool Sklonislag(){
        if(stanje==ispecen && slag=sa_slagom){
            slag=bez_slaga;
            return true;
        }else
        return false;
    }

};



#endif // KOLACI_HPP_INCLUDED