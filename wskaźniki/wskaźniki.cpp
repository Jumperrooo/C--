#include <iostream>
#include <locale.h>
using namespace std;
int ile; 
int main()
{
    setlocale(LC_CTYPE, "Polish");

    cout << "Ile liczb w tablicy: ";
    cin >> ile;

    int* tablica;
    tablica = new int[ile];

    for (int i = 0; i < ile; i++)
    {
        cout <<(int) tablica << endl;
        tablica++;
    }

    delete[]tablica;

    return 0;
}

//wskaźnik to zmienna przechowująca w sobie adres w pamięci RAM innej zmiennej
// podajemy najpierw typ zmiennej na jaką ma wskazywać wskaźnik potem * potem nazwa wskaźnika w kodzie dalej chcemy zapisać do wskaźnika adres zmiennej np w=&liczba;
// & ampersand operator uzyskiwania adresu w pamięci tego co jest po jego prawej stronie 
// jak napiszemy tak cout<<w; to pokaże nam się adres zmiennej zapisanej we wskaźniku, jak chcemy wyświetlić rzeczywistą wartość zmiennej której adres przechowuje wskaźnik musimy napisać tak cout<<*w; (bez * pracujesz na wskaźniku, z gwiazdką pracujesz na zmiennej, której adres on przechowuje)
// co dają wskaźniki 
// dynamiczne rezerwowanie i zwalnianie obszarów pamieci 
//zwiekszenie szybkosci zapisu/odczytu komórek w tablicy 
// dawanie funkcjom do pracy oryginałów zmiennych z programu wywołującego 
// możliwość współpracy z urządzeniem zewnętrznym np.miernikiem
// dynamiczne alokowanie pamięci (w dowolnym momencie), statyczne po uruchomieniu programu i tuż przed jego zakończeniem 
// pozwala zarezerwować tyle miejsca ile potrzebujemy w RAM a jak już nie potrzebujemy to miejsce w RAM zostanie zwolnione 
// rezerwujemy zadaną ilość intów używając operatora new, ponownie podajemy typ rezerwowanej komórki np int a następnie w [] nazwe zmiennej która ma mówić ile komórek zarezerwować, nie używamy tutaj * bo nie chcemy zmienić adresu wskaźnika 
// kiedy używamy operatora new nie możemy zapomnieć o tak utworzonej tablicy - delete [] tablica; delete [] nazwa w naszym przypadku tablica 
//rzutowanie zmiennej na typ int (ponieważ adresy zmiennych we wskażnikach są zapisywane w systemie szesnastkowym musimy to zrobic) musimy dodać (int) cout <<(int) tablica << endl;
// int zajmuje w pamięci ram 4 bajty kolejne adresy będo o 4 większe (doble mają 8)
// jak zrobie tak w+=5; to komputer do adresu zmiennej w doda 5 * wielkość typu zmiennej np 5 * 4 (int) = +20
// nazwa tablicy w c++ jest jednocześnie adresem jej zerowego elementu więc zamiast pisać tak int *w; w=&tablica[0]; możemy napisać tak w=&tablica; 
// jeżeli nie podasz numeru szufladki w tablicy a jedynie jej nazwe to wskaźnik zostanie ustawiony na pierwszej z lewej szufladce (numer 0)