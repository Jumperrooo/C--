#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;
int x=31, r, d;
int o1, o2;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "(1947-2014) Ile razy LA Lakers wystąplili w finale NBA?"<<endl;
    cout << "Rick: ";
        cin >> r;
    cout << "Daryl: ";
        cin >> d;

        o1 = abs(x - r);
        o2 = abs(x - d);

        if (o1 == o2)
        {
            cout << "Remis!";
        }
        else if (o1 < o2)
        {
            cout << "Rick wygrywa!";
        }
        else if (o2 < o1)
        {
            cout << "Daryl wygrywa!";
        }
    return 0;
}
// dla liczb zmiennoprzecinkowych trzeba użyć funkcji fabs (floating point abs)
