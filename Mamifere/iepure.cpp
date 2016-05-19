#pragma once
#include "iepure.h"
#include <iostream>
using namespace std;
#include <iostream>

int Iepure::getIDAnimal(){
    return 12;
}
Iepure::Iepure()
{
    this->setPret(10);
    this->setFericeala(10);
}
Iepure::Iepure(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Iepure::facCaAnimalu(){
    return "Vreaaaau morcovi!\n";
}

