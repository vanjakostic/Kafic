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

    void ispisrerni(){
        Rerne r;
        cout<<endl<<"Rerne: " << endl;
        cout<<"----------"<<endl;

        for (int i=1;i<=rerna.getVelicina();i++){
            cout<<"Rerna broj "<<i<<":";
            rerna.read(i,r);

            cout<<endl;
        }
    }

    friend ostream& operator<<(ostream& out,Kuhinja &k){
        out<<"Kuhinja"<<endl<<"----------"<<endl;
        out<<"Rerne:"<<endl;
    }

};


#endif // KUHINJA_HPP_INCLUDED
