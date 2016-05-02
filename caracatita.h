#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "aqua.h"
class Caracatita:public aqua{
private:
    int idAnimal=9;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Caracatita();
    Caracatita(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Caracatita x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in acvariul "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
