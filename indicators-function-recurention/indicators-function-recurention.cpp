#include <iostream>
#include <locale.h>

using namespace std;

float srednia(float *tab, int ile)
{
    float suma=0;

    for (int i = 0; i < ile; i++) // wykonuje się tyle razy ile jest szufladek 
    {
        suma += *tab; 
        *tab = 999; // jeśli pracowaliśmy na oryginałach to wszystkie szufladki=999
        tab++;//wskaźnik będzie przechodził na nowe szufladki a wszystko zsumuje sie


    }
    return suma / ile;
}
int main()
{
    
    setlocale(LC_CTYPE, "Polish");
    float tablica[3];

    tablica [0] = 1.5;
    tablica[1] = 2.3;
    tablica[2] = 0.75;

    cout << "Średnia wynosi: " << srednia(tablica, 3)<<endl;
    cout << tablica[0] << endl; 
    cout << tablica[1] << endl;
    cout << tablica[2] << endl;

    return 0;
}
// potrzebujemy przesłać funkcji 2 rzeczy, wskaźnik do tablicy floatów którym jest automatycznie nazwa tablicy (niekoniecznie ta sama nazwa bo to jest argument formalny), musimy zaznaczyć, że to wskaźnik więc *tab
// po drugie potrzebujemy powiedzieć funkcji ile jest szufladek w tablicy np int ile
//srednia(tablica, 3); posyłamy tej funkcji nazwę tablicy (wskaźnik do zerowej szufladki) oraz ilość elementów 
// suma += *tab; gwiazdki używam aby dostać się do tego na co wskazuje wskaźnik tab czyli do tej liczby w zerowej szufladce tablicy