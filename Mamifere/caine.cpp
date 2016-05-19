#pragma once
#include "caine.h"
#include <iostream>
using namespace std;
#include <iostream>

int Caine::getIDAnimal(){
    return 11;
}
Caine::Caine()
{
    this->setPret(10);
    this->setFericeala(10);
}
Caine::Caine(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Caine::facCaAnimalu(){
    return "Wooof-woof-woof\n";
}


