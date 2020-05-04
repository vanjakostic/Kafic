#ifndef KUHINJA_HPP_INCLUDED
#define KUHINJA_HPP_INCLUDED

#include "list.hpp"
#include "rerne.hpp"
#include "sporeti.hpp"
#include "escajg.hpp"
#include "posudjehrana.hpp"
#include "posudjepice.hpp"

class Kuhinja{
private:

    List<Rerne> rerna;
    List<Sporeti> sporet;
    Escajg e;
    Posudjehrana ph;
    Posudjepice pp;
    int kapacitetrerni;
    int kapacitetsporeta;

public:

    Kuhinja():Escajg(),Posudjehrana(),Posudjepice(),kapacitetrerni(5),kapacitetsporeta(5){}
    Kuhinja(int bo, int bd,int ot,int omt, int oc, int pt, int pmt, int pc, int kr, int ks):e(bo,bd), ph(ot,omt,oc,pt,pmt,pc),kapacitetrerni(kr),kapacitetsporeta(ks){}
    Kuhinja( Kuhinja &k): e(k.e),ph(k.ph),kapacitetrerni(k.kapacitetrerni), kapacitetsporeta(k.kapacitetsporeta){}

    bool dodajrernu(const Rerne& r){
            if(rerna.getVelicina()<kapacitetrerni){
                return rerna.add(rerna.getVelicina()+1,r);
            }
            return false;
        }

    bool dodajsporet(const Sporeti& s){
        if(sporet.getVelicina()<kapacitetsporeta){
            return sporet.add(sporet.getVelicina()+1,s);
        }
        return false;
    }

};


#endif // KUHINJA_HPP_INCLUDED
