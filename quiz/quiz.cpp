﻿#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <locale.h>
#include <algorithm> // aby dało się zamienić duże na małe litery

using namespace std;

string temat, nick;
string tresc[5];
string odpA[5], odpB[5], odpC[5], odpD[5];
string poprawna[5];
string odpowiedz;
int punkty=0;

int main()
{
	setlocale(LC_CTYPE, "Polish");
	int nr_linii=1;
	string linia;
	int nr_pytania = 0;

	fstream plik;
	plik.open("quiz.txt",ios::in);

	if (plik.good() == false)
	{
		cout << "Plik nie istnieje";
		exit(0);
	}
	while (getline(plik, linia))
	{
		switch (nr_linii)
		{
		case 1: temat = linia;					break;
		case 2: nick = linia;					break;
		case 3: tresc[nr_pytania] = linia;		break;
		case 4: odpA[nr_pytania] = linia;		break;
		case 5: odpB[nr_pytania] = linia;		break;
		case 6: odpC[nr_pytania] = linia;       break;
		case 7: odpD[nr_pytania] = linia;		break;
		case 8: poprawna[nr_pytania] = linia;	break;



		}
		if (nr_linii == 8) { nr_linii = 2; nr_pytania++; }
		nr_linii++;
	}

	plik.close();

	for (int i = 0; i <= 4; i++)
	{
		cout << endl << tresc[i] << endl;
		cout << "A. " << odpA[i] << endl;
		cout << "B. " << odpB[i] << endl;
		cout << "C. " << odpC[i] << endl;
		cout << "D. " << odpD[i] << endl;

		cout << " Jaka jest twoja odpowiedź: " << endl;
		cin >> odpowiedz;

		transform(odpowiedz.begin(), odpowiedz.end(), odpowiedz.begin(), ::tolower);

		if (odpowiedz == poprawna[i])
		{
			cout << "Dobrze! Zdobywasz punkt!" << endl;
			punkty++;
			
		}
		else
		{
			cout << "Zła odpowiedź! Poprawna odpowiedź to: " << poprawna[i];
		
		}
	}
	cout<<endl<< "Koniec quizu!"<<endl<<"Gratulacje zdobyłeś: " << punkty << " punktów!";
    return 0; 

}

// temat przechoujwe informacje z jakiej dziedziny jest quiz 
// nick przechowuje ksywke 
// tresc - ta tablica przechowuje tresc wszystkich 5 pytan 
// if (nr_linii == 8) { nr_linii = 2; nr_pytania++; } 
// gdy numer lini osiągnie 8 to z powrotem przywrócimy mu wartość 3, bo po nr_linii=2 jest jescze inkrementacja nr_lini++;
// w miejsce indeksu w tablicach odpA do odpD oraz w tablicy poprawna jest wpisana zmienna nr_pytania która z każdym wykonaniem pętli jest inkrementowana więc jak kod przypisze dane do zmiennych i nr_linii osiągnie wartość 8 to kod ponownie wróci do lini 2 ale później nr lini jest inkrementowany więc tak naprawdę do lini 3, numer pytania też jest inkrementowany więc teraz indeksem już będzie 1, kod będzie robił to do momentu aż wyświetli wszystkie linie z pliku tekstowego (aż znajdzie pustą linie)
// for(int i=0;i<=4;i++) od 0 do 4 bo tak są ponumerowane pytania w tablicach
// funkcja transform służy m.in do zmiany dużych liter na małe
// w begin podajemy początek napisu poźniej w end koniec i jeszcze raz początek, nie zapomnij o "," po ostatnim begin 
// ::tolower odpowiada za zamiane na małe litery
