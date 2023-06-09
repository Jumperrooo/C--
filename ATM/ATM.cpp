#include <iostream>
using namespace std;
string PIN;
int main()
{
    cout << "Witaj w naszym banku "<<endl;
    cout << "Podaj pin: "; 
    cin >> PIN;

    if(PIN=="1729")
    {
        cout << "Poprawny PIN";
    }
    else
    {
        cout << "Bledny PIN";
    }

    return 0;
}
// instrukcja warunkowa if, porównaj czy to co jest w nawiasie jest prawdą jeśli tak to coś jeśli nie "else" to co innego
// == porównuje to co po lewej a to co po prawej, porównaj PIN do 1729 
// jeśli do wykonania po if jest tylko jedna instrukcja to klamer możemy nie pisać
// ponieważ PIN to ciąg znaków to wpisujemy go w "" jak każdy normalny tekst
// if() w nawiasie wpisujemy warunek chcemy sprawdzić czy zminna PIN=1729 wiec to wlasnie tam wpisujemy
// w c++ wielkość liter ma znaczenie, jest rozróżniana pin nie równa sie PIN
// jeśli pin będzie zaczynał się od 0 np 0123 to 0 zostanie uznane za niepotrzebne i będzie obcięte, jak zapiszemy go jako ciąg znaków to 0 zostanie potraktowane jak każdy inny znak "string" łańcuch znaków
// cin>> PIN  to znaczy ja wkładam coś do zmiennej PIN
// != nie równa się
// gdybyśmy chcieli wypłacać pieniądze to wpisalibyśmy instrukcje w pierwsze klamry TUTAJ if(PIN=="1729") {...}
/**/