#include "Util.h"

#include <ctime>
#include "User.h"

void pause(int dur)
{
    int temp = time(NULL) + dur;
    while(temp > time(NULL));
}

void Load_Accounts(std::string name, std::string pass, DataBase *X, std::string date)
{
    User *newUser = new User(name, pass, X, date);
}
