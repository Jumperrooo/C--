#include <iostream>
#include <locale.h>

using namespace std;

float metry;

float ile_cali(float m)
{
    return m * 39.37;
}
float ile_jardow(float x);

void ile_mil(float m)
{
    cout << "na mile: " << m * 0.0006213;
}

int main()
{
    setlocale(LC_CTYPE, "Polish");

    cout << "Podaj ile metrów: ";
    cin >> metry;

    cout << "na cale: " << ile_cali(metry) << endl;;
    cout << "na jardy: " << ile_jardow(metry) << endl;;
    ile_mil(metry);

    return 0;
}
float ile_jardow(float x)
{
    return x * 1.0936;
}
// funkcja to podprogram czyli jakaś konkretna czynność do wykonania
// program komuterowy to zespół współpracujących ze sobą programów, zarządzanych programem głównym o nazwie main()
// () są zarezerwowane dla funkcji, w nawiasach są argumenty czyli to co dostaje ta funkcja 
// podczas tworzenia funkcji najpierw trzeba określić typ zwracanej wartości w naszym przypadku float trzeba określić nazwę i argumenty w nawiasach 
// float ile_cali(float m) <--- nagłówek funkcji { ciało funkcji }
// funkcje najlepiej umieszczaj pomiędzy using namespace std a int main
// w c++ zwracamy coś za pomocą return np w int main jest return 0; , warto zauważyć terminologie int liczby całkowite return 0; 0 jest liczbą całkowitą
// return służy do przekazania wartości do funkcji wywołującej lub do zakończenia wykonywania funkcji
// w liczbach jak chcesz podać wartość po przecinku używasz . np 35.67
// zmienna cale nie będzie widoczna dla funkcji main, będzie widoczna tylko dla funkcji ile_cali, nazywa się to zasięgiem widoczności zmiennej
// zmienna widoczna tylko w jednej funkcji to zmienna lokalna bo można się nią posługiwać tylko pomiędzy {} 
// zmienna metry to zmienna globalna bo nie znajduje się w żadnej funkcji, jest ponad nimi
// funkcja nie powinna korzystać ze zmiennych globalnych 
// jedyny bezpieczny sposób podawania zmiennej do podprogramu to podanie jej jako argument w nawiasie o nazwie przyjętej na potrzeby pracownika, niezależnej od programu głównego 
// aby program główny wywołał podprogram, wywołujemy funkcje po jej nazwie 
// wysyłamy funkcji ile_cali w nawiasie ilość metrów podanych z klawiatury, w głównym programie nosi ona nazwę metry
// to co wysyłamy do funkcji to jej argument(może być ich wiele) 
// float ile_cali(float m) argument tej funkcji nazywany jest formalnym, czyli jak formalnie nazywa jakąś zmienną podprogram, ponadto zmienna m istnieje tylko w obrębie funkcji ile_cali więc nie moglibyśmy się nią posługiwać w programie głównym 
//ile_cali(metry); natomiast ten argument który znajduje się w wywołaniu funkcji nazywany jest argumentem aktualnym, ten parametr dla którego aktualnie wywołana została funkcja (argument z punktu widzenia szefa)
// funkcja main wywoła podprogram i wyśle mu wartość podaną z klawiatury, pracownik (podprogram) weźmie argument z funkcji głównej i będzie go od tej pory nazywać zmienną m, przemnoży m przez 39.37 i zwróci szefowi wynik pod 
// w tym przypadku jeśli chcemy otrzymać wynik pracy podprogramu to musimy ile_cali(metry) umieścić w cout 
// cout<<ile_cali(metry); tak jakby program zastąpił ile_cali(metry) wartością obliczoną przez ten podprogram cout <<wartość
// kiedy podprogram zajmuje wiele lini możemy zrobić tak że na górze dajemy float ile_jardow(float x); ze średnikiem, tutaj tylko dajemy znać,że jest taka funkcja. A za funkcją main odwołujemy się do funkcji float ile_jardow(float x){}
// główny program w tej linijce ile_jardow(metry) przekazuje podprogramowi tylko wartość zmiennej metry a nie całą zmienną
// podprogram nie ma dostępu do oryginalnej warotości zmiennej metry wieć tworzy jej kopie w tym przypadku jako zmienną float m, nazywamy to przesyłaniem przez wartość, bo podprogram dostał tylko wartość zmiennej ale nie ma prawa dotykać samej zmiennej 
// natomiast gdyby "szef" udostępnił podprogramowi całą zmienną nie tylko jej wartość to nazywa się to przesyłaniem przez referencje, ale trzeba do tego użyć wskaźnika
// debugger pozwala nam widzieć wartości zmiennych w trakcie wykonania programu i pracować linia w lini w kodzie
// procedura to funkcja, która nic nie zwraca głównemu programowi, program, który nie zawiera wartości funkcji wywołującej
// procedura to po prostu fragment kodu, który został wycięty z głównego programu do podprogramu, i który można wielokrotnie wywoływać po nazwie
// tworząc procedure w miejsce gdzie wpisujemy jaki typ zmiennej zwraca funkcja dajemy słowo void np zamiast float ile_jardów dajemy void ile_mil
// void ang pustka
// ponieważ procedura nic nie zwraca to nie użyjemy słowa return
// zamiast tego wpiszemy cout<< który wyświetli wynik, stąd więc wywołanie procedury nie musi być wewnątrz cout bo cout jest już w void'zie, stosując procedure tracimy możliwość stosowania jej nazwy wewnątrz równań matematycznych, bo procedura nic nie zwraca pod swoją nazwą 
// dzięki funkcjom skracamy długość kodu, łatwiej poprawić ewentualne błędyz struktura programu ma sens, możemy ponownie wykorzystywać raz stworzone funkcje i wykorzystywać je dzięki czemu oszczędzamy czas, łatwiej można znaleźć bugi w testach

