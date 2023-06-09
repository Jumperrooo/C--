#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main()
{
    string pesel;
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        int liczby[11];
        int suma = 0;
        cin >> pesel;
        for (int j = 10; j >= 0; j--)
        {
            liczby[j] = pesel[j] - '0';
        }
        suma = liczby[0] * 1 + liczby[1] * 3 + liczby[2] * 7 + liczby[3] * 9 + liczby[4] * 1 + liczby[5] * 3 + liczby[6] * 7 + liczby[7] * 9 + liczby[8] * 1 + liczby[9] * 3 + liczby[10] * 1;
        if (suma == 0)
        {
            cout << "N" << endl;
        }
        else if (suma % 10 == 0)
        {
            cout << "D" << endl;
        }
        else
        {
            cout << "N" << endl;
        }
    }
}
// od liczby w pesel odejmujemy wartosc 0 w kodzie ASCII (liczby od 0 do 9 mają tam numery 48-57)