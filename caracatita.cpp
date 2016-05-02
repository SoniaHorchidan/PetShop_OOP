#pragma once
#include "Caracatita.h"
#include <iostream>
using namespace std;
#include <iostream>

int Caracatita::getIDAnimal(){
    return 8;
}
Caracatita::Caracatita()
{
    this->setPret(10);
    this->setFericeala(10);
}
Caracatita::Caracatita(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Caracatita::facCaAnimalu(){
    return "Sunt o caracatita si fac \"Aaamrlmrlmrlmrlmrl\"\n";
}


