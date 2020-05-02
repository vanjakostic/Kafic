#ifndef SPORETI_HPP_INCLUDED
#define SPORETI_HPP_INCLUDED

enum Stanjesporeta{iskljucen,ukljucen,pokvaren};
class Sporeti{
private:
    Stanjesporeta stanje;
    int temperatura;

public:
    Sporeti(){stanje=iskljucen; temperatura=0; }
    Sporeti(int temperatura,Stanjesporeta s){
        temperatura=t;
        if(temperatura==0)
            stanje=iskljucen;
        else
            stanje=ukljucen;
     }
    Sporeti(const Sporeti &s){stanje=s.stanje; temperatura=s.temperatura; }

    Stanjesporeta getStanje()const {return stanje;}
    int getTemperatura() const {return temperatura; }

    void setStanje(Stanjesporeta s){stanje=s; }
    void setTemperatura(int t){temperatura=t; }

    bool pokvari(){
        if(stanje!=pokvaren){
            stanje=pokvaren;
            temperatura=0;
            return true;
        }else
        return false;
    }

    bool popravi(){
        if(stanje==pokvaren){
            stanje=iskljucen;
            temperatura=0;
            return true;
        }else
        return false;
    }

    bool ukljuci(){
        if(stanje==iskljucen){
            stanje=ukljucen;
            temperatura=100;
            return true;
        }
    }

    bool iskljuci(){
        if(stanje==ukljucen){
            stanje=iskljucen;
            temperatura=0;
            return true;
        }else
        return false;
    }

    bool povecajtemperaturu(){
        if(temperatura<=8 && stanje==ukljucen){
            temperatura++;
            return true;
        }else
        return false;
    }

    bool smanjitemperatura(){
        if(temperatura>=1 && stanje==ukljucen){
            temperatura--;
            return true;
        }else
        return false;
    }




};


#endif




















