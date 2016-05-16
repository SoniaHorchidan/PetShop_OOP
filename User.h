#ifndef USER_H
#define USER_H

#include <string>
#include <iostream>

class DataBase;

using namespace std;

class User
{
     private:
        string Username;
        string Password;
        string Time_Created;
        string Last_Accessed;

    public:
        User(string name, string pass, DataBase* X, int opt);
        User(string name, string pass, DataBase* X, string time);
        string Get_Time_Created();
        string Get_Last_Accessed();
        string Get_Username();
        string Get_Password();
        void Set_Last_Accesed(string date);
        void Check(DataBase* X, int opt);
        friend ostream& operator<<(ostream& out, User& obj);

};

#endif // USER_H
