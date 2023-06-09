#include <iostream>
#include <locale.h>
#include <time.h>
#include <cstdlib>

using namespace std;
int ile;
clock_t start, stop; // uruchomienie i zatrzymanie odliczania czasu 
double czas; // przechowuje czasu wraz z wartością po przecinku
int main()
{
	setlocale(LC_CTYPE, "Polish");

	cout << "Ile liczb w tablicy: ";
	cin >> ile;

	int* tablica;
	tablica = new int[ile];

	start = clock(); // zacznie liczyć czas ponieważ funkcja clock pobiera liczbę cykli procesora

	for (int i = 0; i < ile; i++)
	{
		tablica[i] = i;
		tablica[i] += 50;
	}
	stop = clock(); // zatrzymuje odliczanie czasu
	czas = (double)(stop - start) / CLOCKS_PER_SEC;

	cout << "Czas zapisu bez wskaźnika: " << czas << endl;
	delete[] tablica;
	
   tablica = new int[ile];
   int* wskaznik = tablica;
   start = clock();

   for (int i = 0; i < ile; i++)
   {
	   *wskaznik = i;
	   *wskaznik += 50; 
	   wskaznik++; // musimy przestawić wskaźnik na inną szufladke, bo nie mamy już nawiasu kwadratowego z i w środku 
   }
   stop = clock(); 
   czas = (double)(stop - start) / CLOCKS_PER_SEC;

   cout << "Czas zapisu ze wskaźnikiem: " << czas << endl;
   delete[] tablica;


   return 0;

}
// ponownie wykorzystane rzutowanie typu zmiennych (double) żeby dotyczyło to obu zmiennych to dajemy je w nawias - (stop - start)
// aby z tej różnicy dostać wartośćw sekundach trzeba to podzielić prze stałą o nazwie clocks_per_sec
// (double) jest po to aby do zmiennej czas została zapisana wartość zmiennoprzecinkowa a nie typu clock_t (zawsze otrzymamy ilość w sekundach) 
// możemy na raz zapisać te wartości dla 10.000 szufladek a i tak pokaże zero sekund bo komputer jest tak szybki (żeby zobaczyć wartość wielkie liczby)
// bez wskażnika dla 1.000.000.000 zajeło to 6.113 sekund
// ograniczeniem ilości zarezerwowanych szufladek jest 2 do potęgi 64 (64 bitowy system)
// w pierwszej iteracji gdy i =0 zapisuje numer iteracji do 0 szufladki w tablicy na którą wskazuje wskaźnik używamy więc gwiazdki 
// ze wskaźnikiem dla 1.000.000.000 zajeło to 5.191 sekund
// najczęściej tablice przekazuje się do podprogramu w oryginale, bo dużo czasu zajeło by kopiowanie każdej komórki tablicy