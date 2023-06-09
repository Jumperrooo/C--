#include <iostream>
#include <locale.h>


using namespace std;
int x, y, z;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Podaj trzy liczby rozdzielone spacją liczbę: ";
    cin >> x >> y >> z; 
   
    if (x >= y && x >= z)
        cout << "Największa liczba to " << x;
    else if (y >= x && y >= z)
        cout << "Największa liczba to " << y;
    else if (z >= x && z >= y)
        cout << "Największa liczba to " << z;




    return 0;
}
// cin >> x >> y >> z;  program będzie czekał na 3 liczby rozdzielone znakiem spacji lub entera
// największa liczba jest wiekszą od pozostałych a>b && a>>c
// aby zapobiec trzeba wprowadzić słowa else do dwóch ostatnich warunków oraz operatory = np x>=y
// else dajemy po to aby w przypadku takich samych liczb największa liczba została wymieniona tylko raz a nie dwa razy
// gdybyśmy chcieli skalować (np zwiększyć ilość zmiennych) to kod staje się coraz mniej przejrzysty
