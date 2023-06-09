#include <iostream>
#include <fstream> // file plik, stream strumień danych

using namespace std;

string imie, nazwisko;
int nr_tel;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Podaj imię: ";
    cin >> imie;
    cout << "Podaj nazwisko: "; 
    cin >> nazwisko;
    cout << "Podaj numer telefonu: ";
    cin >> nr_tel;

    fstream plik; 
    plik.open("wizytówka.txt", ios::out|ios::app);

    plik << imie << endl;
    plik << nazwisko << endl;
    plik << nr_tel << endl;

    plik.close();


    return 0;
}
// zmienna plikowa "fstream" o dowolnej nazwie, tworzymy ją bo musimy jakoś nazwać plik w kodzie, czyli za każdym razem jak chcemy nawiązać połączenie z plikiem to musimy stworzyć zmienną plikową fstream aby program wiedział jak się ten plik nazywa
// do otwarcia pliku służy funkcja open (można korzystać z wielu plików w programie więc trzeba napisać, którego chce się użyć
//operator . mówi nam że funkcja open ma zostać wywołana na rzecz zmiennej plikowej o nazwie plik
// w nawiasie musimy dać ścieżkę dostępu do pliku, a po przecinku podajemy drugi argument funkcji, tryb otwarcia, ios::out oznacza input output stream out czyli wyprowadź, czyli pokieruj strumień danych z programu do pliku (otwarcie pliku do zapisu), jeśli takowy plik nie istnieje to przy pierwszej próbie zapisania danych zostanie od utworzony a jeśli istniał wcześniej to zostanie on przy zapisie pierwszej zmiennej automatycznie zastąpiony (nadpisany)
// gdybym chciał pokazać zawartość zmiennej imie na ekranie to zrobiłbym to tak 
// cout<<imie<<endl; w przypadku próby zapisu danych do pliku zamiast cout dajemy nazwe pliku
//aby zamknąć połączenie z plikiem wystarczy 
// ja << imie <<endl tak trakutuj zapisywanie ja coś otrzymuje cin >> coś ja coś daje 
// aby dopisać wartości do pliku tekstowego trzeba dodać nowy modyfikator do polecenia open modyfikator dopisujemy po "|" 
//ios::coś oddzielamy | od innego ios 
// ios::app append - załącz, dołącz
