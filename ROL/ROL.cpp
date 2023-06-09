#include <iostream>
using namespace std;
int main()
{
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        int ile_liczb;
        cin >> ile_liczb;
        int* liczby = new int[ile_liczb];
        for (int j = 0; j < ile_liczb; j++)
        {
            cin >> liczby[j];
        }
        int ostatnia = liczby[0];
        int przedostatnia = liczby[ile_liczb-1];
        for (int j = 1; j < ile_liczb-1; j++)
        {
            int bufor = liczby[j];
            liczby[j] = liczby [j - 1];
            liczby[j - 1] = bufor;
            
        }
        liczby[ile_liczb - 1] = ostatnia;
        liczby[ile_liczb - 2] = przedostatnia;
        for (int j = 0; j < ile_liczb; j++)
        {
            cout << liczby[j]<<" ";
        }
        cout << endl;
    }
    return 0;
}

