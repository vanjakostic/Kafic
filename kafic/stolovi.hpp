#ifndef STOLOVI_HPP_INCLUDED
#define STOLOVI_HPP_INCLUDED

#include "dinstring.hpp"

enum Stanjestola{zauzet,slobodan};

class Stolovi{
private:
    Stanjestola stanje;
    DinString porudzbina;

public:

    Stolovi(){ porudzbina="Kolac"; stanje=zauzet; }
    Stolovi(DinString p, Stanjestola s){porudzbina=p; stanje=s; }
    Stolovi(const Stolovi &s){porudzbina=s.porudzbina; stanje=s.stanje; }

    void setSto(Stanjestola s){stanje=s; }
    void setPorudzbina(DinString p){porudzbina=p; }

    Stanjestola getSto(){return stanje; }
    DinString getPorudzbina(){return porudzbina; }


    bool zauzmi(){
        if(stanje==slobodan){
            stanje=zauzet;
            return true;
        }else
        return false;
    }

    bool oslobodi(){
        if(stanje==zauzet){
            stanje=slobodan;
            return true;

        }else
        return false;
    }
};


#endif // STOLOVI_HPP_INCLUDED
