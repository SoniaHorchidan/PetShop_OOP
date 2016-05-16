#ifndef PISICA_H
#define PISICA_H

#include "Mamifer.h"
#include <string.h>
#include <iostream>

class Pisica : public mamifer
{
     private:
        int IDAnimal;
    public:
        Pisica();
        Pisica(std::string name, int price):mamifer(name,price){ IDAnimal=10;}
        int getIDAnimal();
        std::string facCaAnimalu();
        friend ostream& operator <<(ostream& out, Pisica X)
        {
            out<<"\nEu sunt pisica "<<X.getNume()<<'.';
            out<<" Fericirea mea e "<<X.getFericeala()<<"/10.";
            out<<" Pretul meu e "<<X.getPret()<<" lei.";
            out<<" Stau in cusca "<<X.getIDCusca()<<". ";
            out<<X.facCaAnimalu();
            return out;
        }
};


#endif // PISICA_H
