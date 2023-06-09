#include <iostream>
using namespace std;
int ile;
int main()
{
    cin >> ile;
    while(ile--)
    {
        int liczba_liczb;
        cin >> liczba_liczb;
        int* liczby = new int[liczba_liczb];
        for (int i = 0; i <liczba_liczb ; i++)
        {
            cin >> liczby[i];
        }
        for (int i = liczba_liczb-1; i >= 0; i--)
        {
            cout << liczby[i] << " ";
        }
        
        delete[] liczby;
        cout<<endl;
    }
    return 0;
}

