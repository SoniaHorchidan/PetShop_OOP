#pragma once
#include <iostream>
#include "porumbel.h"
using namespace std;
#include <iostream>

int Porumbel::getIDAnimal(){
    return 2;
}
Porumbel::Porumbel()
{
    this->setPret(10);
    this->setFericeala(10);
}
Porumbel::Porumbel(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Porumbel::facCaAnimalu(){
    return "Hu-huuu-hu hu-huuu-hu\n";
}

