#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;
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
    } 
    while (i <= j);
    if (j > p) sortowanie_quick_sort(tab, p, j);
    if (i < q) sortowanie_quick_sort(tab, i, q);
}
int main()
{
    int ile;
    cout << "Podaj ile losowych liczb chcesz posortowac: ";
    cin >> ile;

    int* tablica = new int[ile];

    for (int i = 0; i < ile; i++)
    {
        cin>>tablica[i];
        
    }

    sortowanie_quick_sort(tablica, 0, ile - 1);

    cout << "Po posortowaniu: " << endl;

    for (int i = 0; i < ile; i++)
    {
        cout << tablica[i] << " ";
    }

    delete[] tablica;
    return 0;
}
// jak możemy zobaczyć musimy podać funkcji indesks pierwszego i ostatniego elementu stąd 
// sortowanie_quick_sort(tablica, 0, ile - 1);
// złożoność czasowa to zależność między rozmiarem i porządkiem danych wejściowych algorytmu, a jego czasem wykonania
// złożoność pamięciowa to zależność między rozmiarem i porządkiem danych wejściowych algorytmu, a jego zapotrzebowaniem na pamięc niezbędną do realizacji tegoż algorytmu 
// notacja dużego o 
// O (n kwadrat)   O(n*logn)
