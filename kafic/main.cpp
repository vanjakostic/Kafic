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

    Kafic kaficc2;
    Kafic kaficc3(kaficc2);
    Kafic kaficc1("Kafic Klisa","Primorska 49, Klisa, Novi Sad",30);

    kaficc1.setNaziv("Kafic Klisa");
    kaficc1.setMesto("Primorska 49, Klisa, Novi Sad");
    kaficc1.setKapacitet(30);

    cout<<"=================================="<<endl;
    cout<<"=================================="<<endl;
    cout<<"KAFIC    KAFIC     KAFIC     KAFIC"<<endl;
    cout<<"=================================="<<endl;
    cout<<"=================================="<<endl<<endl<<endl;

    cout<<"Provera get metoda:"<<endl;
    cout<<"Ime"<<kaficc1.getNaziv()<<endl;
    cout<<"Lokacija:"<<kaficc1.getMesto()<<endl;
    cout<<"Kapacitet zaposlenih"<<kaficc1.getKapacitet()<<endl;
    cout<<"-----------------------------------------------"<<endl<<endl;

    Zaposleni zaposleni1("Radoje", "Radivojevic","0658260321",konobar);
    Zaposleni zaposleni2("Djole","Bojanic","0669249686",kuvar);
    Zaposleni zaposleni3("Dragica","Sumovic","0612589471",spremacica);
    Zaposleni zaposleni4;
    Zaposleni zaposleni5(zaposleni1);

    zaposleni4.setIme("Milica");
    zaposleni4.setPrezime("Sumovic");
    zaposleni4.setBrojTelefona("0612589347");
    zaposleni4.setZanimanje(kuvar);

    //get metode zaposlenih isprobane u ispisu zaposlenih u klasi "Kafic"

    kaficc1.dodajZaposlenog(zaposleni1);
    kaficc1.dodajZaposlenog(zaposleni2);

    cout<<"Provera operatora za ispis sa dodatim zaposlenima:"<<endl;
    cout<<kaficc1;
    kaficc1.ispis();

    cout<<endl;
    cout<<"Provera operatora za ispis sa dodatim zaposlenima:"<<endl;
    kaficc1.dodajZaposlenog(zaposleni3);
    kaficc1.dodajZaposlenog(zaposleni4);
    kaficc1.ispis();
    cout<<endl;

    cout<<"Provera operatora za ispis sa manje zaposlenih (otkaz jednom zaposlenom) :"<<endl;
    kaficc1.dajOtkaz(zaposleni4,4);
    kaficc1.ispis();
    cout<<endl;

    Kasa kasaa1;
    Kasa kasaa2(250);
    Kasa kasaa3(kasaa2);
    Kasa kasaa4;

    kasaa1.setKasa(500);

    cout<<"Provera operatora za ispis kase :"<<endl<<kasaa1<<endl<<"Provera get metode za kasu:" <<kasaa1.getKasa()<<endl<<endl;
    kasaa1.dodajukasu(250);
    cout<<"Stanje u kasi nakon dodavanja novca"<<endl;
    cout<<kasaa1<<endl;

    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~PROSTORIJE~~~~~~~~~"<<endl;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;

    Prostorije prostorijee1,prostorijee2(4,20,12,potrosena,nepotrosena,potrosena,nepotrosena,potrosena,nepotrosena,
                                         1,14,40,40,40,0,0,0,6,6,20),prostorijee3(prostorijee1);

    cout<<endl<<"~~~~~~~~~TOALET~~~~~~~~~~"<<endl<<endl;
    Toalet toalett1;
    Toalet toalett2;

    toalett2.setBrojrolnipapira(15);
    toalett2.setBrojsapuna(9);
    toalett2.setBrojtoaleta(2);
    toalett2.setDeterdzent(potrosena);
    toalett2.setOdrzavanjekuhinje(nepotrosena);
    toalett2.setOdrzavanjetoaleta(potrosena);
    toalett2.setZapod(potrosena);
    toalett2.setZastaklo(nepotrosena);
    toalett2.setZastolove(potrosena);

    cout<<endl<<"Provera operatora za ispis za toalet 1"<<endl<<toalett1<<endl;
    cout<<endl<<"Provera getera za toalet 2:"<<endl;
    cout<<"~~~~~ TOALET ~~~~~"<<endl;
    cout<<"Broj papira :"<<toalett2.getBrojrolnipapira()<<endl<<"Broj sapuna :"<<toalett2.getBrojsapuna()<<endl<<"Broj toaleta :"<<toalett2.getBrojtoaleta()<<endl;
    cout<<"Deterdzent :";
    if(toalett2.getDeterdzent()==potrosena)
        cout<<"Potrosen"<<endl;
    else
        cout<<"Nije potrosen"<<endl;
    cout<<"Sredstvo za odrzavanje kuhinje :";
    if(toalett2.getOdrzavanjekuhinje()==potrosena)
        cout<<"Potroseno"<<endl;
    else
        cout<<"Nije potroseno"<<endl;
    cout<<"Sredstvo za odrzavanje toaleta :";
    if(toalett2.getOdrzavanjetoaleta()==potrosena)
        cout<<"Potroseno"<<endl;
    else
        cout<<"Nije potroseno"<<endl;
    cout<<"Sredstvo za brisanje poda :";
    if(toalett2.getZapod()==potrosena)
        cout<<"Potroseno"<<endl;
    else
        cout<<"Nije potroseno"<<endl;
    cout<<"Sredstvo za pranje stakla :";
    if(toalett2.getZastaklo()==potrosena)
        cout<<"Potroseno"<<endl;
    else
        cout<<"Nije potroseno"<<endl;
    cout<<"Sredstvo za brisanje stolova :";
    if(toalett2.getZastolove()==potrosena)
        cout<<"Potroseno"<<endl;
    else
        cout<<"Nije potroseno"<<endl;
    cout<<endl<<endl;

    toalett1.kupitpapir();
    toalett1.kupisapun();
    toalett1.potrosideterdzent();
    toalett1.potrosizapod();
    toalett1.potrosizastolove();
    toalett1.potrosiodrzavanjetoaleta();
    toalett1.kupizastaklo();
    toalett1.kupiodrzavanjekuhinje();

    cout<<"Toalet 1 nakon isprobanih metoda"<<endl;
    cout<<toalett1;

    toalett2.potrosipapir();
    toalett2.potrosisapun();
    toalett2.kupideterdzent();
    toalett2.kupizapod();
    toalett2.kupizastolove();
    toalett2.kupiodrzavanjetoaleta();
    toalett2.potrosizastaklo();
    toalett2.potrosiodrzavanjekuhinje();

    cout<<"Toalet 2 nakon isprobanih metoda"<<endl;
    cout<<toalett2;

    cout<<"~~~~~~~GLAVNA SOBA~~~~~~~~"<<endl;
    Glavnasoba glavnasobaa1;
    Stolovi stoo1,stoo2(zauzet),stoo3(stoo1),stoo4;

    stoo4.setSto(zauzet);

    glavnasobaa1.dodajSto(stoo1);
    glavnasobaa1.dodajSto(stoo2);
    glavnasobaa1.dodajSto(stoo3);
    glavnasobaa1.dodajSto(stoo4);

    glavnasobaa1.ispisstolova();
    stoo2.oslobodi();
    stoo4.oslobodi();
    stoo1.zauzmi();
    stoo3.zauzmi();
    cout<<endl<<"Ispis stolova nakon menjanja stanja (geteri):"<<endl;
    cout<<"Sto broj 1:";
    if(stoo1.getSto()==slobodan)
        cout<<"Slobodan"<<endl;
    else
        cout<<"Zauzet"<<endl;
    cout<<"Sto broj 2:";
    if(stoo2.getSto()==slobodan)
        cout<<"Slobodan"<<endl;
    else
        cout<<"Zauzet"<<endl;
    cout<<"Sto broj 3:";
    if(stoo3.getSto()==slobodan)
        cout<<"Slobodan"<<endl;
    else
        cout<<"Zauzet"<<endl;
    cout<<"Sto broj 4:";
    if(stoo4.getSto()==slobodan)
        cout<<"Slobodan"<<endl;
    else
        cout<<"Zauzet"<<endl;

    Kuhinja kuhinjaa1,kuhinjaa2(kuhinjaa1);
    cout<<endl<<"~~~~~~~~KUHINJA~~~~~~~~~"<<endl<<endl;

    Rerne rernaa1;
    Rerne rernaa2(rernaa1);
    Rerne rernaa3(150,ukljucena);

    kuhinjaa1.dodajrernu(rernaa1);
    kuhinjaa1.dodajrernu(rernaa2);
    kuhinjaa1.dodajrernu(rernaa3);

    Rerne rernaa4;
    rernaa4.setStanje(ukljucena);
    rernaa4.setTemperatura(250);
    kuhinjaa1.dodajrernu(rernaa4);

    Sporeti sporett1;
    Sporeti sporett2(sporett1);
    Sporeti sporett3(7,ukljucen);
    Sporeti sporett4;
    sporett4.setTemperatura(6);
    sporett4.setStanje(ukljucen);

    kuhinjaa1.dodajsporet(sporett1);
    kuhinjaa1.dodajsporet(sporett2);
    kuhinjaa1.dodajsporet(sporett3);
    kuhinjaa1.dodajsporet(sporett4);

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

    rernaa1.ukljuci();
    rernaa2.ukljuci();
    rernaa2.povecajtemperaturu();
    rernaa3.ukljuci();
    rernaa3.smanjitemperatura();
    rernaa4.iskljuci();

    cout<<endl<<"Ispis nakon upotreba metoda (ispis geterima) :"<<endl;
    cout<<endl<<"Rerna 1:"<<endl<<"Stanje :";
    if(rernaa1.getStanje()==ukljucena)
        cout<<"ukljucena"<<endl;
    else
        cout<<"iskljucena"<<endl;
    cout<<"Temperatura :"<<rernaa1.getTemperatura()<<endl;

    cout<<endl<<"Rerna 2:"<<endl<<"Stanje :";
    if(rernaa2.getStanje()==ukljucena)
        cout<<"ukljucena"<<endl;
    else
        cout<<"iskljucena"<<endl;
    cout<<"Temperatura :"<<rernaa2.getTemperatura()<<endl;

    cout<<endl<<"Rerna 3:"<<endl<<"Stanje :";
    if(rernaa3.getStanje()==ukljucena)
        cout<<"ukljucena"<<endl;
    else
        cout<<"iskljucena"<<endl;
    cout<<"Temperatura :"<<rernaa3.getTemperatura()<<endl;

    cout<<endl<<"Rerna 4:"<<endl<<"Stanje :";
    if(rernaa4.getStanje()==ukljucena)
        cout<<"ukljucena"<<endl;
    else
        cout<<"iskljucena"<<endl;
    cout<<"Temperatura :"<<rernaa4.getTemperatura()<<endl;

    sporett1.ukljuci();
    sporett1.povecajtemperaturu();

    sporett2.ukljuci();

    sporett3.smanjitemperatura();

    sporett4.iskljuci();

    cout<<endl<<"Ispis nakon upotreba metoda (ispis geterima) :"<<endl;
    cout<<endl<<"Sporet 1:"<<endl<<"Stanje :";
    if(sporett1.getStanje()==ukljucen)
        cout<<"ukljucen"<<endl;
    else
        cout<<"iskljucen"<<endl;
    cout<<"Temperatura :"<<sporett1.getTemperatura()<<endl;

    cout<<endl<<"Sporet 2:"<<endl<<"Stanje :";
    if(sporett2.getStanje()==ukljucen)
        cout<<"ukljucen"<<endl;
    else
        cout<<"iskljucen"<<endl;
    cout<<"Temperatura :"<<sporett2.getTemperatura()<<endl;

    cout<<endl<<"Sporet 3:"<<endl<<"Stanje :";
    if(sporett3.getStanje()==ukljucen)
        cout<<"ukljucen"<<endl;
    else
        cout<<"iskljucen"<<endl;
    cout<<"Temperatura :"<<sporett3.getTemperatura()<<endl;

    cout<<endl<<"Sporet 4:"<<endl<<"Stanje :";
    if(sporett4.getStanje()==ukljucen)
        cout<<"ukljucen"<<endl;
    else
        cout<<"iskljucen"<<endl;
    cout<<"Temperatura :"<<sporett4.getTemperatura()<<endl;


    Escajg escajgg1;
    Escajg escajgg2(escajgg1);
    Escajg escajgg3(3,16);
    escajgg1.setBrojdobrih(15);
    escajgg1.setBrojotecenih(4);

    escajgg.osteti();
    escajgg.osteti();
    escajgg.baci();
    escajgg.osteti();
    escajgg.kupi();
    cout<<endl<<"Escajg: "<<endl;
    cout<<"Broj dobrih :"<<escajgg.getBrojdobrih()<<endl;
    cout<<"Broj ostecenih :"<<escajgg.getBrojostecenih()<<endl<<endl;

    Posudjehrana posudjehh1(30,30,30,2,2,2);
    Posudjehrana posudjehh2(posudjehh1);
    Posudjehrana posudjehh3;

    posudjehh3.setOpranecinije(35);
    posudjehh3.setOpranitanjiri(35);
    posudjehh3.setOpranitanjirici(35);
    posudjehh3.setPrljavecinije(8);
    posudjehh3.setPrljavitanjiri(8);
    posudjehh3.setPrljavitanjirici(8);

    posudjehh.opericiniju();
    posudjehh.operitanjir();
    posudjehh.operitanjiric();
    posudjehh.opericiniju();
    posudjehh.operitanjir();
    posudjehh.operitanjiric();
    posudjehh.opericiniju();
    posudjehh.operitanjir();
    posudjehh.operitanjiric();
    posudjehh.isprljajciniju();
    posudjehh.isprljajtanjir();
    posudjehh.isprljajtanjiric();

    cout<<endl<<"Posudje za hranu"<<endl;
    cout<<"Broj opranih tanjira:"<<posudjehh.getOpranitanjiri()<<endl<<"Broj prljavih tanjira:"<<posudjehh.getPrljavitanjiri()<<endl;
    cout<<"Broj opranih tanjirica:"<<posudjehh.getOpranitanjirici()<<endl<<"Broj prljavih tanjirica:"<<posudjehh.getPrljavitanjirici()<<endl;
    cout<<"Broj opranih cinija:"<<posudjehh.getOpranecinije()<<endl<<"Broj prljavih cinija:"<<posudjehh.getPrljavecinije()<<endl<<endl;

    posudjehh.kupicinije();
    posudjehh.kupitanjire();
    posudjehh.kupitanjirice();
    posudjehh.razbijoprantanjir();
    posudjehh.razbijopranuciniju();
    posudjehh.razbijoprantanjiric();
    posudjehh.razbijprljavitanjir();
    posudjehh.razbijprljavitanjiric();
    posudjehh.razbijprljavuciniju();

    cout<<endl<<"Posudje za hranu"<<endl;
    cout<<"Broj opranih tanjira:"<<posudjehh.getOpranitanjiri()<<endl<<"Broj prljavih tanjira:"<<posudjehh.getPrljavitanjiri()<<endl;
    cout<<"Broj opranih tanjirica:"<<posudjehh.getOpranitanjirici()<<endl<<"Broj prljavih tanjirica:"<<posudjehh.getPrljavitanjirici()<<endl;
    cout<<"Broj opranih cinija:"<<posudjehh.getOpranecinije()<<endl<<"Broj prljavih cinija:"<<posudjehh.getPrljavecinije()<<endl<<endl;

    posudjehh.operisve();

    cout<<endl<<"Posudje za hranu"<<endl;
    cout<<"Broj opranih tanjira:"<<posudjehh.getOpranitanjiri()<<endl<<"Broj prljavih tanjira:"<<posudjehh.getPrljavitanjiri()<<endl;
    cout<<"Broj opranih tanjirica:"<<posudjehh.getOpranitanjirici()<<endl<<"Broj prljavih tanjirica:"<<posudjehh.getPrljavitanjirici()<<endl;
    cout<<"Broj opranih cinija:"<<posudjehh.getOpranecinije()<<endl<<"Broj prljavih cinija:"<<posudjehh.getPrljavecinije()<<endl<<endl;

    Case casaa4(prljava);
    posudjepp.dodajcasu(casaa4);
    casaa4.opericasu();

    Solje soljaa4(prljavasolja);
    posudjepp.dodajsolju(soljaa4);
    soljaa4.operisolju();

    if(casaa1.getCasu()==cista)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;
    if(casaa2.getCasu()==cista)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;
    if(casaa3.getCasu()==cista)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;
    if(casaa4.getCasu()==cista)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;

    if(soljaa1.getSolju()==cistasolja)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;
    if(soljaa2.getSolju()==cistasolja)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;
    if(soljaa3.getSolju()==cistasolja)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;
    if(soljaa4.getSolju()==cistasolja)
        cout<<"Oprana"<<endl;
    else
        cout<<"Prljava"<<endl;


    Kolaci kolacc1,kolacc2(kolacc1);
    Kolaci kolacc3("Kolac",250,360,mali_tanjir,plazmatorta,bez_preliva,bez_slaga,pece_se);
    Kolaci kolacc4;

    cout<<kolacc1;
    cout<<kolacc3;
    cout<<kolacc4;

    kolacc4.setVrsta(coko_moko);
    kolacc4.setPreliv(sa_prelivom);
    kolacc4.setSlag(sa_slagom);
    kolacc4.setStanje(u_pripremi);
    kolacc3.Ispeci();
    kolacc4.Stavidasepece();
    kolacc3.Dodajpreliv();
    kolacc3.Dodajslag();


    cout<<kolacc1;
    cout<<kolacc3;
    cout<<kolacc4;


    Sladoled sladoledd1,sladoledd2,sladoledd3(sladoledd1);
    Sladoled sladoledd4("Sladoled",50,300,kornet,jagoda,srednji,bez_dodatka,nema_preliva);
    cout<<sladoledd1;
    cout<<sladoledd4;
    sladoledd2.setUkus(cokolada);
    sladoledd2.setBrojkugli(mali);
    sladoledd2.setDodatak(zvezdice);
    sladoledd2.setPreliv(karamela);
    cout<<sladoledd2;

    sladoledd2.Promeninasrednji();
    sladoledd2.Uklonidodatak();
    sladoledd2.Uklonipreliv();

    sladoledd4.Promeninamali();
    sladoledd4.dodajVocni();
    sladoledd4.Cokoladnemrvice();

    cout<<endl<<"Sladoledi nakon primene metoda"<<endl;
    cout<<sladoledd1;
    cout<<sladoledd4;
    cout<<sladoledd2;


    Slanepalacinke slanaa1,slanaa2,slanaa3("Slana palacinka",260,300,tanjir,slane,palacinke_u_pripremi,vegetarijanska_palacinka,mix_povrca);
    Slanepalacinke slanaa4(slanaa1);
    slanaa2.setTip(vegetarijanska_palacinka);
    slanaa2.setDodaci(bez_dodatka_slana);
    cout<<slanaa1;
    cout<<slanaa2;
    cout<<slanaa3;

    slanaa1.Dodajsunku();
    slanaa2.Dodajmixpovrca();
    slanaa3.Uklonidodatak();
    slanaa3.Stavidasepece();

    cout<<endl<<"Slane palacinke nakon primene metoda:"<<endl;
    cout<<slanaa1;
    cout<<slanaa2;
    cout<<slanaa3;


    Slatkepalacinke slatkaa1,slatkaa2(slatkaa1);
    Slatkepalacinke slatkaa3("Slatka palacinka",320,400,tanjir,slatke,palacinka_se_pece,mars,bez_dodataka_slatka);
    slatkaa1.setTip(snikers);
    slatkaa1.setDodaci(kikiriki);
    cout<<slatkaa1;
    cout<<slatkaa2;
    cout<<slatkaa3;

    slatkaa1.Uklonidodatak();
    slatkaa2.Dodajkokos();
    slatkaa3.Ispeci();
    slatkaa3.Dodajlesnik();

    cout<<endl<<"Slatke palacinke nakon primene metoda"<<endl;
    cout<<slatkaa1;
    cout<<slatkaa2;
    cout<<slatkaa3;

    Hladninapici hladnii1,hladnii2(hladnii1);
    Hladninapici hladnii3("Milksejk",75,150,casa,0.3,milksejk,sa_ledom,3);
    hladnii1.setTip(smoothie);
    hladnii1.setBrojkockica(4);
    hladnii1.setLed(sa_ledom);

    cout<<hladnii1;
    cout<<hladnii2;
    cout<<hladnii3;

    hladnii1.Oduzmiled();
    hladnii2.Dodajled();
    hladnii3.Oduzmisavled();

    cout<<endl<<"Hladni napici nakon primene metoda:"<<endl;
    cout<<hladnii1;
    cout<<hladnii2;
    cout<<hladnii3;


    Toplinapici toplii1,toplii2(toplii1);
    Toplinapici toplii3("Topli napitak",140,160,solja,0.2,kafa,secer);
    toplii1.setTip(toplacokolada);
    toplii1.setDodatak(bez_dodatka_topli);

    cout<<toplii1;
    cout<<toplii2;
    cout<<toplii3;

    toplii1.dodajslag();
    toplii2.dodajlimun();
    toplii3.dodajmleko();

    cout<<endl<<"Topli napici nakon primene metoda:"<<endl;
    cout<<toplii1;
    cout<<toplii2;
    cout<<toplii3;

    cout<<"Zapremina prvog hladnog pica :"<<hladnii1.getZapremina()<<endl;
    cout<<"Zapremina prvog toplog pica :"<<toplii1.getZapremina()<<endl;

    cout<<endl<<"Jos get metoda :)"<<endl<<endl<<endl;

    cout<<"Prvi kolac"<<endl;
    cout<<"Vrsta :";
    if(kolacc1.getVrsta()==plazmatorta)
        cout<<"Plazma torta"<<endl;
    else if(kolacc1.getVrsta()==coko_moko)
        cout<<"Coko moko torta"<<endl;
    else
        cout<<"Cheesecake"<<endl;
    cout<<"Preliv :";
    if(kolacc1.getPreliv()==sa_prelivom)
        cout<<"Sa prelivom"<<endl;
    else
        cout<<"Bez preliva"<<endl;
    cout<<"Slag :";
    if(kolacc1.getSlag()==sa_slagom)
        cout<<"Sa slagom"<<endl;
    else
        cout<<"Bez slaga"<<endl;
    cout<<"Stanje :";
    if(kolacc1.getStanje()==ispecen)
        cout<<"Ispecen"<<endl;
    else if(kolacc1.getStanje()==u_pripremi)
        cout<<"U pripremi"<<endl;
    else
        cout<<"Pece se"<<endl;

    cout<<"Drugi kolac"<<endl;
    cout<<"Vrsta :";
    if(kolacc3.getVrsta()==plazmatorta)
        cout<<"Plazma torta"<<endl;
    else if(kolacc2.getVrsta()==coko_moko)
        cout<<"Coko moko torta"<<endl;
    else
        cout<<"Cheesecake"<<endl;
    cout<<"Preliv :";
    if(kolacc3.getPreliv()==sa_prelivom)
        cout<<"Sa prelivom"<<endl;
    else
        cout<<"Bez preliva"<<endl;
    cout<<"Slag :";
    if(kolacc3.getSlag()==sa_slagom)
        cout<<"Sa slagom"<<endl;
    else
        cout<<"Bez slaga"<<endl;
    cout<<"Stanje :";
    if(kolacc3.getStanje()==ispecen)
        cout<<"Ispecen"<<endl;
    else if(kolacc3.getStanje()==u_pripremi)
        cout<<"U pripremi"<<endl;
    else
        cout<<"Pece se"<<endl;

    cout<<"Treci kolac"<<endl;
    cout<<"Vrsta :";
    if(kolacc4.getVrsta()==plazmatorta)
        cout<<"Plazma torta"<<endl;
    else if(kolacc4.getVrsta()==coko_moko)
        cout<<"Coko moko torta"<<endl;
    else
        cout<<"Cheesecake"<<endl;
    cout<<"Preliv :";
    if(kolacc4.getPreliv()==sa_prelivom)
        cout<<"Sa prelivom"<<endl;
    else
        cout<<"Bez preliva"<<endl;
    cout<<"Slag :";
    if(kolacc4.getSlag()==sa_slagom)
        cout<<"Sa slagom"<<endl;
    else
        cout<<"Bez slaga"<<endl;
    cout<<"Stanje :";
    if(kolacc4.getStanje()==ispecen)
        cout<<"Ispecen"<<endl;
    else if(kolacc4.getStanje()==u_pripremi)
        cout<<"U pripremi"<<endl;
    else
        cout<<"Pece se"<<endl;



        cout<<endl<<endl<<"Prvi sladoled"<<endl;
        cout<<"Ukus :";
        switch(sladoledd1.getUkus()){
        case jagoda:
            cout<<"Jagoda"<<endl;
            break;
        case cokolada:
            cout<<"Cokolada"<<endl;
            break;
        case vanila:
            cout<<"vanila"<<endl;
            break;
        case plazma:
            cout<<"Plazma"<<endl;
            break;
        case stracatela:
            cout<<"Stracatela"<<endl;
            break;
        case sumsko_voce:
            cout<<"Sumsko voce"<<endl;
            break;
        case tiramisu:
            cout<<"Tiramisu"<<endl;
            break;
        }
        cout<<"Preliv :";
        if(sladoledd1.getPreliv()==nema_preliva)
            cout<<"Bez preliva"<<endl;
        else if(sladoledd1.getPreliv()==cokoladni)
            cout<<"Cokoladni"<<endl;
        else if(sladoledd1.getPreliv()==karamela)
            cout<<"Karamela"<<endl;
        else
            cout<<"Vocni preliv"<<endl;
        cout<<"Velicina :";
        switch(sladoledd1.getVelicina()){
        case mali:
            cout<<"Mali sladoled"<<endl;
            break;
        case srednji:
            cout<<"Srednji sladoled"<<endl;
            break;
        case veliki:
            cout<<"Veliki sladoled"<<endl;
            break;
        }
        cout<<"Dodaci :";
        switch(sladoledd1.getDodatak()){
        case cokoladne_mrvice:
            cout<<"Cokoladne mrvice"<<endl;
            break;
        case zvezdice:
            cout<<"Zvezdice"<<endl;
            break;
        case sarene_mrvice:
            cout<<"Sarene mrvice"<<endl;
            break;
        case tropsko_voce:
            cout<<"Tropsko voce"<<endl;
            break;
        case bez_dodatka:
            cout<<"bez dodataka"<<endl;
            break;
        }


        cout<<endl<<endl<<"Prva slana palacinka"<<endl;
        cout<<"Tip slane palacinke :";
        if(slanaa1.getTip()==pica_palacinka)
            cout<<"Pica palacinka"<<endl;
        else
            cout<<"Vegetarijanska palacinka"<<endl;
        cout<<"Dodatak :";
        if(slanaa1.getDodaci()==mix_povrca)
            cout<<"Mix povrca"<<endl;
        else if(slanaa1.getDodaci()==bez_dodatka_slana)
            cout<<"Bez dodataka"<<endl;
        else
            cout<<"Sunka"<<endl;


        cout<<endl<<endl<<"Prva slatka palacinka"<<endl;
        cout<<"Tip :";
        if(slatkaa1.getTip()==rafaelo)
            cout<<"Rafaelo palacinka"<<endl;
        else if(slatkaa1.getTip()==mars)
            cout<<"Mars palacinka"<<endl;
        else
            cout<<"Snikers palacinka"<<endl;

        cout<<"Dodaci :";
        if(slatkaa1.getDodaci()==kokos)
            cout<<"Kokos"<<endl;
        else if(slatkaa1.getDodaci()==kikiriki)
            cout<<"Kikiriki"<<endl;
        else if(slatkaa1.getDodaci()==lesnik)
            cout<<"Lesnik"<<endl;
        else
            cout<<"Nema dodatka"<<endl;



        cout<<endl<<endl<<"Prvi topli napitak"<<endl;
        cout<<"Tip :";
        switch(toplii1.getTip()){
        case caj_brusnica:
            cout<<"Caj od brusnice"<<endl;
            break;
        case caj_kamilica:
            cout<<"Caj od kamilica"<<endl;
            break;
        case caj_limun:
            cout<<"Caj od limuna"<<endl;
            break;
        case caj_nana:
            cout<<"Caj od nane"<<endl;
            break;
        case caj_zeleni:
            cout<<"Zeleni cas"<<endl;
            break;
        case kafa:
            cout<<"Kafa"<<endl;
            break;
        case kapucino:
            cout<<"Kapucino"<<endl;
            break;
        case toplacokolada:
            cout<<"Topla cokolada"<<endl;
            break;
        }
        cout<<"Dodatak :";
        switch(toplii1.getDodatak()){
        case mleko:
            cout<<"Mleko"<<endl;
            break;
        case secer:
            cout<<"Secer"<<endl;
            break;
        case med:
            cout<<"Med"<<endl;
            break;
        case slag:
            cout<<"Slag"<<endl;
            break;
        case bez_dodatka_topli:
            cout<<"Bez dodatka"<<endl;
            break;
        case limun:
            cout<<"Limun"<<endl;
            break;
            }


        cout<<endl<<endl<<"Prvi topli napitak"<<endl;
        cout<<"Vrsta :";
        if(hladnii1.getTip()==sokovi)
            cout<<"Sok"<<endl;
        else if(hladnii1.getTip()==milksejk)
            cout<<"Milksejk"<<endl;
        else
            cout<<"Smoothie"<<endl;
        cout<<"Led :";
        if(hladnii1.getLed()==sa_ledom)
            cout<<"Sa ledom"<<endl;
        else
            cout<<"Bez leda"<<endl;



        Kolaci kolacc5;
    kolacc5=kolacc1;
    kolacc1==kolacc2;
    kolacc1!=kolacc2;
    kolacc1<=kolacc2;
    kolacc1>=kolacc2;

    Sladoled sladoledd5;
    sladoledd5=sladoledd1;
    sladoledd1==sladoledd2;
    sladoledd1!=sladoledd2;
    sladoledd1>=sladoledd2;
    sladoledd1<=sladoledd2;

    Slatkepalacinke slatkaa5;
    slatkaa5=slatkaa1;
    slatkaa1==slatkaa2;
    slatkaa1!=slatkaa2;
    slatkaa1>=slatkaa2;
    slatkaa1<=slatkaa2;

    Slanepalacinke slanaa5;
    slanaa5=slanaa1;
    slanaa1==slanaa2;
    slanaa1!=slanaa2;
    slanaa1>=slanaa2;
    slanaa1<=slanaa2;

    Toplinapici toplii4;
    toplii4=toplii1;
    toplii1==toplii2;
    toplii1!=toplii2;
    toplii1>=toplii2;
    toplii1<=toplii2;

    Hladninapici hladnii4;
    hladnii4=hladnii1;
    hladnii1==hladnii2;
    hladnii1!=hladnii2;
    hladnii1>=hladnii2;
    hladnii1<=hladnii2;
    return 0;
}
