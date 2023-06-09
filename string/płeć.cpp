#include <iostream>
#include <locale.h>
#include <conio.h>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    string imie;
    cout << "Podaj imie: ";
    cin >> imie;

    int dlugosc = imie.length();
    
   
    if (imie[dlugosc - 1] == 'a')
    {
        cout << "Wydaje mi się, że jesteś kobietą.";
    }
    else
    {
        cout << "Wydaje mi się, że jesteś mężczyzną.";
    }


    return 0;
}

// napis typu string również jest zapisywany od zerwej szufladki, i też komputer dodaje sobie na końcu null, na szczęście nie trzeba tutaj określać maksymalnej wielkości napisu, stosować wskaźników czy martwić się null'em, bo komputer najczęściej sam wstawi null w dobrym miejscu 
// string napis = "Ala ma kota";
// kiedy napiszemy cout <<napis[4] to rzeczywiście wyświetlona zostanie spacja 
// aby pokazać znak z trzeba wpisać numer indeksu 
// funkcja length () zlicza ile liter ma wyraz 
// ponieważ numerujemy od 0 to ostatnia litera ma indeks o 1 mniejszy niż długość wyrazu 
// pojedyńcze literki zapisujemy w ''
// "a" oznaczałoby szufladke a oraz null natomiast 
