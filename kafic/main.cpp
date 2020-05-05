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



    return 0;
}
