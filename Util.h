#ifndef UTIL_H
#define UTIL_H

#include <string>
#include "DataBase.h"


void pause(int dur);

void Load_Accounts(std::string name, std::string pass, DataBase* X, std::string date);

#endif // UTIL_H
