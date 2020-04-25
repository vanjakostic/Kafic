#ifndef ZAPOSLENI_HPP_INCLUDED
#define ZAPOSLENI_HPP_INCLUDED

enum Radnomesto {kuvar,konobar,spremacica};
class Zaposleni{
protected:
    DinString ime;
    DinString prezime;
    DinString brojtelefona;
    Radnomesto zanimanje;

public:
    virtual void setIme (DinString i)=0;
    virtual void setPrezime (DinString p)=0;
    virtual void setBrojTelefona (DinString bt)=0;
    virtual void setZanimanje (Radnomesto rm)=0;

    virtual DinString getIme()const {}
    virtual DinString getPrezime()const {}
    virtual DinString getBrojTelefona()const {}
    virtual Radnomesto getZanimanje()const {}

};


#endif // ZAPOSLENI_HPP_INCLUDED
