#ifndef HRANA_HPP_INCLUDED
#define HRANA_HPP_INCLUDED

#include "proizvodi.hpp"

enum Serviranjehrane {tanjir, mali_tanjir, kornet, cinija};

class Hrana : public Proizvodi{
protected:
    Serviranjehrane posuda;
public:

    virtual void setPosuda(Serviranjehrane sh)=0;
    virtual Serviranjehrane()const{}

};


#endif // HRANA_HPP_INCLUDED
