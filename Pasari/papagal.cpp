#pragma once
#include <iostream>
#include <papagal.h>
using namespace std;
#include <iostream>

int Papagal::getIDAnimal(){
    return 1;
}
Papagal::Papagal()
{
    this->setPret(10);
    this->setFericeala(10);
}
Papagal::Papagal(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Papagal::facCaAnimalu(){
    return "Hruu, hruu, hruu\n";
}

