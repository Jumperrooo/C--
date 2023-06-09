#include <iostream>
#include <math.h>
#include <locale.h>
#include<iomanip>

using namespace std;
long long int podstawa, wykladnik;
int x;
unsigned int z;
int y = 4294967295;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    x = (pow(2, 32)/2) - 1;
    cout << setprecision(20);
    cout<< x << endl;
    z = pow(2, 32) -1;
    cout << z << endl;

    return 0;
}
//sizeof() zwraca rozmiar w bajtach tego co tam podeślemy 
// obliczywszy 2 do potęgi 31-1 obliczymy maksymalną wartość jaką można zapisać na 32 bitach bo np. 1+2+4+8+16+32+64+128=255 a następny bit czyli 2 do potęgi 8 ma wartość 256 stąd -1
// #include<iomanip> żeby pokazało całą wartość a nie np 2,13E17 
// setprecision jest po to aby na pewno wyświetliło całą liczbę
// musimy podzielić na 2 bo int przechowuje też liczby ujemne i taką samą ilość miejsca na nie przeznacza
// aby zmusić do przechowywania tylko liczb dodatnich możemy dopisać unsigned (bez znaku) np unsigned int