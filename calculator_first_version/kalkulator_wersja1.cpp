#include <iostream>
#include <locale.h>
#include <tuple>
#include <stdio.h>
#include <cstdlib>
#include <conio.h>

using namespace std;
float x, y,wynik;
char wybor;
int main()
{
	for (;;)
	{
		setlocale(LC_CTYPE, "Polish");
		cout << "Podaj pierwszą liczbę: ";
		cin >> x;
		cout << "Podaj drugą liczbę: ";
		cin >> y;

		cout << endl << "Menu Główne" << endl;
		cout << "------------------" << endl;
		cout << "1. Dodawanie" << endl;
		cout << "2. Odejmowanie" << endl;
		cout << "3. Mnożenie" << endl;
		cout << "4. Dzielenie" << endl;
		cout << "5. Wyjście" << endl;

		cout <<endl;
		wybor = _getch();

		switch (wybor)
		{
		case '1':
			wynik = x + y;
			if (x == 0 && y == 0)
			{
				cout << "Zero dodać zero to zawsze zero!";
			}
			else if (y == 0)
			{
				cout << "Dodawanie zera nie zmienia wyniku";
			}
			else if (x == 0)
			{
				cout << "Jak do zera dodamy jakąkolwiek liczbę to wynikiem zawsze będzie dodawana liczba!";
			}
			else
			{
				cout << x << " + " << y << " = " << wynik;
			}
			break;


		case '2':
			wynik = x - y;
			if (x == 0 && y == 0)
			{
				cout << "Zero odjąć zero to zawsze zero";
			}
			else if (x == 0)
			{
				cout << "Odejmowanie od zera " << y << "." << " Zawsze wynosi: " << y;
			}
			else if (y == 0)
			{
				cout << "Odejmowanie zera pozostawia " << x << " bez zmian.";
			}
			else
			{
				cout << x << " - " << y << " = " << wynik;
			}
			break;

		case '3':
			wynik = x * y;
			if (x == 0 && y == 0)
			{
				cout << "Zero pomnożone przez zero to zawsze zero!";
			}
			else if (x == 0 || y == 0)
			{
				cout << "Mnożenie działa na przemian zatem każda liczba mnożona przez zero daje zero!";
			}
			else
			{
				cout << x << " * " << y << " = " << wynik;
			}
			break;

		case '4':
			wynik = x / y;

			if (x == 0)
			{
				cout << "Zero dzielone przez każdą liczbę daje zero!";
			}
			else if (y == 0 || y == 0 && x == 0)
			{
				cout << "Nie dzielimy przez zero!";
			}
			else
			{
				cout << x << " / " << y << " = " << wynik;
			}
			break;

		case '5':
			{
			exit(0);
			}

		default:
			cout << "Nie ma takiej opcji w menu";

		}
		cout << endl;
		ignore=getchar(); ignore=getchar();
		system("cls");

	}
   return 0;
}
// instrukcja switch to instrukcja wyboru, daje nam możliwość sprecyzowania co się stanie jak wybierzemy daną wartość 
// aby aplikacja konsolowa obsługiwała polskie znaki trzeba dodać biblioteke locale.h oraz insturkcje "setlocale(LC_CTYPE, "Polish")"
// switch - przełącz w zależności od wartości zmiennej wpisywanej w nawiasie np (wybor)
// w przypadku - case wartości 1 np case 1: zrób konkretne działanie 
// koniec instrukcji dla danego przypadku "case" wyrażamy poprzez break; bez tego nie będzie działała funkcja wyboru
// {} nie są konieczne jeśli pomiędzy case a break jest tylko jedna insturkcja (u mnie nawet działa z dwoma instrukcjami), w razię błędów dodać klamry
// default odpowiada za wszystkie inne scenariusze, czyli jak wybierzemy inną wartość niż te sprecyzowane za pomocą case to wykonana zostanie instrukcja default'owa, dla default nie jest porzebny break;
// exit ostatecznie kończy cały program a w nawiasie mamy wpisać wartość int'a (może być 0)
// for (;;) to nieskończona pętla  inną nieskończoną pętlą jest while (true)
// getchar(); to instrukcja która oczekuje na naciśnięcie klawisza, jest wpisana podwójnie aby na pewno zadziałała
// ignore ignoruje wartość w nawiasie, nie pojawiają się ostrzeżenia, aby to działało trzeba dodać biblioteke tuple
//biblioteka conio.h, dzięki niej mamy menu reagujące na naciśnięte klawisze, responsywne sterowanie
// aby to menu reagujące na klawisze było możliwe trzeba zmienić tym zmiennej wybor na char - charakter (znak z klawiatury)
// aby wstawić do zmiennej wartość możemy też użyć funkcji _getch() - get character np
// wybor = _getch() nazwa_zmiennej=_getch() 
// UWAGA getch() jest przestarzałe trzeba używać _getch() (pamiętaj w przypadku typu danych char zawsze używaj '...' ) lub getchar(), u mnie getchar nie działa 
// w c++ pojedyńcze znaki zapisujemy w '...' to są właśnie char'y character
// zmienna sterująca switch'em może być char'em lub int'em, ale już nie float'em ani string'iem, wymagana jest wartość całkowita
// ponieważ teraz wybór jest char'em a nie int'em to program nie wysypie się jeśli wprowadzimy coś co liczbą nie jest (chodzi mi o etap wybierania działania a nie wprowadzania liczb, bo podczas tego drugiego wciąż jest błąd, bo tam jest typ danych int)
