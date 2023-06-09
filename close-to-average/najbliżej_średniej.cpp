#include <iostream>
#include <locale.h>
#include <cmath>

using namespace std;

double funkcja_srednia(double* l, int ilosc);
int funkcja_najblizsze(double* l, int ilosc, double srednia, double *wyniki);

int main()
{
    setlocale(LC_CTYPE, "Polish");
    int ile;
    cout << "Ile liczb: ";
    cin >> ile;
    cout << "Podaj liczby oddzielone enterem: ";
    double* liczba = new double[ile];

    for (int i = 0; i < ile; i++)
    {
        cin >> liczba[i];
    }  
    double srednia = funkcja_srednia(liczba, ile);
    cout << "Średnia podanych liczb wynosi: " << srednia << endl;

    double* najblizsze = new double[ile];
    int ilosc_najblizszych = funkcja_najblizsze(liczba, ile, srednia, najblizsze);
    cout << "Liczby najbliższe średniej to: ";
    for (int i = 0; i < ilosc_najblizszych; i++)
    {
        cout << najblizsze[i] <<" ";
    }
    cout << endl;

    delete[] liczba;
    delete[] najblizsze;
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
    int ilosc_najblizszych = 1;
    wyniki[0] = l[0];
    for (int i = 1; i < ilosc; i++)
    {
        double aktualna_odleglosc = abs(l[i] - srednia);
        if (aktualna_odleglosc < odleglosc)
        {
            odleglosc = aktualna_odleglosc;
            wyniki[0] = l[i];
            ilosc_najblizszych = 1;
        }
        else if (aktualna_odleglosc == odleglosc)
        {
            wyniki[ilosc_najblizszych] = l[i];
            ilosc_najblizszych++;
        }
    }

    return ilosc_najblizszych;
}
/*
-----------------
double* liczba = new double[ile];
odpowiada za to aby w tablicy mogła być wybrana z klawiatury liczba szufladek 
-----------------------------------------------------------
 for (int i = 0; i < ile; i++)
    {
        cin >> liczba[i];
    }
    odpowiada za to aby podane z klawiatury liczby zostały zapisane do poszczególnych komórek 
---------------------------------------
double srednia = Srednia(liczba, ile);

stworzona została zmienna srednia, następnie przypisana została jej wartość którą obliczy funkcja funkcja_srednia, której wysłane zostały potrzebne zmienne, liczba przechowująca liczby podane z klawiatury oraz ile przechowująca ilość tych liczb
---------------------------
 delete[] liczba; zwalnia pamięć zajmowaną przez tablice
 --------------------
 suma += l[i];

 odpowiada za to aby do zmiennej suma została dodana wartość z tablicy l z szufkadki 0 
 dzięki temu, że zamknięta jest w pętli instrukcja ta wykona się tyle razy ile wskażemy i za każdym razem doda do sumy nową liczbę
 ---------------
 return srednia_liczb; zwracamy funkcji głównej wartość zmiennej srednia_liczb
 -------------
 double* najblizsze = new double[ile]; odpowiada za to aby ilość szufladek w tablicy była od nas zależna, przechowuje wszystkie liczby 
 -----------------
 wyniki[0] = l[0]; trzeba przypisać wartość początkową z tablicy l do tablicy wyniki ponieważ potrzebujemy pierwszej wartości do porównania ze średnią, następnie w programie jeśli zachodzi taka konieczność wartość ta jest uaktualniania
 -----------------------------------------------------
 double aktualna_odleglosc = abs(l[i] - srednia);
 if (aktualna_odleglosc < odleglosc)
        {
            odleglosc = aktualna_odleglosc;
            wyniki[0] = l[i];
            ilosc_najblizszych = 1;
        }
        else if (aktualna_odleglosc == odleglosc)
        {
            wyniki[ilosc_najblizszych] = l[i];
            ilosc_najblizszych++;
        }

 najpierw tworzymy zmienną aktualna odleglosc a nastepnie za pomocą jedynej nieznanej wsześniej funkcji obliczamy wartość bezwzględną z różnicy naszej liczby i średniej, dzięki temu niezależnie czy liczba i srednia będą dodatnie, ujemne to i tak zostanie obliczona poprawna różnica, następnie liczba ta zostaje porównana z wcześniej obliczoną odległością dla pierwszej liczby 

 double odleglosc = abs(l[0] - srednia);

 i jeśli aktualna jest mniejsza od pierwszej to wartości są podmieniane oraz wartość zapisywana jest w tablicy wyniki pod 0 indeksem tak się dzieje do skutku, lecz jeśli wartości są takie same to druga wartosc zapisywana jest już do szufladki o indeksie 1 w tablicy wyniki oraz ilosc najblizszych jest inkrementowana tak aby w przypadku następnego potworzenia odległości kod zadziałał 
        
---------------------
        #include <locale.h>
        setlocale(LC_CTYPE, "Polish"); 
        polskie znaki

*/