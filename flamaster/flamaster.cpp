#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;
int ile,n=2;
int main()
{
    cin >> ile;
    string wyraz;
    for (int i = 0; i < ile; i++)
    {
        cin >> wyraz;
        int dlugosc = wyraz.length();
        for (int j =0; j<dlugosc;j++)
        {
            if (wyraz[j] == wyraz[j + n])
                n++;
        }
    }
    return 0;
}

