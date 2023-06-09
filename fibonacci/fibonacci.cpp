#include <iostream>
#include <iomanip>
using namespace std;
long double fib[100000];
int n;
int main()
{
    cout << "Ile liczb Fibonacciego chcesz wyznaczyc: ";
    cin >> n;

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++)
    {
        fib[i] = fib[i - 1] + fib[i - 2];
    }
    cout << setprecision(10000);
    for (int i = 0; i < n; i++)
    {
        cout << endl << "wyraz nr" << i + 1 << ": " << fib[i];
    }
    //cout <<endl<<"wyraz nr "<<n<<":"<<fib[n-1];
    cout<<endl<<"zlota liczba: " << fib[n - 1] / fib[n - 2];

    return 0;
}
// pierwsze dwa wyrazy są nam potrzebne do określenia 3 wyrazu więc ich wartości muszą być odgórnie podane stąd fib[0]=1 i fib[1]=1 pętla pierwsza obliczba wartości następnych liczb ciągu liczba 3 w tablicy ma indeks 2 stąd int i = 2, pętla ta będzie się wykonywać o 2 mniej niż podana przez nas liczba ponieważ 2 pierwsze wyrazy ciągu są już znane tak więc jak n=5 to pętla for zostanie wykonana 3 razy int i=2, int i=3, int i=4 stop int i=5 już się nie wykona bo nie spełnia warunku
// natomiast druga pęta wyświetli wszystkie wyrazy ciągu bo w niej int i = 0 w indeksie wartość 0 to wartość pierwszego wyrazu
// aby można było wyznaczyć więcej wyrazów ciągu użyty został typ danych long double który mieści większe wartości
// biblioteka iomanip manipulowanie strumieniami wejścia wyjścia 
//cout << setprecision(10000); odpowiada za wyświetlanie wartości do 10000 znaków (ustaw precyzje)