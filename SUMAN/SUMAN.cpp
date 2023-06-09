#include <iostream>
using namespace std;
int suman(int n)
{
    if (n == 1) return 1;
    else return suman(n - 1) + n;
}
int main()
{
    for (int i = 0; i < 10; i++)
    {
        int l;
        cin >> l;
        cout << suman(l) << endl;
    }
    return 0;
}

