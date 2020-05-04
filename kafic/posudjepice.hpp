#ifndef POSUDJEPICE_HPP_INCLUDED
#define POSUDJEPICE_HPP_INCLUDED

#include "list.hpp"
#include "case.hpp"
#include "solje.hpp"

class Posudjepice{
private:
    List<Case> casaa;
    List<Solje> soljaa;
    int kc;
    int ks;

public:

    bool dodajcasu(const Case& c){
        if(casaa.getVelicina()<kc){
            return casaa.add(casaa.getVelicina()+1,c);
            return true;
        }else
        return false;
    }

   bool dodajsolju(const Solje& s){
        if(soljaa.getVelicina()<ks){
            return soljaa.add(soljaa.getVelicina()+1,s);
            return true;
        }else
        return false;
    }

    void ispiscase(){
        Case c;
        cout<<endl<<"Case: " << endl;

        for (int i=1;i<=casaa.getVelicina();i++){
            cout<<"Casa broj "<<i<<":";
            casaa.read(i, c);
            cout<<endl;
        }
    }

    void ispissolje(){
        Solje s;
        cout<<endl<<"Solje: " << endl;

        for (int i=1;i<=soljaa.getVelicina();i++){
            cout<<"Solja broj "<<i<<":";
            soljaa.read(i, s);
            cout<<endl;
        }
    }

    /*bool razbijcasu(int n){
        remove(n);
    }

    void razbijsolju(int n){
        remove(n);
    }
*/
};




#endif // POSUDJEPICE_HPP_INCLUDED
