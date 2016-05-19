#pragma once
#include <iostream>
using namespace std;

class Client{
private:
    int idClient;
    int cumpara;
public:
    int getIDClient();
    int getCumpara();
    void setCumpara(int x);
    Client();
};
