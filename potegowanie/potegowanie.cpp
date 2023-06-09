#include <iostream>
using namespace std;

long int potega(int liczba, int wykladnik)
{
    if (wykladnik == 0) return 1;
    else return liczba * potega(liczba, wykladnik - 1);
}

int main()
{
    int l, w;
    cout << "Podaj liczbe: ";
    cin >> l;
    cout << "Podaj potege: ";
    cin >> w;

    cout << potega(l, w) << endl;

    return 0;
}
