#include "User.h"
#include <ctime>
#include <iostream>
#include "DataBase.h"

User::User(string name, string pass, DataBase *X, int opt)
{
    Username = name;
    Password = pass;

    time_t now = time(0);
    Time_Created = ctime(&now);

    Set_Last_Accesed(Time_Created);

    Check(X,opt);
}

void User::Check(DataBase* X, int opt)
{
    if(opt == 2)
        X -> Add_New_User(this);
}

 User::User(string name, string pass, DataBase* X, string time)
 {
    Username = name;
    Password = pass;
    Time_Created = time;
    Set_Last_Accesed(Time_Created);
    X -> Add_New_User(this);

 }

ostream& operator<<(ostream& out, User& obj)
{
    out << "Bine ai (re)venit, " << obj.Get_Username() << '!';
    out << "\n\nInformatii cont\n";
    out << "\nData crearii contului: " << obj.Get_Time_Created();
    out << "\nUltima oara accesat la data: " << obj.Get_Last_Accessed();
    out << "\n\nTranzactii\n";
       //-------------tranzactii-----------------
    return out;
}

string User::Get_Time_Created()
{
    return Time_Created;
}

string User::Get_Last_Accessed()
{
    return Last_Accessed;
}

string User::Get_Username()
{
    return Username;
}

string User::Get_Password()
{
    return Password;
}

void User::Set_Last_Accesed(string date)
{
    Last_Accessed = date;
}
