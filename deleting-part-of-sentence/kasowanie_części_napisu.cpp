#include <iostream>
#include <locale.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    string zdanie,szukaj;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    cout << "Podaj fraze do usunięcia: ";
    getline(cin, szukaj);
    int dlugosc_szukaj = szukaj.length();

    size_t pozycja = zdanie.find(szukaj);
    
    if (pozycja != string::npos)
    {
        zdanie.erase(pozycja, dlugosc_szukaj);
        cout << "Nowe zdanie: " << zdanie;
    }
    else
    {
        cout << "Nie znaleziono podanej frazy";
    }
   
  


    return 0;
}

// do kasowanai części napisu służy funkcja erase(); 
// w nawiasie pierwsza liczba mówi od, którego indeksu w łańcuchu zacząć kasować a druga ile znaków skasować
// dlugosc_szukaj przechowuje długość frazy którą chcemy usunąć
// program pobiera pozycje poszukiwanej frazy z wcześniej podanego zdania a następnie za pomocą erase usuwa tą część zdania, jako pierwszy parametr podaje pozycje a jako drugi parametr zmienną, która przechowuje długość poszukiwanej frazy otrzymaną za pomocą funkcji length
