#include <iostream>
#include <cstdlib>
#include <time.h> //lub ctime 
using namespace std;
int liczba, strzal,ile_prob=0;
int main()
{
   cout << "WItaj! Pomyslalem sobie liczbe z zakresu 1-100"<<endl;
   srand(time(NULL));
   liczba = rand() % 100+1;
  

   while(liczba!=strzal)
   {
	   ile_prob++;
	   cout << "Zgadnij jaka (to Twoja "<<ile_prob<<" proba):";
	   cin >> strzal;
	   if (liczba == strzal)
	   {
		   cout << "Zgadles w "<<ile_prob<<" probie, pomyslalem liczbe : " << strzal<<endl;
		   
	   }
	   else if (liczba < strzal)
	   {
		   cout << "Liczba, o ktorej mysle jest mniejsza!"<<endl;
		   

	   }
	   else if (liczba > strzal)
	   {
	   cout << "Liczba, o ktorej mysle jest wieksza!"<<endl;
	  
	   }
   }
   //system(pause) odpowiada za zatrzymanie programu przed wyłączaniem do czasu aż ktoś naciśnie enter
   //lub getchar() czyli zaczekaj na znak, ale wtedy trzeba by dodać biblioteke stdio.h
   return 0;
}
// czas w systemie windows jest przechowywany jako liczba sekund od 1970 roku
// aby pseudolosowość działała to system pobierze sobie liczbe sekund, która mineła od 1970 roku aby zamienic tą liczbę na liczbę z zakresu od 1 do 100 można podzielić przez 100 z resztą, żadna liczba podzielona przez 100 nieda reszty większej niż 99 np 199 /100 = 1 i 99 reszty, takie wyznaczanie reszty z dzielenia to modulo czyli w c++ działanie to oznaczane jest %
//rand z ang. oznacza random czyli losowy
// komputer wylosuje mi liczbę od zera do tej liczby, która wstawie po %, bo reszta z dzielenia przez tą liczbę zawsze musi być mniejsza od tej liczby (gdyby była taka sama to po prostu nie byłoby reszty)
// skoro komputer losuje od 0 do liczby którą wpisałem po % to za każdym razem po wylosowaniu będzie trzeba zwiększyć tą liczbę o 1 bo nas interesuje zakres od 1 do 100
//srand - start randomizing 
// time () pobiera czas time(null) pobierz czas który minął od 1970 do czasu wywołania tej linijki do teraz, podawany w sekundach
// != nie równa się, jest różny
