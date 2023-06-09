#include <iostream>
using namespace std;
int predkosc1, predkosc2, ile;
int main()
{
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cin >> predkosc1 >> predkosc2;
        cout <<(2*predkosc1*predkosc2)/(predkosc1+predkosc2)<<endl;
    }
    return 0;
}
