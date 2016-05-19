#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "mamifere.h"
class Iepure:public Mamifere{
private:
    int idAnimal=12;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Iepure();
    Iepure(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Iepure x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<" . " <<x.facCaAnimalu();
        return out;
    }
};
