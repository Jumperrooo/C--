#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

float liczby[100];

int main()
{

    string linia;
    int nr_linii = 1;

    fstream plik;
    plik.open("pomiary.txt", ios::in);

    if (plik.good() == false) cout << "Nie mozna otworzyc pliku!";

    int licznik = 0;

    while (!plik.eof())
    {
        getline(plik, linia);
        liczby[licznik] = atof(linia.c_str());
        licznik++;
    }

    plik.close();

    cout << "Ilosc pomiarow: " << licznik << endl << endl;

    for (int i = 0; i < licznik; i++)
    {
        cout << liczby[i] << endl;
    }

    return 0;
}
//funkcja eof (end od file) zwróci nam wartość prawda jeśli osiągniemy koniec pliku 
// while(!plik.eof()) do puki fałszem jest, że funkcja eof dla zmiennej plikowej plik jest true 
// atof - konwersja na liczbę zmiennoprzecinkową
