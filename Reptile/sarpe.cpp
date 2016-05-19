#pragma once
#include "Sarpe.h"
#include <iostream>
using namespace std;
#include <iostream>

int Sarpe::getIDAnimal(){
    return 4;
}
Sarpe::Sarpe()
{
    this->setPret(10);
    this->setFericeala(10);
}
Sarpe::Sarpe(std::string ss,int x)
{
    animal::setNume(ss);
    animal::setPret(x);
    animal::setFericeala(10);
}
std::string Sarpe::facCaAnimalu(){
    return "Shhh-shhh-shhh, sssunt prieten cu Harry Potter\n";
}


