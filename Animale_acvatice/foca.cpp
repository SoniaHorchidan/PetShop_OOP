#pragma once
#include "foca.h"
#include <iostream>
using namespace std;
#include <iostream>

int Foca::getIDAnimal(){
    return 8;
}
Foca::Foca()
{
    this->setPret(10);
    this->setFericeala(10);
}
Foca::Foca(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Foca::facCaAnimalu(){
    return "Sunt o foca si fac \"Rarrararararaaraaaa\"\n";
}

