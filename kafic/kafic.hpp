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
    void setMesto(DinString m){mesto=m;}
    void setKapacitet(int a){kz=a; }

    DinString getNaziv(){return naziv; }
    DinString getMesto(){return mesto; }
    int getKapacitet(){return kz; }

    friend ostream& operator<<(ostream& out, const Kafic k)
    {
        out<<"Naziv :"<<k.naziv<<endl<<"Lokacija :"<<k.mesto<<endl<<"Kapacitet zaposlenih :"<<k.kz<<endl;
    }

    bool dodajZaposlenog(const Zaposleni &z){
        if(zap.size()<kz){
           return zap.add(zap.size()+1,z);
        }else
        return false;
    }

    void ispis(){
        Zaposleni z;
        cout<<endl<<"Zaposleni: " << endl;
        cout<<"----------"<<endl;

        for(int i=1;i<=zap.size();i++){
            cout<<"Zaposleni broj "<<i<<":";
            zap.read(i,z);
            cout<<z.getIme()<<" "<<z.getPrezime()<<", "<<z.getBrojTelefona()<<",  ";

            if(z.getZanimanje()==kuvar)
                cout<<"Kuvar";
            if(z.getZanimanje()==konobar)
                cout<<"Konobar";
            if(z.getZanimanje()==spremacica)
                cout<<"Spremacica";
            cout<<endl;
        }
        cout<<endl;
    }

   /* void dajOtkaz(int n){
    remove(n);
    }*/
};

#endif // KAFIC_HPP_INCLUDED
