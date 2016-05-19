#pragma once
#include "corb.h"
#include <iostream>
using namespace std;
#include <iostream>

int Corb::getIDAnimal(){
    return 3;
}
Corb::Corb()
{
    this->setPret(10);
    this->setFericeala(10);
}
Corb::Corb(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Corb::facCaAnimalu(){
    return "Craaa-craaaa-craaa\n";
}


