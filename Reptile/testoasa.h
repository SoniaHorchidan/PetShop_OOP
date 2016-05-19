#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "Reptile.h"
class Testoasa:public Reptile{
private:
    int idAnimal=6;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Testoasa();
    Testoasa(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Testoasa x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<" . " <<x.facCaAnimalu();
        return out;
    }
};
