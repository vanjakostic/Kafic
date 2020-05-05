#include <iostream>

using namespace std;

#include "kafic.hpp"
#include "kasa.hpp"
#include "zaposleni.hpp"

#include "kuhinja.hpp"
#include "prostorije.hpp"
#include "toalet.hpp"
#include "glavnasoba.hpp"
#include "rerne.hpp"
#include "sporeti.hpp"
#include "escajg.hpp"
#include "posudjehrana.hpp"
#include "posudjepice.hpp"
#include "case.hpp"
#include "solje.hpp"
#include "stolovi.hpp"

#include "proizvodi.hpp"
#include "hrana.hpp"
#include "pice.hpp"
#include "sladoled.hpp"
#include "kolaci.hpp"
#include "palacinke.hpp"
#include "slatkepalacinke.hpp"
#include "slanepalacinke.hpp"
#include "hladninapici.hpp"
#include "toplinapici.hpp"
int main()
{

    Kafic kaficc1("Kafic Klisa","Primorska 49, Klisa, Novi Sad",30);
    Zaposleni zaposleni1("Radoje", "Radivojevic","0658260321",konobar);
    Zaposleni zaposleni2("Djole","Bojanic","0669249686",kuvar);
    Zaposleni zaposleni3("Dragica","Sumovic","0612589471",spremacica);

    kaficc1.dodajZaposlenog(zaposleni1);
    kaficc1.dodajZaposlenog(zaposleni2);

    cout<<kaficc1;
    kaficc1.ispis();

    kaficc1.dodajZaposlenog(zaposleni3);
    kaficc1.ispis();

    Kasa kasaa1;
    cout<<kasaa1;
    kasaa1.dodajukasu(250);
    cout<<kasaa1;

    Toalet toalett1;
    cout<<toalett1;

    toalett1.kupitpapir();
    toalett1.kupisapun();
    cout<<toalett1;

    Glavnasoba glavnasobaa1;
    Stolovi stoo1,stoo2,stoo3,stoo4;

    glavnasobaa1.dodajSto(stoo1);
    glavnasobaa1.dodajSto(stoo2);
    glavnasobaa1.dodajSto(stoo3);
    glavnasobaa1.dodajSto(stoo4);

    glavnasobaa1.ispisstolova();
    stoo2.zauzmi();
    glavnasobaa1.ispisstolova();

    Kuhinja kuhinjaa1;
    Rerne rernaa1;
    Rerne rernaa2(rernaa1);
    Rerne rernaa3(150,ukljucena);

    kuhinjaa1.dodajrernu(rernaa1);
    kuhinjaa1.dodajrernu(rernaa2);
    kuhinjaa1.dodajrernu(rernaa3);

    Sporeti sporett1;
    Sporeti sporett2(sporett1);
    Sporeti sporett3(7,ukljucen);

    kuhinjaa1.dodajsporet(sporett1);
    kuhinjaa1.dodajsporet(sporett2);
    kuhinjaa1.dodajsporet(sporett3);

    Escajg escajgg(0,12);

    Posudjehrana posudjehh(15,15,15,5,5,5);

    Posudjepice posudjepp;

    Case casaa1;
    Case casaa2(prljava);
    Case casaa3;

    posudjepp.dodajcasu(casaa1);
    posudjepp.dodajcasu(casaa2);
    posudjepp.dodajcasu(casaa3);

    Solje soljaa1;
    Solje soljaa2(soljaa1);
    Solje soljaa3;

    posudjepp.dodajsolju(soljaa1);
    posudjepp.dodajsolju(soljaa2);
    posudjepp.dodajsolju(soljaa3);

    kuhinjaa1.ispis(escajgg,posudjehh,posudjepp);

    Rerne rernaa4(250,ukljucena);
    kuhinjaa1.dodajrernu(rernaa4);

    Sporeti sporett4(6,ukljucen);
    kuhinjaa1.dodajsporet(sporett4);

    escajgg.osteti();
    escajgg.osteti();

    posudjehh.operisve();

    Case casaa4(prljava);
    posudjepp.dodajcasu(casaa4);

    Solje soljaa4(prljavasolja);
    posudjepp.dodajsolju(soljaa4);

    kuhinjaa1.ispis(escajgg,posudjehh,posudjepp);

    Kolaci kolacc1;
    cout<<kolacc1;

    Sladoled sladoledd1;
    cout<<sladoledd1;

    Slanepalacinke slanaa1;
    cout<<slanaa1;

    Slatkepalacinke slatkaa1;
    cout<<slatkaa1;

    Hladninapici hladnii1;
    cout<<hladnii1;

    Toplinapici toplii1;
    cout<<toplii1;


    return 0;
}
