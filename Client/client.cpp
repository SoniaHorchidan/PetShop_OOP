#pragma once
#include <iostream>
#include "client.h"
using namespace std;

int Client::getIDClient(){
    return idClient;
}
int Client::getCumpara(){
    return cumpara;
}
void Client::setCumpara(int x){
    cumpara=x;
}
Client::Client(){
    static int i=1;
    idClient=i;
    i++;
}

