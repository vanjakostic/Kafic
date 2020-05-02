#ifndef SOLJE_HPP_INCLUDED
#define SOLJE_HPP_INCLUDED

enum stanjesolje{cista,prljava};
class Solje{
private:
    stanjesolje stanje;

public:
    Solje(){stanje=cista; }
    Solje( stanjesolje s){stanje=s;}
    Solje(const Solje &c){stanje=c.stanje; }

    void setSolju(stanjesolje s){stanje=s; }
    stanjesolje getSolju(){return stanje; }

    bool operisolju(){
        if(stanje==prljava){
            stanje=cista;
            return true;
        }else
        return false;
    }

    bool isprljaj(){
        if(stanje==cista){
            stanje=prljava;
            return true;
        }else
        return false;
    }

};


#endif // SOLJE_HPP_INCLUDED
