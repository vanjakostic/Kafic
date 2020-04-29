#ifndef PALACINKE_HPP_INCLUDED
#define PALACINKE_HPP_INCLUDED

#include "hrana.hpp"

enum Tippalacinki{slane,slatke};
enum Stanjepalacinki{palacinke_u_pripremi,palacinka_se_pece,palacinka_se_ispekla};

class Palacinke:public Hrana{
protected:
    Tippalacinki tip;
    Stanjepalacinki stanje;
public:
    void setTip(Tippalacinki t){tip=t; }
    void setStanje(Stanjepalacinki s){stanje=s; }

    Tippalacinki getTip(){return tip;}
    Stanjepalacinki getStanje() {return stanje; }

    bool Stavidasepece(){
        if(stanje==palacinke_u_pripremi){
            stajne==palacinka_se_pece;
            return true;
        }else
        return false;
    }

    bool Ispeci(){
        if(stanje==palacinka_se_pece){
            stanje=palacinka_se_ispekla;
            return true;
        }else
        return false;
    }


};

#endif // PALACINKE_HPP_INCLUDED
