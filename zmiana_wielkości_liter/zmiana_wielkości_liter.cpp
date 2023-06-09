#include <iostream>
#include <locale.h>
#include <string>
#include <algorithm> // aby działał transform

using namespace std;
int main()
{
    setlocale(LC_CTYPE, "Polish");

    string napis_1,napis_2;
    cout << "Podaj pierwszy napis: ";
    getline(cin, napis_1);
    cout << "Podaj drugi napis: ";
    getline(cin, napis_2);
    transform(napis_1.begin(), napis_1.end(), napis_1.begin(), ::toupper);
    transform(napis_2.begin(), napis_2.end(), napis_2.begin(), ::tolower);
    cout << napis_1<<endl;
    cout << napis_2;
   

    return 0;
}
// w transform najpierw piszemy nazwe zmiennej begin potem end potem znow begin a potem po przecinku i :: funkcje