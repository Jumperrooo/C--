#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int ile;
    cin >> ile;

    int* cyfra_jednosci = new int[ile];

    for (int i = 0; i < ile; i++)
    {
        long long int a, b;
        cin >> a >> b;
        cyfra_jednosci[i] = 1;

        if (b == 0 && a>0)
        {
            cout << 1;
        }
        else if (a == 0)
        {
            cout << 0;
        }
        else
        {
            int ostatnia_cyfra = a % 10;
            int potega = b % 4;
            if (potega == 0) potega = 4;
            {
                cyfra_jednosci[i] = pow(ostatnia_cyfra, potega);
                cyfra_jednosci[i] %= 10;
            }
        }
        cout << cyfra_jednosci[i] << endl;
    }

    delete[] cyfra_jednosci;

    return 0;
}
/* Zmienna potega przechowuje resztę z dzielenia b przez 4. Jest to związane z tym, że cyfry jedności wyników potęgowania liczb w systemie dziesiętnym są okresowe z okresem równym 4, tzn.co 4 potęgi cyfry jedności się powtarzają.
*/
/*
Jeśli potega jest równa 0 (co oznacza, że b jest wielokrotnością 4), to ustawiamy potega na 4, aby obliczyć poprawną cyfrę jedności.
*/





