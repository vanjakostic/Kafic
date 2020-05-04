#ifndef SOLJE_HPP_INCLUDED
#define SOLJE_HPP_INCLUDED

enum stanjesolje{cistasolja,prljavasolja};
class Solje{
private:
    stanjesolje stanje;

public:
    Solje(){stanje=cistasolja; }
    Solje( stanjesolje s){stanje=s;}
    Solje(const Solje &c){stanje=c.stanje; }

    void setSolju(stanjesolje s){stanje=s; }
    stanjesolje getSolju(){return stanje; }

    bool operisolju(){
        if(stanje==prljavasolja){
            stanje=cistasolja;
            return true;
        }else
        return false;
    }

    bool isprljaj(){
        if(stanje==cistasolja){
            stanje=prljavasolja;
            return true;
        }else
        return false;
    }

};


#endif // SOLJE_HPP_INCLUDED
