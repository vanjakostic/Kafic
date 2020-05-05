#ifndef PROSTORIJE_HPP_INCLUDED
#define PROSTORIJE_HPP_INCLUDED

#include "toalet.hpp"
#include "glavnasoba.hpp"
#include "kuhinja.hpp"

class Prostorije{
private:
    Toalet t;
    Kuhinja k;
    Glavnasoba g;

public:
    Prostorije(): t(),k(),g(){}
    Prostorije(int bt, int brp, int bs, Stanjehemije d, Stanjehemije zp, Stanjehemije zso, Stanjehemije zse, Stanjehemije ot, Stanjehemije ok,
               int bo, int bd,int otanjiri,int omt, int oc, int pt, int pmt, int pc, int kr, int ks,
               int k):
               t(bt,brp,bs,d,zp,zso,zse,ot,ok), k(bo,bd,otanjiri,omt,oc,pt,pmt,pc,kr,ks), g(k) {}
    Prostorije(Prostorije &p):t(p.t),k(p.k),g(p.g){}


};

#endif // PROSTORIJE_HPP_INCLUDED
