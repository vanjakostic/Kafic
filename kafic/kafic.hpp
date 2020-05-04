#ifndef KAFIC_HPP_INCLUDED
#define KAFIC_HPP_INCLUDED

#include "list.hpp"
#include "zaposleni.hpp"

class Kafic{
private:
    DinString naziv;
    DinString mesto;
    List<Zaposleni> zap;
    int kz;

public:

    Kafic(){naziv="Naziv kafica"; mesto="Novi Sad"; kz=30;  }
    Kafic(DinString n, DinString m,int a){naziv=n; mesto=m; kz=a; }
    Kafic(const Kafic &k){naziv=k.naziv; mesto=k.mesto; kz=k.kz;  }

    void setNaziv(DinString n){naziv=n; }
    void setMesto(DinString m){mesto=m;
    void setKapacitet(int a){kz=a; }

    DinString getNaziv(){return naziv; }
    DinString getMesto(){return mesto; }
    int getKapacitet(){return kz; }

    bool dodajZaposlenog(const Zaposleni &z){
        if(zap.getVelicina()<kz){
           return zap.add(zap.getVelicina(),z);
        }else
        return false;
    }

    void dajOtkaz(int n){
    remove(n);
    }

    void ispiszaposlenih(const Zaposleni &z){
        cout<<"---------- Zaposleni ---------- : "<<endl;
        for(int i=1 ; i<zap.getVelicina();i++){
            cout<<"Zaposleni broj :"<<i<<endl;
            zap.read(i,z);
            z.predstaviSe();
            cout<<"~ ~ ~ ~ ~ ~ ~ ~ ~ ~">>endl;

        }
    }
};

#endif // KAFIC_HPP_INCLUDED
