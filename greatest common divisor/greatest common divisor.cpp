#include <iostream>
using namespace std;

long long int nwd(long long int a, long long int b)
{
        if (b == 0)
        {
            return a;
        }
        else
        {
            return nwd(b, a % b);
        }
 
}

int main()
{

    long long int liczba1, liczba2;
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cin >> liczba1 >> liczba2;
        cout << nwd(liczba1, liczba2)<<endl;
    }
        
    
    return 0;
}
