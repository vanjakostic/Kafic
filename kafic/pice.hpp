#ifndef PICE_HPP_INCLUDED
#define PICE_HPP_INCLUDED

#include "proizvodi.hpp"
enum Serviranjepica{solja,casa};

class Pice:public Proizvodi{
protected:
    Serviranjepica posuda;

public:

    virtual void setPosuda(Serviranjepica sp)=0;
    virtual Serviranjepica()const{}
};



#endif // PICE_HPP_INCLUDED
