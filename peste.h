#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "aqua.h"
class Peste:public aqua{
private:
    int idAnimal=7;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Peste();
    Peste(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Peste x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in acvariul "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
