#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "mamifere.h"
class Caine:public Mamifere{
private:
    int idAnimal=11;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Caine();
    Caine(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Caine x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
