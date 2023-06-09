#include <iostream>
using namespace std;

int main()
{
    int ile, liczba_liczb;
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {
        cin >> liczba_liczb;
        int* liczby = new int[liczba_liczb];

        int suma = 0;
        for (int j = 0; j < liczba_liczb; j++)
        {
            cin >> liczby[j];
            suma += liczby[j];
        }
        cout << suma<<endl;
       
        delete[]liczby;
    }

    return 0;
}
//pamiętaj, że kod wykonuje się z góry na dół