#include <iostream>
using namespace std;
int main()
{
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        int cukierki, uczniowie;
        cin >> uczniowie >> cukierki;
        if (uczniowie>=1 &&cukierki>=1)
        {
            uczniowie--;
            if (uczniowie == 0)
            {
                cout << "TAK"<<endl;
            }

            else if (cukierki % uczniowie != 0)
            {

                cout << "TAK" << endl;
            }
            else
            {
                cout << "NIE" << endl;
            }
        }
    }

    return 0;
}
