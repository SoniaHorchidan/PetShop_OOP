#include "DataBase.h"
#include <iostream>
#include "UserAttempt.h"

DataBase::~DataBase()
{
    Admins.clear();
}

void DataBase::Add_New_User(User* X)
{
    Admins.push_back(X);
}

int DataBase::Search_for(UserAttempt* X, int &ind)
{
    int i;
    for(i=0; i<Admins.size(); i++)
    {
        if(*X == *Admins[i])
        {
            ind=i;
            return 1;
        }
    }
    return 0;
}

User* DataBase::Get_User(int indice)
{
    return Admins[indice];
}
