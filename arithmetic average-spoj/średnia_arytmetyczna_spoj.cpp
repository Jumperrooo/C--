#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

double funkcja_srednia(double* l, int ilosc);
int funkcja_najblizsze(double* l, int ilosc, double srednia, double* wyniki);

int main()
{
    int ile_razy;
    cin >> ile_razy;

    for (int k = 0; k < ile_razy; k++)
    {
        int ile;
        cin >> ile;
        double* liczba = new double[ile];

        for (int i = 0; i < ile; i++)
        {
            cin >> liczba[i];
        }
        double srednia = funkcja_srednia(liczba, ile);
        double* najblizsze = new double[ile];
        int ilosc_najblizszych = funkcja_najblizsze(liczba, ile, srednia, najblizsze);
        cout << najblizsze[0] << " ";

        cout << endl;

        delete[] liczba;
        delete[] najblizsze;
    }
    return 0;
}

double funkcja_srednia(double* l, int ilosc)
{
    double suma = 0;
    for (int i = 0; i < ilosc; i++)
    {
        suma += l[i];
    }
    double srednia_liczb = suma / ilosc;

    return srednia_liczb;
}

int funkcja_najblizsze(double* l, int ilosc, double srednia, double* wyniki)
{
    double odleglosc = abs(l[0] - srednia);
    double aktualna_odleglosc = 0;
    wyniki[0]= l[0];
    for (int i = 1; i < ilosc; i++)
    {
        double aktualna_odleglosc = abs(l[i] - srednia);
        if (aktualna_odleglosc < odleglosc)
        {
            odleglosc = aktualna_odleglosc;
            wyniki[0] = l[i];

        }
    }

    return aktualna_odleglosc;
}
