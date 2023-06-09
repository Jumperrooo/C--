#include <iostream>
#include <locale.h>
using namespace std;
int a, b, c,m;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Podaj 3 liczby oddzielone spacją: ";
    cin >> a >> b >> c;

    m = a;
    if (b>m) m = b;
    if (c>m) m = c;

    cout <<"Największa wartość to: " << m<<endl;


    return 0;
}

/* zmienna przechowująca maksimum nie może nazywać się max bo ta nazwa jest zarezerwowana podobnie jak int
 najpierw nadajemy zmiennej m wartość a następnie sprawdzamy czy b nie jest większe i jak jest to nadajemy zmiennej m jego wartość i powtarzamy tą czynność tyle razy ile zmiennych trzeba porównać
 */