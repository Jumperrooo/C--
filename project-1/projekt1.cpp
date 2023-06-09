#include <iostream>
using namespace std;
int uczniowie, cukierki,x,y;

int main()
{
    cout << "Ile uczniow jest w twojej klasie: ";
    cin >> uczniowie;
    cout << "Ile cukierkow mama kupila w tym roku: ";
    cin >> cukierki;
    x = cukierki / (uczniowie - 1);
    cout << "Cukierkow dla kazdego ucznia: " << x;
    y = cukierki - x*(uczniowie -1);
    cout <<endl<< "Cukierki dla Jasia na wieczor: " << y;
    return 0;
}
// na pojemnik który przechowuje dane mówimy zmienna var variable (zmienna bo często może ulegać zmianie jej zawartość 
// c out wypisać 
// c in wpisać 
// ponieważ zmienna x jest typu int to c++ automatycznie obetnie cyfry po przecinku 
//nawias w obliczeniach związany jest z kolejnością wykonywania działań w matematyce (najpierw mnozenie dzielenie pozniej dodawanie ...
// x = ... to tzw. instrukcja przypisania 
// za pomocą << wyświetlasz następne rzeczy czyli jak chcesz pokazać zawartość zmiennej tuż po napisie to <<x 
// w przypadku cout i cin traktuj jest jako siebie cout cin = ja więc << dane lecą do mnie >> ja przesyłam dane



