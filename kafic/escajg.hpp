#ifndef ESCAJG_HPP_INCLUDED
#define ESCAJG_HPP_INCLUDED

//get,set,baci,kupi,osteti

class Escajg{
private:

    int brojostecenih; //broj ostecenih KOMPLETA
    int brojdobrih; //broj ostecenih KOMPLETA

public:
    Escajg(){brojdobrih=15; brojostecenih=0;}
    Escajg(int bo, int bd){brojostecenih=bo; brojdobrih=bd; }
    Escajg(const Escajg &e){brojdobrih=e.brojdobrih; brojostecenih=e.brojostecenih; }

    void setBrojotecenih(int bo){brojostecenih=bo; }
    void setBrojdobrih(int bd){brojdobrih=bd; }

    int getBrojostecenih(){return brojostecenih; }
    int getBrojdobrih(){return brojdobrih; }
    int getUkupno(){return brojdobrih+brojostecenih; }

    bool baci(){
        if(brojostecenih>=1){
            brojostecenih--;
            return true;
        }else
        return false;
    }

    void kupi(){
        brojdobrih++;
    }

    bool osteti(){
        if(brojdobrih>=0){
            brojdobrih--;
            brojostecenih++;
            return true;
        }else
        return false;
    }

};

#endif // ESCAJG_HPP_INCLUDED
