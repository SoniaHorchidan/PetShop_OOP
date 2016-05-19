#pragma once
#include "peste.h"
#include <iostream>
using namespace std;
#include <iostream>

int Peste::getIDAnimal(){
    return 7;
}
Peste::Peste()
{
    this->setPret(10);
    this->setFericeala(10);
}
Peste::Peste(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Peste::facCaAnimalu(){
    return "Blop, blop, blop\n";
}

