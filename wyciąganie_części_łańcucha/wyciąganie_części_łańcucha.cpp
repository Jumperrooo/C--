#include <iostream>
#include <locale.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    string zdanie, fraza;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    cout << "Podaj fraze do wyciągnięcia: ";
    getline(cin, fraza);

    int dlugosc_frazy = fraza.length();

    size_t pozycja = zdanie.find(fraza);

    if (pozycja != string::npos)
    {
        zdanie.substr(pozycja, dlugosc_frazy);
        cout << "Pobrana fraza: " << fraza;
    }
    else
    {
        cout << "Fraza: " << "'" << fraza << "'" << " nie występuje w podanym zdaniu.";
    }

    return 0;

}
// funkcja substr ( pierwszym argumentem jest indeks pierwszej "litery" frazy która chcemy wyciągnąć a drugim argumentem jest liczba znaków jakie chcemy wyciągnać)
// program działa, ale przydałoby się dodać połączenie z plikiem, bo teraz trzeba najpierw napisać zdanie, z którego chcemy wyciągnąć fragment a następnie napisać jaki fragment tylko po to aby napisany fragment wyświetlił się ponownie.
// trzeba by zrobić tak, że łączymy się z plikiem tekstowym pobieramy wszystko z tego pliku i zapisujemy to gdzieś a następnie wyciągamy z tego zdanie i zapisywane jest ono w innym pliku
// po więcej wpisz string c++ reference