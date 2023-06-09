#include <iostream>

using namespace std;

int main()
{
    int ile;
    unsigned long long liczba;
    cin >> ile;
    int cyfra[2] = { 0,0 };
    for (int i = 0; i < ile; i++)
    {
        cin >> liczba;
        if (liczba == 1 || liczba == 0)
        {
            cout << 0 << " " << 1 << endl;
        }
        else if (liczba > 10)
        {
            cout << 0 << " " << 0 << endl;
        }
        else
        {
            long long unsigned int s = 1;
            for (int i = 2; i <= liczba; i++)
            {
                s *= i;
            }
            cyfra[0] = (s % 10); //oblicza cyfre jedności
            cyfra[1] = ((s / 10) % 10); //oblicza cyfrę dziesiątek
            cout << cyfra[1] << " " << cyfra[0] << endl;
        }
    }
    return 0;
}
/*
Przykładowo, jeśli obliczymy silnię liczby 5, czyli silnia(5), to wyniesie ona 120.

W pierwszej linijce cyfra[0] = (silnia(liczba) % 10); otrzymamy cyfrę jedności, czyli cyfra[0] będzie wynosiła 0, bo reszta z dzielenia 120 przez 10 wynosi 0.

W drugiej linijce cyfra[1] = (((silnia(liczba)) / 10) % 10) otrzymamy cyfrę dziesiątek, czyli cyfra[1] będzie wynosiła 2, bo wynik dzielenia 120 przez 10 wynosi 12, a reszta z tego dzielenia modulo 10 wynosi 2.

Dlatego pierwsza linijka zwraca cyfrę jedności, a druga cyfrę dziesiątek liczby silni.
*/
// oblicza silnie - tgamma(liczba + 1);