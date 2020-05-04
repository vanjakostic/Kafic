#ifndef KASA_HPP_INCLUDED
#define KASA_HPP_INCLUDED

class Kasa{
private:
    int trenutnostanje;

public:
    Kasa(){trenutnostanje=0; }
    Kasa(int t){trenutnostanje=t; }
    Kasa(const Kasa &k){trenutnostanje=k.trenutnostanje;}

    void setKasa(int t){trenutnostanje=t; }
    int getKasa(){return trenutnostanje; }

    void dodajukasu(int n){
        trenutnostanje+=n;
    }

    ostream& operator<<(ostream& out, const Kasa &k){
        cout<<"Trenutno stanjeu kasi :";
        cout<<k.getKasa<<endl;
        return out;
    }


};


#endif // KASA_HPP_INCLUDED
