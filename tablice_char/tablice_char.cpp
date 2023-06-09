#include <iostream>
#include <locale.h>
using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    char *napis[20]="Ala ma kota";
    cout << napis << endl;
    
    napis = "kot";
    cout << napis << endl;
    return 0;

}
//liczba 20 w char napis[20] stanowi tak na prawdę maksymalną długość przechowywanego napisu
// tak więc poszczególne litery zostaną przypisane do poszczególnych szufladek (indeks) numerowanych od 0
// po ostatniej literce napisu do pamięci zostaje zapisany specjalny znak mający kod o numerze 0 "\0" nazywamy go NULL, null'a zapisujemy do tablicy żeby wiedzieć kiedy się napis kończy czyli który znak jest ostatni np do wypisania na ekranie, języki typu c używają null'a stąd w zdaniu ala ma kota literka a ma indeks 0 a wartość null jest w indeksie 11 (spacje też się liczą stąd tyle szufladek)
// po dodaniu napis = "kot"; otrzymujemy komunikat o niezgodności długości napisów, aczykolwiek można zapisać taką tablice z użyciem gwiazdki, co oznacza użycie wskaźnika
// TO JEST HISTORIA WIĘC TEN KOD JEST TYLKO ABY POKAZAĆ JAK KIEDYŚ TO WYGLĄDAŁO TERAZ PRZECIEŻ MAMY STRING'A