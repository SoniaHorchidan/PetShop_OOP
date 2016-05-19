#pragma once
#include "pisica.h"
#include <iostream>
using namespace std;
#include <iostream>

int Pisica::getIDAnimal(){
    return 10;
}
Pisica::Pisica()
{
    this->setPret(10);
    this->setFericeala(10);
}
Pisica::Pisica(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Pisica::facCaAnimalu(){
    return "Miaaaaauuuuuu\n";
}

