#include <iostream>
using namespace std;
int main()
{
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        int liczba;
        cin >> liczba;
        if (liczba >= 1 && liczba <= 1000)
        {
            cout <<liczba*liczba << endl;
        }
    }
    return 0;
}
