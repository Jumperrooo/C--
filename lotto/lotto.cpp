#include <iostream>
#include <Windows.h>
#include <time.h>
using namespace std;
int liczba;
int main()
{
    cout << "Witaj w losowaniu za 3 sekundy nastapi zwolnienie blokady.";
    Sleep(3000);
    cout << endl;

    srand(time(NULL));

    for(int i=1;i<=6;i++) 
    {
        liczba = rand() % 49 + 1;
        Sleep(1000);
        cout << liczba<<"\a" << endl;
        
    }
    return 0;
}
// zakres liczb w dużym lotku wynosi 49 stąd zakres 49, program wylosuje liczbe od 0 do 48 czyli w sumie będzie ich 49 a na końcu dodajemy 1 żeby dostać przedział  od 1-49
// losowanie liczb z zakresu ma jedną i tą samą formułke rand()%...  po % wpisujemy ile liczb mieści się w zakresie np w zakresie o 0 do 9 miesci sie 10 liczb wiec wpisalibysmy 10
//linijki srand nie dajemy do pętli bo popsułoby to losowanie
// "\a" oznacza dźwięk z głośniczka systemowego znak \ mówi że ma zadziać się coś specjalnego a jak alarm
// \n oznacza znak końca lini
// \t oznacza znak tabulacji