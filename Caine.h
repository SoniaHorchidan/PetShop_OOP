#ifndef CAINE_H
#define CAINE_H

#include "Mamifer.h"
#include <string.h>


class Caine : public mamifer
{
    private:
        int IDAnimal=11;
    public:
        Caine();
        Caine(std::string name, int price):mamifer(name,price){ IDAnimal=11;}
        std::string facCaAnimalu();
        int getIDAnimal();
        friend ostream& operator <<(ostream& out, Caine X)
        {
            out<<"\nEu sunt cainele "<<X.getNume()<<'.';
            out<<" Fericirea mea e "<<X.getFericeala()<<"/10.";
            out<<" Pretul meu e "<<X.getPret()<<" lei.";
            out<<" Stau in cusca "<<X.getIDCusca()<<". ";
            out<<X.facCaAnimalu();
            return out;
        }
};


#endif // CAINE_H
