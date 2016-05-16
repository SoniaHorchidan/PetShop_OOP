#ifndef IEPURE_H
#define IEPURE_H

#include "Mamifer.h"
#include <string.h>

class Iepure : public mamifer
{
    private:
        int IDAnimal=12;
    public:
        Iepure();
        Iepure(std::string name, int price):mamifer(name,price){ IDAnimal=12;}
        std::string facCaAnimalu();
        int getIDAnimal();
        friend ostream& operator <<(ostream& out, Iepure X)
        {
            out<<"\nEu sunt iepurele "<<X.getNume()<<'.';
            out<<" Fericirea mea e "<<X.getFericeala()<<"/10.";
            out<<" Pretul meu e "<<X.getPret()<<" lei.";
            out<<" Stau in cusca "<<X.getIDCusca()<<". ";
            out<<X.facCaAnimalu();
            return out;
        }
};


#endif // IEPURE_H
