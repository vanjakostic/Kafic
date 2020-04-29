#ifndef GLAVNASOBA_HPP_INCLUDED
#define GLAVNASOBA_HPP_INCLUDED

#include "stolovi.hpp"
#include "list.hpp"
class Glavnasoba{
private:

    List<Stolovi> sto;
    int kapacitet;
public:

    Glavnasoba(int k):kapacitet(k){}

    bool dodaj(const Stolovi& s){
        if(sto.getVelicina()<kapacitet){
            return sto.add(sto.getVelicina()+1,s);
        }
        return false;
    }

    void ispis() const {
        Stolovi s;
        cout<<endl<<"Stolovi: " << endl;

        for (int i=1;i<=sto.getVelicina();i++){
            cout<<"Sto broj "<<i<<":";
            sto.read(i, s);
            s.predstaviSe();
            cout<<endl;
        }
    }




};


#endif // GLAVNASOBA_HPP_INCLUDED
