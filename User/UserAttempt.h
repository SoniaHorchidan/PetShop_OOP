#ifndef USERATTEMPT_H
#define USERATTEMPT_H

#include <string>
#include <DataBase.h>

using namespace std;

class User;

class UserAttempt
{
    private:
        string Username;
        string Password;
    public:
        UserAttempt(string name, string pass, DataBase* X, int opt);
        string Get_Username();
        string Get_Password();
        void Check(DataBase* X, int opt);
        bool operator==(User& X)
        {
            return ((X.Get_Username() == Username) && (X.Get_Password() == Password));
        }

};

#endif // USERATTEMPT_H
