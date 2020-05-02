#ifndef RERNE_HPP_INCLUDED
#define RERNE_HPP_INCLUDED

enum Stanjererni{iskljucena,ukljucena,pokvarena};
class Rerne{
private:
    Stanjererni stanje;
    int temperatura;

public:
    Rerne(){stanje=iskljucena; temperatura=0; }
    Rerne(int temperatura,Stanjererni s){ temperatura=t;
        if(temperatura==0)
            stanje=iskljucena;
        else
            stanje=ukljucena;
     }
    Rerne(const Rerne &s){stanje=s.stanje; temperatura=s.temperatura; }

    Stanjererni getStanje()const {return stanje;}
    int getTemperatura() const {return temperatura; }

    void setStanje(Stanjererni s){stanje=s; }
    void setTemperatura(int t){temperatura=t; }

    bool pokvari(){
        if(stanje!=pokvarena){
            stanje=pokvarena;
            temperatura=0;
            return true;
        }else
        return false;
    }

    bool popravi(){
        if(stanje==pokvarena){
            stanje=iskljucena;
            temperatura=0;
            return true;
        }else
        return false;
    }

    bool ukljuci(){
        if(stanje==iskljucena){
            stanje=ukljucena;
            temperatura=100;
            return true;
        }
    }

    bool iskljuci(){
        if(stanje==ukljucena){
            stanje=iskljucena;
            temperatura=0;
            return true;
        }else
        return false;
    }

    bool povecajtemperaturu(){
        if(temperatura<=250 && stanje==ukljucena){
            temperatura+=50;
            return true;
        }else
        return false;
    }

    bool smanjitemperatura(){
        if(temperatura>=50 && stanje==ukljucena){
            temperatura-=50;
            return true;
        }else
        return false;
    }




};


#endif // RERNE_HPP_INCLUDED
