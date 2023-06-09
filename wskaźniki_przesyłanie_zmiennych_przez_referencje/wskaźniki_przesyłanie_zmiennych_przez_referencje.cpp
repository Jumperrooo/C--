#include <iostream>

using namespace std;

float srednia(float& a, float& b, float& c)
{
    return (a + b + c) / 3;
}

int main()
{

    float a, b, c;
    a = 1.5;
    b = 2.3;
    c = 0.75;

    cout << "Srednia wynosi: " << srednia(a, b, c);


    return 0;
}
// ampersand & zwróci adres oryginału
// ponieważ nie ma już tablicy to średnią liczymy banalnie prosto
// natomiast w wywołaniu dajemy tylko nazwy zmiennych (a,b,c)