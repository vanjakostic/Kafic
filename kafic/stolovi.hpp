#ifndef STOLOVI_HPP_INCLUDED
#define STOLOVI_HPP_INCLUDED

enum Stanjestola{zauzet,slobodan};

class Stolovi{
private:
    Stanjestola stanje;

public:

    Stolovi(){stanje=slobodan; }
    Stolovi(Stanjestola s){stanje=s; }
    Stolovi(const Stolovi &s){stanje=s.stanje; }

    bool zauzmi(){
        if(stanje==slobodan){
            stanje=zauzet;
            return true;
        }else
        return false;
    }

    bool oslobodi(){
        if(stanje==zauzet){
            stanje=slobodan;
            return true;

        }else
        return false;
    }

};


#endif // STOLOVI_HPP_INCLUDED
