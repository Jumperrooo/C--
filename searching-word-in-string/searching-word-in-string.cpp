#include <iostream>
#include <string>
#include <locale.h>

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Polish");

    string napis,szukaj;
    cout << "Podaj zdanie: ";
    getline(cin, napis);
    cout << "Podaj fraze, którą chcesz znaleźć: ";
    getline(cin, szukaj);

    size_t pozycja = napis.find(szukaj);
    if (pozycja != string::npos)
        cout << "Znaleziono frazę: "<<"'"<<szukaj<< "'" << " na pozycji: " << pozycja;
    else cout << "Nie znaleziono";

    return 0;

}
// szukaj przechowuje poszukiwaną przez nas frazę 
// można odszukać pozycję tego wyrazu w stringu czyli dowiedzieć się na jakiej pozycji wystąpił ten wyraz po raz pierwszy;
// ten indeks zachowamy w zmiennej pozycja, która ma specjalny typ size_t
// pozycja = nazwa zmiennej . find(nazwa zmiennej, która przechowuje to co chcemy znaleźć)
// if (pozycja != string::npos) odpowiada za sprawdzenie czy w stringu jest podana fraza 
// jeśli jest wyświetlona zostanie jej pozycja w indeksie (numerowane od 0)
// string::npos oznacza wartość, która jest zwracana przez funkcje typu string.find w przypadku niepowodzenia, więc jeśli wartość zmiennej size_t pozycja jest różna od wartości w przypadku niepowodzenia w string.find to wykonaj instrukcje
