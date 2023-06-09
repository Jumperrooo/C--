#include <iostream>
using namespace std;
int ile, ile_obzartuchow, ile_ciastek_w_pudelku,ile_ciastek;
int main()
{
    cin >> ile;

    for (int i = 0;i<ile;i++) 
    {
        cin >> ile_obzartuchow >> ile_ciastek_w_pudelku;
        int* czas = new int[ile_obzartuchow];
            
            for (int i = 0; i < ile_obzartuchow; i++)
            {
            cin >> czas[i];
            ile_ciastek += 86400 / czas[i];
            
            }

            if ((ile_ciastek % ile_ciastek_w_pudelku) > 0)
            {
                cout << (ile_ciastek / ile_ciastek_w_pudelku) + 1<<endl;
                ile_ciastek = 0;
            }
            else
            {
                cout << ile_ciastek / ile_ciastek_w_pudelku<<endl;
                ile_ciastek = 0;
            }
            delete [] czas;
    }
    
    return 0;
}
