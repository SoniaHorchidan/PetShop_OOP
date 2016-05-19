#pragma once
#include "iguana.h"
#include <iostream>
using namespace std;
#include <iostream>

int Iguana::getIDAnimal(){
    return 5;
}
Iguana::Iguana()
{
    this->setPret(10);
    this->setFericeala(10);
}
Iguana::Iguana(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Iguana::facCaAnimalu(){
    return "\n";
}

