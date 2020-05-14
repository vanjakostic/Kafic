#ifndef KASA_HPP_INCLUDED
#define KASA_HPP_INCLUDED
#include "list.hpp"
#include "proizvodi.hpp"

class Kasa{
private:
    List<Proizvodi> pro;
    double trenutnostanje;
    int kp;

public:
    Kasa(){trenutnostanje=0.00; kp=200; }
    Kasa(double t,int k){trenutnostanje=t; kp=k;}
    Kasa(const Kasa &k){trenutnostanje=k.trenutnostanje; kp=k.kp;  }

    void setKasa(double t){trenutnostanje=t; }
    double getKasa(){return trenutnostanje; }

double dodajukasu(Proizvodi &p){
        trenutnostanje+=p.getCena();
        return trenutnostanje;
    }

    bool dodajProdato(const Proizvodi &p){
        if(pro.size()<kp){
           return pro.add(pro.size()+1,p);
        }else
        return false;
    }

    void ispisprodato(){
        Proizvodi p;
        cout<<endl<<"Prodati proizvodi: " << endl;
        cout<<"----------"<<endl;

        for(int i=1;i<=pro.size();i++){
            cout<<"Proizvod broj "<<i<<":";
            cout<<endl;
            pro.read(i,p);
            cout<<"Naziv :"<<p.getNaziv()<<endl;
            cout<<"Cena :"<<p.getCena()<<endl;
            cout<<"Kalorije :"<<p.getKalorije()<<endl<<endl;
        }
        cout<<endl;
    }

    friend ostream& operator<<(ostream& out, const Kasa &k){
        out<<"~~~~~KASA~~~~~"<<endl<<"Trenutno stanjeu kasi :"<<k.trenutnostanje<<endl<<endl;
        return out;
    }


};


#endif // KASA_HPP_INCLUDED
