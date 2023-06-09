#include <iostream>
#include <Windows.h>
using namespace std;
int populacja = 1, godzin = 0;
int main()
{
    do
    {
        godzin++;
        populacja = populacja * 2;
        cout << "minelo godzin:" << godzin << " liczba bakteri: " << populacja << endl;
        Sleep(250);

    } while (populacja <= 1000000000);
    return 0;
}
// do z ang. wykonuj
// schemat pętli do while 
// do {instrukcje} while(warunek);
// w pętli while najpierw wykonywany jest warunek i tylko kiedy jest on spełniony wykonywane są insturkcje a w pętli do while najpierw wykonywane są insturkcje a później sprawdzany warunek
// instrukcje w pętli while nie wykonają się ani razu jeśli warunek nie będzie spełniony a w pętli do while wykonają się zawsze przynajmniej jeden raz