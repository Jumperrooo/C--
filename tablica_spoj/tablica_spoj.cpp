#include <iostream>
using namespace std;

const int ile_liczb = 1000; 

int main() 
{

    int n = 0; 
    int tab[ile_liczb];

    while (cin >> tab[n]) {
        n++;
    }

    for (int i = n - 1; i >= 0; i--) {
        cout << tab[i] << " ";
    }
    cout << endl;

    return 0;
}
