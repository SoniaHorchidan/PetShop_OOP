#pragma once
#include <string.h>
using namespace std;
class animal{
private:
    int idCusca;
    int fericeala;
    std::string nume;
    int pret;
public:
    int getIDCusca();
    void setIDCusca(int x);
    int getFericeala();
    void setFericeala(int x);
    int getPret();
    void setPret(int x);
    std::string getNume();
    void setNume(std::string x);
    std::string facCaAnimalu();
    animal();
    animal(std::string x,int pr);
    friend ostream& operator<<(ostream& out,animal x)
    {
        out<<"Eu sunt "<<x.nume<<". Fericirea mea e "<<x.fericeala<<"/10. Pretul meu e "<<x.getPret()<<"lei . Stau in cusca "<<x.getIDCusca()<<". " <<x.facCaAnimalu();
        return out;
    }
};
