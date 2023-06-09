#include <iostream>
using namespace std;
int main()
{
    cout << "Hello World!"<<endl;
    return 0;
}
// instrukcja include służy do podpinania do programu gotowych do wykorzystania bibliotek 
//io to akronim od słów input output iostream - strumień wejścia wyjścia 
// użuwa przestrzeni nazw standard 
// bez tego musielibyśmy pisać std::cout
// funkcja główna - main, główna funkcja czyli zestaw zadań do wykonania w naszym programie kiedy ten zestaw zadań zostaje wykonany wtedy ten program się zakończy, klamry {} definują początek i koniec wykonywania sie głównej funkcji
// int - integer liczba całkowita
// główna funkcja main w momencie wyczerpania zadań do wykonania ma zwrócić "return" liczbę, która jest całkowita jako taki umowny sygnał zakończenia pracy
// cout-consol output
 // endl przejście do następnego wiersza w konsoli
    // << operatory wysyłania do strumienia, oddzielają kolejne rzeczy do wypisania 
    // prawie każda linia w c++ zakończona jest ";", ponieważ w edytorze kompletnie ignorowane są tzw. znaki białe czyli spacje, tabulacje, znaki nowej lini
    // strumień wejścia (klawiatura, skaner - dane do komputera z urządzeń) strumień wyjścia (monitor, drukarka - dane z komputera do urządzeń)
    // insturkcja cout pisze po ekranie więc tak naprawdę podaje dane do strumienia wyjściowego nawet operatory << sugerują kierunek przesyłu tych danych i ostatecznie ten strumień wyjściowy trafia na monitor 
// skoro napis return 0; kończy program to nie ma sensu pisanie niczego poniżej tej lini ponieważ cokolwiek wpiszemy pod tą liniąi tak się nie wykona 