#include <iostream>
#include <cmath>
#include <locale.h>

using namespace std;
float x_1,x_2,y_1,y_2,d;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout <<"Pierwiastek sześcienny z 27 wynosi: "<< cbrt(27) << endl;
    cout<<"Pierwiastek kwadratowy z 49 wynosi: " << pow(49,1.0/2.0) << endl;

    cout << "Podaj współrzędne pierwszego punktu: ";
    cin >> x_1 >> y_1;
    cout << "Podaj współrzędne pierwszego punktu: ";
    cin >> x_2 >> y_2;

    d = sqrt(pow((x_1-x_2),2)+ pow((y_2 - y_1), 2));
    cout << "Odległość wynosi: " << d << endl<<endl;
    return 0;    
}
// wartość bezwzględna to kwadrat liczby który następnie spierwiastkujemy 
//sqrt jak square root
// pierwiastek sześcienny to cbrt cubic root
// aby obliczyć pierwiastek możemy użyć potęgi np pow(8,1/2) 
// dlaczego pow(49,1/2) nie działa bo funkcja sprawdziła ile 2 zmieścimy w 1 zmieścimy 0 więc wstawiła 0 a 49 do 0 potęgi to 1 wystarczy dodać . czyli 1.0 2.0
// wzór na odległość punktów w przestrzeni 3D:
// d = sqrt(pow(x_1-x_2,2) + pow(y_2 - y_1, 2) + pow(z_2 - z_1, 2));