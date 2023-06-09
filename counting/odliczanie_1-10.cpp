#include <iostream>
using namespace std;

int main()
{
    for (int i = 1; i <= 10; i++)
    {
        cout << i << endl;
    }
    return 0;
}
// petla to specjalna insturkcja ktora ma powtarzac dzialanie okreslona ilosc razy
// petla = insturkcja iteracyjna iteratio= powtarzanie
// iteracja = pojedyncze wykonanie pętli, więc jeśli pętla wykonuje się 5 razy to znaczy, że składa się z 5 iteracji
//iterator = licznik w pętli czyli liczba, która przechowuje numer właśnie wykonującej się iteracji, zmienna ta tradycyjnie nosi nazwę i 
// for (wykonaj się tyle razy ile liczba całkowita (int) i której pierwsza wartość to 1, wartość tej liczby nie będzie mniejsze lub równe 10, za każdym razem i++ czyli inkrementacja (zwiększzanie o 1, można by to zapisać też jako i=i+1) czyli jak liczba całkowita = 1 oraz jest mniejsza lub równa zinkrementuj tą liczbę o 1, liczba całkowita = 2 oraz jest mniejsza od 10 więc zwiększ o jeden 
// rób to do puki i będzie równe 10, zrobione jest <= czyli mniejsze bądź równe ponieważ 2 jest mniejsze od 10 a  gdyby było i=10 to dla i=2 pętla by się nie wykonała
// za każdym wykonaniem pętli wyświetlamy numer iteracji i czyli jak wykona się raz to wyświetlimy 1 (po pierwszym wykonaniu i wzrasta o 1 i kiedy warunek ponownie jest spełniony to ponownie wyświetla numer iteracji w tym przypadku 2 robi tak do puki warunek nie będzie spełniony czyli w przypadku liczby 11 która nie jest mniejsza lub równa 10
// i-- lub i=i-1 dekrementacja zmniejszanie o 1
// iterator i to zawsze int - liczba całkowita bo nie możliwe jest żeby pętla wykonała sie niecałkowitą ilośc razy
// (int i=1; i<=10;i++) int i=1 - od czego zaczynam, i++ co robie za każdym razem, do kiedy to robie i<=10
