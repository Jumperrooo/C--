#include <iostream>
using namespace std;

void sortowanie_quick_sort(int* tab, int p, int q);

int main()
{
    int ile;
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        int ile_liczb;
        cin >> ile_liczb;
        int* liczby = new int[ile_liczb];
        for (int j = 0; j < ile_liczb; j++)
        {
            cin >> liczby[j];
        }
        sortowanie_quick_sort(liczby, 0, ile_liczb - 1);
        for (int j = 0; j < ile_liczb; j++)
        {
            cout<<liczby[j]<<" ";
        }
        cout << endl;
    }

    return 0;
}
void sortowanie_quick_sort(int* tab, int p, int q)
{
    int pivot = tab[(p + q) / 2];
    int i, j, bufor;
    i = p;
    j = q;
    do {
        while (tab[i] < pivot)i++;
        while (tab[j] > pivot)j--;
        if (i <= j)
        {
            bufor = tab[i];
            tab[i] = tab[j];
            tab[j] = bufor;
            i++;
            j--;
        }
    } while (i <= j);
    if (j > p) sortowanie_quick_sort(tab, p, j);
    if (i < q) sortowanie_quick_sort(tab, i, q);
}
