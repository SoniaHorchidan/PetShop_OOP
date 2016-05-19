#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "Pasari.h"
class Corb:public Pasari{
private:
    int idAnimal=3;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Corb();
    Corb(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Corb x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in colivia "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
