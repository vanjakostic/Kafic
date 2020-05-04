#ifndef TOALET_HPP_INCLUDED
#define TOALET_HPP_INCLUDED

enum Stanjehemije {potrosena,nepotrosena};
class Toalet{
private:

    int brojtoaleta;
    int brojrolnipapira;
    int brojsapuna;
    Stanjehemije deterdzent;
    Stanjehemije zapod;
    Stanjehemije zastaklo;
    Stanjehemije zastolove;
    Stanjehemije odrzavanjetoaleta;
    Stanjehemije odrzavanjekuhinje;

public:
    Toalet(){
        brojtoaleta=4;
        brojrolnipapira=60;
        brojsapuna=10;
        deterdzent,zapod,zastaklo,odrzavanjekuhinje,odrzavanjetoaleta=nepotrosena;
        }


    Toalet(int bt, int brp, int bs, Stanjehemije d, Stanjehemije zp, Stanjehemije zso, Stanjehemije zse, Stanjehemije ot, Stanjehemije ok){
        brojtoaleta=bt;
        brojrolnipapira=brp;
        brojsapuna=bs;
        deterdzent=d;
        zapod=zp;
        zastaklo=zso;
        zastolove=zse;
        odrzavanjetoaleta=ot;
        odrzavanjekuhinje=ot;
        }

    Toalet(const Toalet &t){
        brojtoaleta=t.brojtoaleta;
        brojrolnipapira=t.brojrolnipapira;
        brojsapuna=t.brojsapuna;
        deterdzent=t.deterdzent;
        zapod=t.zapod;
        zastaklo=t.zastaklo;
        zastolove=t.zastolove;
        odrzavanjetoaleta=t.odrzavanjetoaleta;
        odrzavanjekuhinje=t.odrzavanjekuhinje;
        }

    void setBrojtoaleta(int bt)const {brojtoaleta=bt; }
    void setBrojrolnipapira(int brp)const {brojrolnipapira=brp; }
    void setBrojsapuna(int bs)const {brojsapuna=bs; }
    void setDeterdzent(Stanjehemije d)const  {deterdzent=d; }
    void setZapod (Stanjehemije zp)const {zapod=zp; }
    void setZastaklo (Stanjehemije zso)const {zastaklo=zso; }
    void setZastolove (Stanjehemije zse)const {zastolove=zse; }
    void setOdrzavanjetoaleta (Stanjehemije ot)const {odrzavanjetoaleta=ot; }
    void setOdrzavanjekuhinje (Stanjehemije ok)const {odrzavanjekuhinje=ok; }


    int getBrojtoaleta(){return brojtoaleta; }
    int getBrojrolnipapira(){return brojrolnipapira; }
    int getBrojsapuna(){return brojsapuna; }
    Stanjehemije getDeterdzent(){return deterdzent; }
    Stanjehemije getZapod(){return zapod; }
    Stanjehemije getZastaklo(){return zastaklo; }
    Stanjehemije getZastolove(){return zastolove; }
    Stanjehemije getOdrzavanjetoaleta(){return odrzavanjetoaleta; }
    Stanjehemije getOdrzavanjekuhinje(){return odrzavanjekuhinje; }

    void kupitpapir(){
        brojrolnipapira+=20;
    }

    bool potrošipapir(){
        if(brojrolnipapira>=20){
            brojrolnipapira-=20;
            return true;
        }else
        return false;
    }

    void kupisapun(){
        brojsapuna+=5;
    }

    bool potrsisapun(){
        if(brojsapuna>=5){
            brojsapuna-=5;
            return true;
        }else
        return false;
    }

    bool potrosideterdzent(){
        if(deterdzent==nepotrosena){
            deterdzent=potrosena;
            return true;
        }
        else
            return false;
    }

    bool kupideterdzent(){
        if(deterdzent==potrosena){
            deterdzent=nepotrosena;
            return true;
        }
        else
            return false;
    }

    bool potrosizapod(){
        if(zapod==nepotrosena){
            zapod=potrosena;
            return true;
        }
        else
            return false;
    }

    bool kupizapod(){
        if(zapod==potrosena){
            zapod=nepotrosena;
            return true;
        }
        else
            return false;
    }

    bool potrosizastaklo(){
        if(zastaklo==nepotrosena){
            zastaklo=potrosena;
            return true;
        }
        else
            return false;
    }

    bool kupizastaklo(){
        if(zastaklo==potrosena){
            zastaklo=nepotrosena;
            return true;
        }
        else
            return false;
    }

    bool potrosizastolove(){
        if(zastolove==nepotrosena){
            zastolove=potrosena;
            return true;
        }
        else
            return false;
    }

    bool kupizastolove(){
        if(zastolove==potrosena){
            zastolove=nepotrosena;
            return true;
        }
        else
            return false;
    }

    bool potrosiodrzavanjetoaleta(){
        if(odrzavanjetoaleta==nepotrosena){
            odrzavanjetoaleta=potrosena;
            return true;
        }
        else
            return false;
    }

    bool kupiodrzavanjetoaleta(){
        if(odrzavanjetoaleta==potrosena){
            odrzavanjetoaleta=nepotrosena;
            return true;
        }
        else
            return false;
    }

    bool potrosiodrzavanjekuhinje(){
        if(odrzavanjekuhinje==nepotrosena){
            odrzavanjekuhinje=potrosena;
            return true;
        }
        else
            return false;
    }

    bool kupiodrzavanjetoaleta(){
        if(odrzavanjekuhinje==potrosena){
            odrzavanjekuhinje=nepotrosena;
            return true;
        }
        else
            return false;
    }
};



#endif // TOALET_HPP_INCLUDED
