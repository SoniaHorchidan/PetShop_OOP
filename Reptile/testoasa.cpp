#pragma once
#include "testoasa.h"
#include <iostream>
using namespace std;
#include <iostream>

int Testoasa::getIDAnimal(){
    return 6;
}
Testoasa::Testoasa()
{
    this->setPret(10);
    this->setFericeala(10);
}
Testoasa::Testoasa(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Testoasa::facCaAnimalu(){
    return "Merg mai incet ca melcul\n";
}

