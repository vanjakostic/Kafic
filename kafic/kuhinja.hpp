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
    int brojrerni;
    List<Sporeti> sporet;
    Escajg e;
    Posudjehrana ph;
    Posudjepice pp;
    int kapacitetrerni;
    int kapacitetsporeta;

public:

    Kuhinja():e(),ph(),pp(),kapacitetrerni(5),kapacitetsporeta(5){}
    Kuhinja(int bo, int bd,int ot,int omt, int oc, int pt, int pmt, int pc, int kr, int ks):e(bo,bd), ph(ot,omt,oc,pt,pmt,pc),kapacitetrerni(kr),kapacitetsporeta(ks){}
    Kuhinja( Kuhinja &k): e(k.e),ph(k.ph),kapacitetrerni(k.kapacitetrerni), kapacitetsporeta(k.kapacitetsporeta){}

    bool dodajrernu(const Rerne& r){
            if(rerna.size()<kapacitetrerni){
                return rerna.add(rerna.size()+1,r);
            }
            return false;
        }

    bool dodajsporet(const Sporeti& s){
        if(sporet.size()<kapacitetsporeta){
            return sporet.add(sporet.size()+1,s);
        }
        return false;
    }

    void ispis(Escajg e, Posudjehrana ph, Posudjepice pp){
        cout<<endl<<"KUHINJA~~~~~KUHINJA~~~~~KUHINJA"<<endl;

        Rerne r;
        cout<<endl<<"Rerne: " << endl;
        cout<<"----------"<<endl;

        for (int i=1;i<=rerna.size();i++){
            cout<<"Rerna broj "<<i<<":"<<endl;
            rerna.read(i,r);
            cout<<"Stanje :"<<endl;
            if(r.getStanje()==ukljucena)
                cout<<"Ukljucena"<<endl;
            else
                cout<<"Iskljucena"<<endl;
            cout<<"Temperatura rerne :"<<r.getTemperatura()<<endl;

            cout<<endl;
        }

        Sporeti s;
        cout<<endl<<"Sporeti: " << endl;
        cout<<"----------"<<endl;

        for (int i=1;i<=sporet.size();i++){
            cout<<"Sporet broj "<<i<<":"<<endl;
            sporet.read(i,s);
            cout<<"Stanje :";
            if(s.getStanje()==ukljucen)
                cout<<"Ukljucen"<<endl;
            else
                cout<<"Iskljucen"<<endl;
            cout<<"Temperatura sporeta :"<<s.getTemperatura()<<endl;

            cout<<endl;
        }

        cout<<endl<<"Escajg: "<<endl;
        cout<<"----------"<<endl;
        cout<<"Broj dobrih :"<<e.getBrojdobrih()<<endl;
        cout<<"Broj ostecenih :"<<e.getBrojostecenih()<<endl<<endl;

        cout<<endl<<"Posudje za hranu: "<<endl;
        cout<<"----------"<<endl;
        cout<<"Broj opranih tanjira:"<<ph.getOpranitanjiri()<<endl<<"Broj prljavih tanjira:"<<ph.getPrljavitanjiri()<<endl;
        cout<<"Broj opranih tanjirica:"<<ph.getOpranitanjirici()<<endl<<"Broj prljavih tanjirica:"<<ph.getPrljavitanjirici()<<endl;
        cout<<"Broj opranih cinija:"<<ph.getOpranecinije()<<endl<<"Broj prljavih cinija:"<<ph.getPrljavecinije()<<endl<<endl;


        pp.ispisposudjepice();
    }

};


#endif // KUHINJA_HPP_INCLUDED
