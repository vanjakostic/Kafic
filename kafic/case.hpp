#ifndef CASE_HPP_INCLUDED
#define CASE_HPP_INCLUDED

enum stanjecase{cista,prljava};
class Case{
private:
    stanjecase stanje;

public:
    Case(){stanje=cista; }
    Case(stanjecase s){stanje=s;}
    Case(const Case &c){stanje=c.stanje; }

    void setCasu(stanjecase s){stanje=s; }
    stanjecase getCasu(){return stanje; }

    bool opericasu(){
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


#endif // CASE_HPP_INCLUDED
