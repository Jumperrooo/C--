#include <iostream>
#include <conio.h>
using namespace std;
float oceny [100000000];
float suma = 0, srednia;
int ile_razy = 0, ile_liczb;
int main()
{
	cout << "Z ilu liczb chcesz obliczyc srednia: ";
	cin >> ile_liczb;
	
	for (int i = 0; i <=ile_liczb-1; i++)
	{
		cout << endl << "Podaj "<<i+1<<" ocene: ";
		cin >> oceny[i];
		suma += oceny[i];
		ile_razy++;
		
  }
	srednia = suma / ile_razy;
	cout << endl << "Srednia = " <<srednia;
  return 0;
}
//tablica to zestaw zmiennych jednego typu 
// tylko raz określamy nazwe i typ w [] piszemy ile "zmiennych" w tablicy chce zarezerwować np int pomiary[300] zbiorcza nazwa pomiary, jedyne co trzeba napisać to jaki numer ma szufladka do której chcemy coś wpisać lub pobrać, szufladki są numerowane od 0 (jak w indeksach), aby wyświetlić cout <<pomiary[numer szufkadki] [] są zarezerwowane dla tablic jako miejsce do wpisania indeksu zmiany w tablicy muszą być tego samego typu 
// float przechowuje liczby zmiennoprzecinkowe(z przecinkiem) ang. floating point
// pamiętaj jak masz float ocena[5] to kolejne oceny są ponumerowane od 0 do 4\
// cin oceny i spowoduje, że za każdym razem jak wykona się pętla numer aktualnej iteracji  będzie "id" szufladki w tablicy, szufladki są od 0 do 4 dlatego i=0 na początku oraz i<5 żeby wykonało się dokładnie 5 razy i jest inkrementowane "i++" za każdym razem jak wykona sie pętla więc będzie ono zwiększane o jeden za każdym razem wykonania pętli co powoduje przejście do następnych szufladek w tablicy 
// jak chcemy pokazać liczbę większą od zmiennej to zrobic po propstu tak zmienna+1, zmienna-1, zmienna:2 itd.
//aby zsumować wartości można wstawić do pętli suma=suma +oceny[i] za każdym razem wykonania pętli do sumy (początkowa wartość = 0) zostanie dodana wartość z szufladki o podanym indeksie [i] w ten sposób za każdym razem do "suma" zostanie dodana nowa wartość z szufadki w tablicy
// += oznacza do tego co jest po lewej stronie dodaj to co po prawej i zapisz jako wartość tego po lewej, jest to równoznaczne z suma = suma + coś
// można z tablic zrobić macierze, czy tabele float oceny[][] teraz mamy indeks wiersza oraz indeks kolumny (dwie współrzędne)
// jako ilość krotek w tablicy można w tym przypadku maksymalnie przypisać 100 milionów
// dzięki dwóm dodatkowym zmiennym możęmy wybrać z ilu liczb obliczyć średnią (ile_liczb) oraz w procesie obliczania średniej użyta jest druga zmienna o nazwie ile_razy która za każdym razem inkrementowana jest podczas wykonania pętli tak, że jak pętla wykona się 5 razy to dzielnik będzie równy 5
// for (int i = 0; i <=ile_liczb-1; i++) jest tutaj i <=ile_liczb-1 ponieważ pętla będzie wykonywać się do puki "i", którego wartość początkowa to 0 a zwiększa się ona o 1 z każdym wykoananiem pętli, będzie mniejsze lub równe podanej przez nas wartości np. wybraliśmy liczbę 5 czyli pętla będzie działać dopuki i<=4 czyli int i=0,int i=1,int i=2,int i=3,int i=4 stop int i=5 nie wykona się bo nie spełnia warunku
