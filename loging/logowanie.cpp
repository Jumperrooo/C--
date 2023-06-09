#include <iostream>
using namespace std;
string login, haslo;
int main()
{
    cout << "Podaj login: ";
    cin >> login;
    cout << "Podaj haslo: ";
    cin >> haslo;

    if (login == "admin" && haslo == "szarlotka")
    {
        cout << "Witaj adminie!";
    }
    else if(login=="admin" && haslo !="szarlotka")
    {
        cout << "Bledne haslo dla uzytkownika admin.";
    }
    else
    {
        cout << "Brak uzytkownika o nazwie: "<<login;
    }
    return 0;
}

// && to spójnik logiczny AND, czyli oba warunki muszą zostać spełnione 
// || to spójnik logiczny OR, czyli jeden z warunków musi zostać spełniony
// else if - jeśli pierwszy warunek nie jest spełniony to sprawdź drugi warunek
// if analizuje warunki od lewej do prawej


