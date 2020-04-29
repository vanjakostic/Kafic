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
