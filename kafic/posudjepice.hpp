#ifndef POSUDJEPICE_HPP_INCLUDED
#define POSUDJEPICE_HPP_INCLUDED

#include "list.hpp"
#include "case.hpp"
#include "solje.hpp"

class Posudjepice{
private:
    List<Case> casaa;
    List<Solje> soljaa;

public:

    void dodajcasu(const Case& c){
            return casaa.add(casaa.getVelicina()+1,c);
    }

    void dodajsolju(const Solje& s){
            return soljaa.add(soljaa.getVelicina()+1,s);
    }

    void ispiscase() const {
        Case c;
        cout<<endl<<"Case: " << endl;

        for (int i=1;i<=casaa.getVelicina();i++){
            cout<<"Casa broj "<<i<<":";
            casaa.read(i, c);
            c.predstaviSe();
            cout<<endl;
        }
    }

    void ispissolje() const {
        Solje s;
        cout<<endl<<"Solje: " << endl;

        for (int i=1;i<=soljaa.getVelicina();i++){
            cout<<"Solja broj "<<i<<":";
            soljaa.read(i, s);
            s.predstaviSe();
            cout<<endl;
        }
    }

    void razbijcasu(){
        remove(casaa.getVelicina())
    }

    void razbijsolju(){
        remove(soljaa.getVelicina())
    }

};




#endif // POSUDJEPICE_HPP_INCLUDED
