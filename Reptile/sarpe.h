#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "reptile.h"
class Sarpe:public Reptile{
private:
    int idAnimal=4;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Sarpe();
    Sarpe(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Sarpe x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
