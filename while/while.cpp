#include <iostream>
#include <Windows.h>
using namespace std;
int populacja=1, godzin=0;
int main()
{
    while(populacja<=1000000000)
    {
        godzin++;
        populacja = populacja * 2;
        cout << "minelo godzin:" << godzin<<" liczba bakteri: "<<populacja<<endl;
        Sleep(250);
       
    }
    return 0;
}
// while - do puki, różni się ona od for tym że nie posiada wbudowanego licznika czyli iteratora, jedyne co tutaj musimy określić to warunek, który jeśli jest prawdziwy to pętla się wykona np while (liczba<10) do puki liczba jest mniejsza od 10 to wykonują się instrukcje w klamrach
// w każdej iteracji upływa godzina więc za każdym razem inkrementujemy liczbę godzin
// co godzine liczba bakteri zwiększa się tak, że z każdej jednej robią się dwie 
// jak osiągniemy miliard to pętla się przerwie samoczynnie