#include <iostream>
#include <Windows.h>
#include <cstdlib>
using namespace std;
int main()
{
    for (int i = 15; i >= 0; i--)
    {
        Sleep(1000);
        system("cls");
        cout << i << endl;
    }
    
    cout << "Jebut";
    return 0;
}
// sleep czyli nic nie rób przez daną ilość czasu podawaną w mili sekundach czylio 0,001 1 sekunda =1000 milisekund
// aby funkcja działała trzeba dodać biblioteke windows.h
// instrukcja czyszcząca ekran na windowsie w konsoli cmd to właśnie cls, na linuksie zamiast cls jest clear bo to jest właśnie polecenie do czyszczenia ekranu w terminalu 
// czyszcze ekran zanim napisze i, bo wprzeciwnym wypadku bym nic nie zobaczył, polecenia się wykonują z góry na doł więc za każdym razem miałbym pusty ekran a tak jak cout jest ostatnie to za pierwszym razem pokaże liczbę za drugim wyczyści liczbę i pokaże liczbę itd.
// aby działało polecenie system potrzebna jest następna biblioteka (taka sama dla win i lix, cstdlib ( w zależności od kompilatora może nie być potrzebna 
