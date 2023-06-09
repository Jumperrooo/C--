#include <iostream>
#include <list>
#include <windows.h>

using namespace std;

list <int> lista; //utworzenie listy przechowujacej liczby calkowite
int wybor;

//---------------------

void wyswietl()
{
    system("CLS");
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout << " ZAWARTOSC LISTY: " << endl;
    cout << "---------------------------" << endl;

    for (list<int>::iterator i = lista.begin(); i != lista.end(); ++i)
        cout << *i << " ";

    cout << endl;
    cout << "---------------------------" << endl << endl;
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
}

//-------- 1 ------------

void push_front()
{
    int liczba;
    cout << "Podaj jaka liczbe wstawic na pocz\245tek listy: ";
    cin >> liczba;
    lista.push_front(liczba);
}

//--------- 2 -----------

void push_back()
{
    int liczba;
    cout << "Podaj jaka liczbe wstawic na koniec listy: ";
    cin >> liczba;
    lista.push_back(liczba);
}

//---------- 3 ---------

void pop_front()
{
    cout << "Nast\245pi usuni\251cie liczby z pocz\245tku listy";
    Sleep(2000);
    lista.pop_front();
}

//---------- 4 ---------

void pop_back()
{
    cout << "Nast\245pi usuni\251cie liczby z konca listy";
    Sleep(2000);
    lista.pop_back();
}

//---------- 5 ----------

void size()
{
    cout << "Liczb na li\230cie: " << lista.size();
    Sleep(2000);
}

//---------- 6 ----------

void max_size()
{
    cout << "Max liczb na li\230cie: " << lista.max_size();
    Sleep(5000);
}

//---------- 7 ----------

void empty()
{
    cout << "Czy lista pusta? -> ";
    if (lista.empty() == 1) cout << "TRUE"; else cout << "FALSE";
    Sleep(2000);
}

//---------- 8 ----------

void remove()
{
    int liczba;
    cout << "Usun z listy wszystkie liczby rowne: ";
    cin >> liczba;
    lista.remove(liczba);
}

//---------- 9 ----------

void sort()
{
    cout << "Nastapi posortowanie listy! ";
    lista.sort();
    Sleep(2000);
}

//---------- 10 ----------

void reverse()
{
    cout << "Nastapi odwrocenie kolejnosci liczb!";
    lista.reverse();
    Sleep(2000);
}

//---------- 11 ----------

void exit()
{
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
    cout << "Koniec programu!";
    Sleep(2000);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 0);
}
//------------------------

int main()
{

    do
    {

        wyswietl();

        cout << " MENU GLOWNE LISTY:" << endl;
        cout << "---------------------------" << endl;
        cout << "1.  push_front" << endl;
        cout << "2.  push_back" << endl;
        cout << "3.  pop_front" << endl;
        cout << "4.  pop_back" << endl;
        cout << "5.  size" << endl;
        cout << "6.  max_size" << endl;
        cout << "7.  empty" << endl;
        cout << "8.  remove" << endl;
        cout << "9.  sort" << endl;
        cout << "10. reverse" << endl;
        cout << "11. exit" << endl;
        cout << "---------------------------" << endl;
        cout << "Wybor: ";
        cin >> wybor;

        switch (wybor)
        {
        case 1:  push_front(); break;
        case 2:  push_back();  break;
        case 3:  pop_front();  break;
        case 4:  pop_back();   break;
        case 5:  size();       break;
        case 6:  max_size();   break;
        case 7:  empty();      break;
        case 8:  remove();     break;
        case 9:  sort();       break;
        case 10: reverse();    break;
        case 11: exit();       break;

        default:
            cout << "POMYLKA!";
            Sleep(2000);
            break;
        }

    } while (wybor != 11);

    return 0;
}
// lista to struktura danych służąca do przechowywania nieznanej z góry ilości informacji tego samego typu. Składa się ona z węzłów (ang. nodes), które zawierają dane przechowywane w liście oraz wskaźnik do kolejnego (a w przypadku listy dwukierunkowej także do poprzedniego) elementu
// pierwszy węzeł nazywamy głową a ostatni ogonem
// w liście jednokierunkowej występuje także blok info czyli informacyjny zawierający wskaźnik do pierwszego i ostatniego elementu
// w liście dwukierunkowej każdy węzeł zawiera wskaźnik do następnego ale też poprzedniego wskaźnika (blok info też jest) (kosztem pamięci przyspiesza ona prace)
// lista z wartownikiem (cykliczna )
// wskaźnik poprzedniego elementu w węźle pierwszym ustawiono na węzeł ostatni natomiast wskaźnik następnego węzła dla ostatniego elementu ustawiono na tzw. wartownik
// wartownik pilnuje informacji który element jest głową (przechowuje on informacje który element jest pierwszy
// funkcje obsługujące listę 
//push_front() dodaje element na początku listy
//push_back() dodaje element na końcu listy
//insert() dodaje element we wskazanym miejscu listy
//pop_front() usunie element z początku listy
//pop_back() usunie element z końca listy
//size() zwraca liczbę elementów na liście 
//max_size() zwraca maksymalną liczbę elementów jakie może zmieścić lista
//empty() sprawdza czy lista jest pusta
//remove() usuwa z listy wszystkie elementy mające daną wartość (np. wszystkie węzły w których id_klienta=23)
//sort() układa elementy na liście rosnąco 
//reverse() odwraca kolejność elementów na liście