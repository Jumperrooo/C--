#include <iostream>
#include <locale.h>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    string zdanie, po_ktorym,fraza;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    cout << "Podaj fraze do dodania: ";
    getline(cin, fraza);
    cout << "Podaj po którym wyrazie wstawić powyższą frazę: ";
    getline(cin, po_ktorym);

    int dlugosc_po_ktorym = po_ktorym.length();

    size_t pozycja = zdanie.find(po_ktorym);

    if (pozycja != string::npos)
    {
        zdanie.insert(pozycja + dlugosc_po_ktorym, fraza);
        cout <<"Nowe zdanie: " << zdanie;
    }
    else
    {
        cout << "Fraza: "<<"'"<< po_ktorym << "'" << " nie występuje w podanym zdaniu.";
    }




    return 0;

}

// do wstawiania użyjemy funkcji insert, najpierw piszemy indeks(miejsce w które chcemy wpisać fraze) a po przecinku piszemy frazę do wstawienia
// jeśli znak się powtarza np chcemy wpisać frazę po "." to jeżeli w miejsce po_ktorym wpiszemy . to zdanie zostanie wstawione w miejsce pierwszej . od lewej, aby temu zapobiec trzeba wpisać niepowtarzalną frazę po której chcemy coś dopisać np "1999 roku."



