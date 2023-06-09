#include <iostream>
using namespace std;
int wiek;
int main()
{
    cout << "Ile masz lat:";
    cin >> wiek;

    if (wiek < 18)
    {
        cout << "Jestes niepelnoletni i nie mozesz kandydowac na prezydenta.";
    }
    else if (wiek >= 18 && wiek<35)
    {
        cout << "Jestes pelnoletni ale nie mozesz kandydowac na prezydenta.";
    }
    else
    {
        cout << "Jestes pelnoletni i mozesz kandydowac na prezydenta.";
    }

    return 0;
}
//>= większy lub równy  <= mniejszy lub równy
// dwa warunki można zapisać też tak ((wiek >= 18) && (wiek<35)) ale należy pamiętać o podwójnych nawiasach 

