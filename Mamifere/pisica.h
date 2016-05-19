#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "mamifere.h"
class Pisica:public Mamifere{
private:
    int idAnimal=10;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Pisica();
    Pisica(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Pisica x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<" . " <<x.facCaAnimalu();
        return out;
    }
};
