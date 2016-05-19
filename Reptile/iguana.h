#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "reptile.h"
class Iguana:public Reptile{
private:
    int idAnimal=5;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Iguana();
    Iguana(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Iguana x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<" si uneori pe umarul casierului. " <<x.facCaAnimalu();
        return out;
    }
};
