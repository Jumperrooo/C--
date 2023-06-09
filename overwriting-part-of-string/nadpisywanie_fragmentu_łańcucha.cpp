#include <iostream>
#include <locale.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    string zdanie, zamiast_ktorego, fraza;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    cout << "Podaj fraze do dodania: ";
    getline(cin, fraza);
    cout << "Podaj frazę, którą chcesz zastąpić: ";
    getline(cin, zamiast_ktorego);

    int dlugosc_po_ktorym = zamiast_ktorego.length();

    size_t pozycja = zdanie.find(zamiast_ktorego);

    if (pozycja != string::npos)
    {
        zdanie.replace(pozycja, dlugosc_po_ktorym, fraza);
        cout << "Nowe zdanie: " << zdanie;
    }
    else
    {
        cout << "Fraza: " << "'" << zamiast_ktorego << "'" << " nie występuje w podanym zdaniu.";
    }

    return 0;

}
// w zdaniu pobierana jest długość zastępowanego wyrazu i w funkcji replace ustawiona jest jako 2 argument więc całe podane przez nas słowo zostaje zastąpione, jeśli chcialibyśmy zastąpić tylko fragment trzeba by dodać 3 zmienną oraz zapytanie ile znaków z podanej frazy chcesz zastąpić