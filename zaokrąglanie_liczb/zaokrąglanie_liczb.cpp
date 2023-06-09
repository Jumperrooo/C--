#include <iostream>
#include <locale.h>
#include <cmath>
using namespace std;

float liczba;

int main()
{
    setlocale(LC_CTYPE, "Polish");

    cout << "Podaj liczbę: ";
    cin >> liczba;
    cout << "Round: " << round(liczba) << endl;
    cout << "Ceil: " << ceil(liczba) << endl;
    cout << "Floor: " << floor(liczba) << endl;
    cout << "Trunc: " << trunc(liczba) << endl;
    
    return 0;
}
// funkcja która zaokrągla w dół kiedy po , jest liczba 0-4 a w góre kiedy 5-9 nazywa się round()
// zaokrąglanie w górę to ceil() od ceiling - sufit
// zaokrąglanie w dół to floor() od ang.floor - podłoga
// ale np. dla liczby -2.3 round zaokrągli to do -2 bo po przecinku jest liczba z zakresu 0-4, floor() natomiast zaokrągli tą liczbę do -3 ponieważ floor zaokrągla do pierwszej mniejszej liczby od podanej a pierwsza mniejsza to -3, analogicznie ceil da nam -2 bo -2.3<-2
// jak zatem działało by to w przewalotowaniu kwoty, bardzo prosto mamy podać kwotę w groszach zamiast 34.56 zł damy 3456 groszy (zawsze liczba całkowita) a poźniej żeby zwrócić w zł dzielimy przez 100 :)
// 4 forma zaokrąglania to trunc od ang.truncate - obciąć usuwa ona zawartość po przecinku
// pi = 2pi*r/2*r czyli pi to stosunek obwodu koła do jego średnicy