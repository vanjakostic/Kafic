#ifndef POSUDJEHRANA_HPP_INCLUDED
#define POSUDJEHRANA_HPP_INCLUDED

//tanjiri,tanjirici,cinije
//operi tanjir,tanjiric,ciniju
//dodaj po jedan,dodaj komplet,razbij
//operi,isprljaj

class Posudjehrana{
private:
    int opranitanjiri;
    int opranitanjirici;
    int opranecinije;

    int prljavitanjiri;
    int prljavitanjirici;
    int prljavecinije;

public:
    Posudjehrana(){
        opranecinije=40;
        opranitanjiri=40;
        opranitanjirici=40;
        prljavecinije=0;
        prljavitanjiri=0;
        prljavitanjirici=0;
    }
    Posudjehrana(int oc, int ot, int omt, int pc, int pt, int pmt){
        opranecinije=oc;
        opranitanjiri=ot;
        opranitanjirici=omt;
        prljavecinije=pc;
        prljavitanjiri=pt;
        prljavitanjirici=pmt;

    }
    Posudjehrana(const Posudjehrana &ph){
        opranecinije=ph.opranecinije;
        opranitanjiri=ph.opranitanjiri;
        opranitanjirici=ph.opranitanjirici;
        prljavecinije=ph.prljavecinije;
        prljavitanjiri=ph.prljavitanjiri;
        prljavitanjirici=ph.prljavitanjirici;
        }

    void setOpranecinije(int oc){opranecinije=oc; }
    void setOpranitanjiri(int ot){opranitanjiri=ot; }
    void setOpranitanjirici(int omt){opranitanjirici=omt; }
    void setPrljavecinije(int pc){prljavecinije=pc; }
    void setPrljavitanjiri(int pt){prljavitanjiri=pt; }
    void setPrljavitanjirici(int pmt){prljavitanjirici=pmt; }

    int getOpranecinije(){return opranecinije; }
    int getOpranitanjiri(){return opranitanjiri; }
    int getOpranitanjirici(){return opranitanjirici; }
    int getPrljavecinije(){return prljavecinije; }
    int getPrljavitanjiri(){return prljavitanjiri; }
    int getPrljavitanjirici(){return prljavitanjirici; }

    bool opericiniju(){
        if(prljavecinije>0){
            prljavecinije--;
            opranecinije++;
            return true;
        }else
        return false;
    }

    bool operitanjir(){
        if(prljavitanjiri>0){
            prljavitanjiri--;
            opranitanjiri++;
            return true;
        }else
        return false;
    }

    bool operitanjiric(){
        if(prljavitanjirici>0){
            prljavitanjirici--;
            opranitanjirici++;
            return true;
        }else
        return false;
    }

    bool isprljajciniju(){
        if(opranecinije>0){
            opranecinije--;
            prljavecinije++;
            return true;
        }else
        return false;
    }

    bool isprljajtanjir(){
        if(opranitanjiri>0){
            opranitanjiri--;
            prljavitanjiri++;
            return true;
        }else
        return false;
    }

    bool isprljajtanjiric(){
        if(opranitanjirici>0){
            opranitanjirici--;
            prljavitanjirici++;
            return true;
        }else
        return false;
    }

    bool razbijopranuciniju(){
        if(opranecinije>0){
            opranecinije--;
            return true;
        }else
        return false;
    }

    bool razbijprljavuciniju(){
        if(prljavecinije>0){
            prljavecinije--;
            return true;
        }else
        return false;
    }

    bool razbijoprantanjir(){
        if(opranitanjiri>0){
            opranitanjiri--;
            return true;
        }else
        return false;
    }

    bool razbijprljavitanjir(){
        if(prljavitanjiri>0){
            prljavitanjiri--;
            return true;
        }else
        return false;
    }

    bool razbijoprantanjiric(){
        if(opranitanjirici>0){
            opranitanjirici--;
            return true;
        }else
        return false;
    }

    bool razbijprljavitanjiric(){
        if(prljavitanjirici>0){
            prljavitanjirici--;
            return true;
        }else
        return false;
    }

    void kupicinije(){
        opranecinije+=20;
    }
    void kupitanjire(){
        opranitanjiri+=20;
    }
    void kupitanjirice(){
        opranitanjirici+=20;
    }

    int getUkupnocinije(){return prljavecinije+opranecinije; }
    int getUkupnotanjiri(){return prljavitanjiri+opranitanjiri; }
    int getUkupnotanjirici(){return prljavitanjirici+opranitanjirici; }

    void operisve(){
        opranecinije+=prljavecinije;
        opranitanjiri+=prljavitanjiri;
        opranitanjirici+=prljavitanjirici;
        prljavecinije=0;
        prljavitanjiri=0;
        prljavitanjirici=0;
    }


};


#endif // POSUDJEHRANA_HPP_INCLUDED
