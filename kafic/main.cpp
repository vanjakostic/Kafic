#include <iostream>

using namespace std;

#include "zaposleni.hpp"
#include "kuhinja.hpp"
#include "prostorije.hpp"

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
    Sladoled s1();
    Sladoled s2("Sladoled",120,250,kornet,jagoda,srednji,zvezdice,karamela);

    Kolaci k1();
    Kolaci k2("Kolac",140,280,mali_tanjir,cheesecake,bez_preliva,bez_slaga,ispecen);

    Slanepalacinke slanep1();
    Slanepalacinke slanep2("Slana palacinka",150,300,tanjir,slane,palacinka_se_ispekla,vegetarijanska_palacinka, bez_dodatka_slana);

    Slatkepalacinke slatkep1();
    Slatkepalacinke slatkep2("Slatka palacinka",200,500,tanjir,slatke,palacinka_se_ispekla,snikers, bez_dodatka);

    Hladninapici h1();
    Hladninapici h2("Hladna pica",75,100,casa,sokovi,sa_ledom,4);

    Toplinapici t1();
    Toplinapici t2("Topli napici",200,150,solja,kafa,secer);


    return 0;
}
