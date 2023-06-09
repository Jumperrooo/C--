#include <iostream>
#include <cstdlib>
#include <string>
#include <time.h>
#include <windows.h>

using namespace std;

int ile;
clock_t start, stop;
double czas;
void sortowanie_bablkowe(int* tab, int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = n - 1; j >= 1; j--)
        {
            if (tab[j] < tab[j - 1])
            {
                int bufor; bufor = tab[j - 1];
                tab[j - 1] = tab[i];
                tab[j] = bufor;
            }
        }
    }
}

int main()
{
    
    cout << "Podaj ile losowych liczb chcesz posortowac: ";
    cin >> ile;
    
    int* liczby = new int[ile];

    //inicjowanie generatora
    srand(time(NULL));

    for (int i = 0; i < ile; i++)
    {
        liczby[i] = rand() % 100000 + 1;
    }
    /*
    cout << "Przed posortowaniem: " << endl;

    for (int i = 0; i < ile; i++)
    {
        cout << liczby[i]<<" ";
    }
    */
    cout<<endl<< "Sortuje prosze czekac."<<endl;
    start = clock();

    sortowanie_bablkowe(liczby,ile);

    stop = clock();
    czas = (double)(stop - start) / CLOCKS_PER_SEC;
    /*
    cout << "Po posortowaniu: "<<endl;
        for (int i = 0; i < ile; i++)
        {
            cout << liczby[i]<<" ";
        }
    */
    cout <<endl<<"Czas sortowania babelkowego w sekundach: " << czas;
    delete [] liczby;
    return 0;
}
// n to ilość liczb w tablicy do posortowania
// żeby zrobić sortowanie malejące wystarczyło by zmienić znak < na >
// bufor jest po to aby nie stracić wartości 
// do bufora trafi wartość x, nastąpi zamiana x=y oraz do y zostanie przypisana wartość z bufora
//program wylosuje liczbe od 0 do 1 mniejszej niż 100.000 stąd aby otrzymać liczby od 1 do 100.000 dodajemy 1