#include "UserAttempt.h"
#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "User.h"
#include "Util.h"
#include <fstream>

class DataBase;

UserAttempt::UserAttempt(std::string name, std::string pass, DataBase* X, int opt)
{
    Username = name;
    Password = pass;
    Check(X,opt);
}

/*functie care verifica daca userul exista in baza de date si, in functie de rezultat si de optiunea dorita, adauga utilizatorul nou 
in baza de date, face legatura cu un cont deja existent sau afiseaza mesaje de eroare cand este necesar*/
void UserAttempt::Check(DataBase *X, int opt)
{
    fstream in("database.in", ios::in | ios::out | ios::app);
    int indice;
    User  *newUser;
    if(!(X -> Search_for(this, indice)))
    {
        if(opt == 1)
        {
            cout << "\nUsername sau parola gresite! Va rugam sa reincercati.";
            pause(5);
        }
        else
            if(opt == 2)
              {
                system("cls");
                newUser = new User(Username, Password, X, opt);
                cout << *newUser;
                in.clear();
                in << newUser -> Get_Username();
                in << '\n' << newUser -> Get_Password();
                in << '\n' << newUser -> Get_Time_Created();
                pause(5);
              }
    }
    else
    {
        if(opt == 1)
        {
            system("cls");
            newUser = X -> Get_User(indice);
            cout << *newUser;
            time_t now = time(0);
            newUser -> Set_Last_Accesed(ctime(&now));
            pause(5);
        }
        else
            if(opt == 2)
            {
               system("cls");
               cout << "\nContul exista deja! Va rugam sa va autentificati.";
               pause(5);
            }
    }
}


string UserAttempt::Get_Username()
{
    return Username;
}

string UserAttempt::Get_Password()
{
    return Password;
}

