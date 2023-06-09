#include <iostream>
#include <locale.h>
#include <string>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_CTYPE, "Polish");
    
    string wyraz;
    cout << "Podaj wyraz, który chcesz odwrócić: ";
    getline(cin,wyraz);
    
    int dlugosc = wyraz.length();

    for (int i = dlugosc-1; i >= 0; i--)
    {
        cout << wyraz[i];
        
    }

    return 0;
}

// podobnie jak w płeć.cpp tutaj też używamy funkcji length, można wypisać wyraz na ekranie jeśli zaczniemy wyświetlać literę od końca do początku 
// zrobiłem to sam
// kiedy do wczytywania stringa z klawiatury użyjesz cin - nie zapisuje niczego po wystąpieniu spacji, dzieje się tak, ponieważ w strumieniu wejściowym spacja jest traktowana jako separator, program uznaje,że napis się wtedy kończy,aby rozwiązać ten problem można użyć getline(), najpierw wpisane aby użyć strumienia wejściowego a następnie zapisz wynik do zmiennej o podanej nazwie, to wystarczy aby pobierać całe sentencje



