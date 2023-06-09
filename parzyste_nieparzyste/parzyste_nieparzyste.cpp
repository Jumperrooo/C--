#include <iostream>
using namespace std;
int main()
{
    int ile; 
    cin >> ile;

    for (int i = 0; i < ile; i++)
    {
        int ile_liczb;
        cin>> ile_liczb;
        int* liczby = new int[ile_liczb];
        for (int j = 0; j < ile_liczb; j++)
        {
            cin >> liczby[j];
            
        }
        for (int j = 0; j < ile_liczb; j++)
        {
                if ((j + 1) % 2 == 0)
                cout << liczby[j]<<" ";
        }
        
        for (int j = 0; j < ile_liczb; j++)
        {
            if ((j+1) % 2 != 0)
                cout << liczby[j] << " ";
        }
        cout << endl;
    }
    return 0;
}

