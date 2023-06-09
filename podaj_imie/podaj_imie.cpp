#include <iostream>
using namespace std;
string imie;
int ile_razy;
int main()
{
    cout << "Podaj imie: ";
    cin >> imie;
    cout << "Podaj liczbe calkowita: ";
    cin >> ile_razy;

    system("cls");

    for(int i=1; i<=ile_razy; i++)
    {
        cout <<i<<"."<< imie<< endl;
    }
        
    return 0;
}
// cout <<i<<"."<< imie<< endl; oznacza pokaż numer iteracji następnie pokaż tekst . następnie pokaż imie i na końcu przejdź do nowego wiersza
