#include <iostream>
using namespace std;
int ile,dzielniki=0;
int main()
{
    cin >> ile;
    int* liczba = new int[ile];
    for (int i = 0; i < ile; i++)
    {
        cin >> liczba[i];

        for (int a = 0; a < liczba[i]; a++)
        {
            if (liczba[i] % (liczba[i] - a) == 0)
            {
                dzielniki++;
            }
            
        }
        if (dzielniki > 2 || dzielniki == 1)
        {
            cout << "NIE"<<endl;
        }
        else if (dzielniki==2)
        {
            cout << "TAK"<<endl;
        }
        dzielniki = 0;
    }
    
    delete[]liczba;
    return 0;
}
