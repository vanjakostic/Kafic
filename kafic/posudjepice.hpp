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

    Posudjepice(){kc=80; ks=80; }
    bool dodajcasu(const Case& c){
        if(casaa.size()<kc){
            return casaa.add(casaa.size()+1,c);
            return true;
        }else
        return false;
    }

   bool dodajsolju(const Solje& s){
        if(soljaa.size()<ks){
            return soljaa.add(soljaa.size()+1,s);
            return true;
        }else
        return false;
    }


    void ispisposudjepice(){
        Solje s;
        cout<<endl<<"Solje: " << endl;
        cout<<"----------"<<endl;
        for (int i=1;i<=soljaa.size();i++){
            cout<<"Solja broj "<<i<<":";
            soljaa.read(i, s);
            if(s.getSolju()==prljavasolja)
                cout<<"prljava"<<endl;
            else
                cout<<"cista"<<endl;
        }

        Case c;
        cout<<endl<<"Case: " << endl;
        cout<<"----------"<<endl;

        for (int i=1;i<=casaa.size();i++){
            cout<<"Casa broj "<<i<<":";
            casaa.read(i, c);
            if(c.getCasu()==prljava)
                cout<<"prljava"<<endl;
            else
                cout<<"cista"<<endl;
        }
    }

    void razbijCasu(const Case &c,int n){
        casaa.remove(n);
    }

    void razbijSolju(const Solje &s,int n){
        soljaa.remove(n);
    }

};




#endif // POSUDJEPICE_HPP_INCLUDED
