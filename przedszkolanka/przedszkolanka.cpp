#include <iostream>
using namespace std;
int ile,a,b,cukierki;
int main()
{
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cin >> a >> b;
        if (a < b)
        {
            cukierki = b;
        }
        else if (b <= a)
        {
            cukierki = a;
        }
        while (!(cukierki % a == 0&& cukierki % b == 0))
        {
            cukierki++;
        }
        cout << cukierki<<endl;
        
    }
    
    return 0;
}

