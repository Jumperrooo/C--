#include <iostream>
#include <fstream> // file plik, stream strumień danych
#include <cstdlib>
#include <locale.h>
#include <string> // bez tego nie działa string przez co nie działał getline !!!!!

using namespace std;



string imie, nazwisko;
int nr_tel;
int nr_linii=1;

int main()
{
  
    fstream plik;
    plik.open("card-record.txt", ios::in);
    
    if (plik.good() == false)
    {
        cout << "Plik nie istnieje!";
        exit(0);
    }

    string linia;
    
    while(getline(plik,linia))
    {
        switch (nr_linii)
        { 
        case 1: imie = linia; break;
        case 2: nazwisko = linia; break;
        case 3: nr_tel = atoi(linia.c_str());  break;
        }
        nr_linii++;
    }
    plik.close();

    cout << imie << endl;
    cout << nazwisko << endl;
    cout << nr_tel << endl;

    return 0;
}
// aby odczytać zawartość pliku zmieniamy w instrukcji open z out na in tak jak jest cout i cin 
// trybu dopisywania tutaj nie potrzebujemy ios::app
// tutaj gdy plik nie istnieje to próba odczytu zakończy się krytycznym błędem
// aby sprawdzić czy plik istnieje możemy użyć instrukcji warunkowej if 
// if(nazwa_zmiennej_plikowej.good()==false)
// good sprawdza czy wszystko jest dobrze z plikiem zwraca ona true gdy plik istnieje a false jak nie istnieje, stąd == aby sprawdzić czy wartość funkcji good jest równa false
// good zawsze występuje z nawiasami good() 
//podobnie jak w plik.open w przypadku funkcji good kropka też służy aby zaznaczyć, że funkcja good ma być wykonana na rzecz zmiennej plikowej "plik"
// danych nie będziemy odczytywać za pomocą >> operatorów strumienia jak mogłoby się wydawać, ponieważ każdy tzw. znak biały w tym spacja jest uznawany w strumieniu za separator czyli coś co rozdziela dwa napisy a nam czasem przyjdzie czytać napisy zawierające spacje 
// funkcja która pobierze całą linie nawet ze spacjami funkcja ta nazywa się getline() czyli pobierz linie, w nawiasie piszemy skąd te linie pobrać ze zmiennej plikowej o nazwie "plik" gdzie zapisać  (odzielone ",") w zmiennej string (łańcuch znaków)
// funkcja ta zwróci fałsz kiedy lini nie uda się pobrać, bo linie w pliku się np. wyczerpały, w innym przypadku zwraca prawda i odczyt jest kontynułowany
// aby linie były pobierane do skutku zamykamy to w pętli while która będzie działać do puki watrość getline jest true czyli do puki pobierze wszystkie linie
// aby program wiedział którą linie odczytać trzeba dodać zmienną nr_linii i najlepiej od razu napiszmy, że startujemy od lini 1 czyli nr_linii=1 wartość tą będziemy inkrementować aby umożliwić przechodzenie do następnych lini 
// pozostaje przypisać linie opatrzone kolejnymi numerami do odpowiednich zmiennych np linia 1 zmienna imie itd
// aby to zrobić użyjemy switcha, case 1: imie=linia, dane po pobraniu zostają zapisane w specjalnie stworzonej zmiennej linia typu string stąd więc jak chcemy zapisać (nadać) tekst do innej zmiennej to robimy to za pomocą = (przypisz wartość)
// dwie pierwsze linie zostaną pobrane normalnie ale numer jest liczbą więc trzeba przekonwertować string'a na int'a (z napisu zrobić liczbę)
// aby to zrobić 
// atoi(nazwa_zmiennej_której_chcemy_nadać_wartość=zmienna użyta w getline . c_str())
// numer telefonu jest równy lini tekstu (string przekonwertowanej c_str() na liczbę za pomocą funkcji atoi, . tutaj działa tak jak w plik.open
// i oznacza tutaj intiger
