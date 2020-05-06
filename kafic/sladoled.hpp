#ifndef SLADOLED_HPP_INCLUDED
#define SLADOLED_HPP_INCLUDED

#include "hrana.hpp"

enum Ukussladoleda{jagoda,cokolada,vanila,stracatela,sumsko_voce,tiramisu,plazma};
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

    Sladoled(){
        naziv="Sladoled";
        cena=150;
        kalorije=120;
        posuda=kornet;
        ukus=cokolada;
        velicina=srednji;
        dodatak=bez_dodatka;
        preliv=nema_preliva;
        }
    Sladoled(DinString n,int c,int k,Serviranjehrane p, Ukussladoleda u, Velicinasladoleda v, Dodacisladoledu d, Prelivisladoledu ps){
        naziv=n;
        cena=c;
        kalorije=k;
        posuda=p;
        ukus=u;
        velicina=v;
        dodatak=d;
        preliv=ps;
        }
    Sladoled(const Sladoled &s){
        naziv=s.naziv;
        cena=s.cena;
        kalorije=s.kalorije;
        posuda=s.posuda;
        ukus=s.ukus;
        velicina=s.velicina;
        dodatak=s.dodatak;
        preliv=s.preliv;
        }

    void setUkus(Ukussladoleda u){ukus=u; }
    void setBrojkugli(Velicinasladoleda v){velicina=v; }
    void setDodatak(Dodacisladoledu d){dodatak=d; }
    void setPreliv(Prelivisladoledu p){preliv=p; }

    Ukussladoleda getUkus(){return ukus; }
    Velicinasladoleda getVelicina(){return velicina; }
    Dodacisladoledu getDodatak(){return dodatak; }
    Prelivisladoledu getPreliv(){return preliv; }

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
        if(dodatak==bez_dodatka){
            dodatak=cokoladne_mrvice;
            return true;
        }else
        return false;
    }

    bool Zvezdice(){
        if(dodatak==bez_dodatka){
            dodatak=zvezdice;
            return true;
        }else
        return false;
    }

    bool Tropskovoce(){
        if(dodatak==bez_dodatka){
            dodatak=tropsko_voce;
            return true;
        }else
        return false;
    }

    bool Sarenemrvice(){
        if(dodatak==bez_dodatka){
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

    friend ostream& operator<<(ostream& out, Sladoled &s){
        out<<endl<<"Sladoled"<<endl;
        out<<"Naziv : sladoled"<<endl;
        out<<"Cena :"<<s.cena<<endl;
        out<<"Kalorije :"<<s.kalorije<<endl;
        out<<"Posuda :";
        switch(s.posuda){
        case tanjir:
            out<<"Tanjir"<<endl;
            break;
        case mali_tanjir:
            out<<"Tanjiric"<<endl;
            break;
        case cinija:
            out<<"Cinija"<<endl;
            break;
        case kornet:
            out<<"Kornet"<<endl;
            break;
        }
        out<<"Ukus :";
        switch(s.ukus){
        case jagoda:
            out<<"Jagoda"<<endl;
            break;
        case cokolada:
            out<<"Cokolada"<<endl;
            break;
        case vanila:
            out<<"vanila"<<endl;
            break;
        case plazma:
            out<<"Plazma"<<endl;
            break;
        case stracatela:
            out<<"Stracatela"<<endl;
            break;
        case sumsko_voce:
            out<<"Sumsko voce"<<endl;
            break;
        case tiramisu:
            out<<"Tiramisu"<<endl;
            break;
        }
        out<<"Preliv :";
        if(s.preliv==nema_preliva)
            out<<"Bez preliva"<<endl;
        else if(s.preliv==cokoladni)
            out<<"Cokoladni"<<endl;
        else if(s.preliv==karamela)
            out<<"Karamela"<<endl;
        else
            out<<"Vocni preliv"<<endl;
        out<<"Velicina :";
        switch(s.velicina){
        case mali:
            out<<"Mali sladoled"<<endl;
            break;
        case srednji:
            out<<"Srednji sladoled"<<endl;
            break;
        case veliki:
            out<<"Veliki sladoled"<<endl;
            break;
        }
        out<<"Dodaci :";
        switch(s.dodatak){
        case cokoladne_mrvice:
            out<<"Cokoladne mrvice"<<endl;
            break;
        case zvezdice:
            out<<"Zvezdice"<<endl;
            break;
        case sarene_mrvice:
            out<<"Sarene mrvice"<<endl;
            break;
        case tropsko_voce:
            out<<"Tropsko voce"<<endl;
            break;
        case bez_dodatka:
            out<<"bez dodataka"<<endl;
            break;
        }
        return out;

    }

    /*friend istream& operator>>(istream& in, Sladoled &s){
        in>>s.ukus>>s.velicina>>s.dodatak>>s.preliv;
        return in;
    }*/

    Sladoled& operator=(const Sladoled &s){
        ukus=s.ukus;
        velicina=s.velicina;
        dodatak=s.dodatak;
        preliv=s.preliv;
    }

    friend bool operator==(Sladoled &s1, Sladoled &s2){
        if(s1.ukus==s2.ukus && s1.velicina==s2.velicina && s1.dodatak==s2.dodatak && s1.preliv==s2.preliv)
            return true;
        else
            return false;
    }

    friend bool operator!=(Sladoled &s1, Sladoled &s2 ){
        if(s1!=s2)
            return true;
        else
            return false;
    }

    friend bool operator <=(Sladoled &s1, Sladoled &s2){
        if(s1.kalorije<=s2.kalorije)
            return true;
        else
            return false;
    }

    friend bool operator >=(Sladoled &s1, Sladoled &s2){
        if(s1.kalorije>=s2.kalorije)
            return true;
        else
            return false;
    }

};


#endif // SLADOLED_HPP_INCLUDED
