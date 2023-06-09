#include <iostream>
#include <cstdlib>
using namespace std;
int miesiac ;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Podaj numer miesiąca: ";
    if (!(cin >> miesiac))
    {
        cerr << "To nie jest liczba!";
        exit(0);
    }

    switch (miesiac)
    {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    {
        cout << "Ten miesiąc ma 31 dni";
        break;
    }
    case 4:case 6:case 9:case 11:
    {
        cout << "Ten miesiąc ma 30 dni";
        break;
    }
    case 2:
    {
        int rok;
        cout << "Jaki teraz mamy rok: ";
        cin >> rok;
        if (((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0))
        {
            cout << "Ten miesiąc ma 29 dni";
        }
        else
        {
            cout << "Ten miesiac ma 28 dni";
        }
        break;
    }
    default:
    {
        cout << "Zły numer miesiąca.";
    }
    }
    return 0;
}

// aby odnieść się do kilku przypadku "case" na raz pisz je obok siebie lub jeden pod drugim np case 1: case 3: program wykona jeden scenariusz po drugim aż do napisania pierwszego break'a stąd break jest na końcu aby coś działało dla wszystkich podanych scenariuszy
// if (((rok % 4 == 0) && (rok % 100 != 0)) || (rok % 400 == 0)) instrukcja ta odpowiada za sprawdzenie czy rok jest przestępny 
// operator % to reszta z dzielenia czyli rok%x jeżeli reszta z dzielenia przez x to ... 
// jeśli ma się dzielić bez reszty to używamy ==0 przyrównaj do 0, (rok % 100 != 0) oznacza że reszta z dzielenia wartości zmiennej rok przez 100 ma być różna od 0 (ma być jakaś reszta nie może jej nie być )
// insturkcja warunkowa na początku kodu sprawdza czy cin nie zwrócił wartości fałsz, próbując wpisać litery lub inne znaki do zmiennej miesiac która ma tym int (liczby) wynikiem będzie właśnie fałsz bo nie da się tego zrobić;
// powyższy scenariusz działa też dla innych typów danych, jeśli wprowadzimy coś co nie spełnia wymagań typu danych (wartość fałsz) to za pomocą insturkcji if możemy powiadomić użytkownika o wpisaniu błędnych wartości
// strumień wyjściowy błędów - cerr  (consol errors)
//walidacja danych wejściowych czyli kontorla danych wejściowych, to właśnie odpowiada za sprawdzenie wprowadzanych przez nas wartości
// co fajne ten sposób walidacji działa tak że jak wprowadzimy kawałek (pierwszy) danych poprawnie to on usunie błędną resztę np. 4e zostanie potraktowane jak 4, lecz już e4 zostanie potraktowane jako fałsz
//dodatkowe możliwości walidacji np napisów, adresu mailowego czy ciągów alfanumerycznych odnajdziemy w bibliotece cctype
