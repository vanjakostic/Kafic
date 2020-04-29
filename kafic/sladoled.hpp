#ifndef SLADOLED_HPP_INCLUDED
#define SLADOLED_HPP_INCLUDED

#include "hrana.hpp"

enum Ukussladoleda{jagoda,cokolada,vanila,stracatela,sumsko_voce,tiramisu,limun,plazma};
enum Velicinasladoleda{veliki,mali,srednji};
enum Dodacisladoledu{bez_dodatka,cokoladne_mrvice, zvezdice,tropsko_voce,sarene_mrvice};
enum Prelivisladoledu{nema_preliva, cokoladni,karamela,vocni};

class Sladoled :public Hrana{
private:

    Ukussladoleda ukus;
    Velicinasladoleda velicina;
    Dodacisladoledu dodatak;
    Prelivisladoledu preliv;

public:



    void setUkus(Ukussladoleda u){ukus=u; }
    void setBrojkugli(Velicinasladoleda v){velicina=v; }
    void setDodatak(Dodacisladoledu d){dodatak=d; }
    void setPreliv(Prelivisladoledu p){preliv=p; }

    Ukussladoleda getUkus(){return ukus; }
    Velicinasladoleda getVelicina(){return velicina; }
    Dodacisladoledu getDodatak(){return dodatak; }
    Prelivisladoledu getUkus(){return preliv; }

    bool Promeninaveliki(){
        if(velicina==mali || velicina==srednji){
            velicina=veliki;
            return true;
        }else
        return false;
    }

    bool Promeninasrednji(){
        if(velicina==mali || velicina==veliki){
            velicina=srednji;
            return true;
        }else
        return false;
    }

    bool Promeninamali(){
        if(velicina==veliki || velicina==srednji){
            velicina=mali;
            return true;
        }else
        return false;
    }

    bool Uklonidodatak(){

        if(dodatak==bez_dodatka)
            return false;

        switch(dodatak){
            case cokoladne_mrvice:
            case zvezdice:
            case tropsko_voce:
            case sarene_mrvice:
                dodatak=bez_dodatka;
                return true;
                break;
        }
    }

    bool Cokoladnemrvice(){
        if(dodak==bez_dodatka){
            dodatak=cokoladne_mrvice;
            return true;
        }else
        return false;
    }

    bool Zvezdice(){
        if(dodak==bez_dodatka){
            dodatak=zvezdice;
            return true;
        }else
        return false;
    }

    bool Tropskovoce(){
        if(dodak==bez_dodatka){
            dodatak=tropsko_voce;
            return true;
        }else
        return false;
    }

    bool Sarenemrvice(){
        if(dodak==bez_dodatka){
            dodatak=sarene_mrvice;
            return true;
        }else
        return false;
    }

    bool Uklonipreliv(){
        if(preliv==nema_preliva)
        return false;

        switch(preliv){
            case cokoladni:
            case vocni:
            case karamela:
            preliv=nema_preliva;
            return true;
        }
    }

    bool dodajCokoladni(){
        if(preliv==nema_preliva){
            preliv=cokoladni;
            return true;
        }else
        return false;
    }

    bool dodajVocni(){
        if(preliv==nema_preliva){
            preliv=vocni;
            return true;
        }else
        return false;
    }

    bool dodajKaramela(){
        if(preliv==nema_preliva){
            preliv=karamela;
            return true;
        }else
        return false;
    }

};


#endif // SLADOLED_HPP_INCLUDED
