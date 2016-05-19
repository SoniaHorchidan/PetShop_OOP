#pragma once
#include <iostream>
using namespace std;
#include <iostream>
#include "pasari.h"
class Papagal:public Pasari{
private:
    int idAnimal=1;
public:
    int getIDAnimal();
    std::string facCaAnimalu();
    Papagal();
    Papagal(std::string ss,int x);
    friend ostream& operator<<(ostream& out,Papagal x)
    {
        out<<"Eu sunt "<<x.getNume()<<". Fericirea mea e "<<x.getFericeala()<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in colivia "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
