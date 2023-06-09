#include <iostream>
#include <string>

using namespace std;

bool palindrom(string s) 
{
    return s == string(s.rbegin(), s.rend()); 
}

string odwracanie(string s) {
    int suma = stoi(s);
    suma += stoi(string(s.rbegin(), s.rend()));
    return to_string(suma);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        string liczba;
        cin >> liczba;

        int steps = 0;
        while (!palindrom(liczba)) {
            liczba = odwracanie(liczba);
            steps++;
        }

        cout << liczba << " " << steps << endl;
    }

    return 0;
}
//return s == string(s.rbegin(), s.rend()); zwraca stringa w odwrotnej kolejnosci
// suma += stoi(string(s.rbegin(), s.rend())); do sumy dodaje wartosc przechowywaną przez stringa po przekonwertowaniu go na inta
// return to_string(suma); ponownie zamienia na stringa
// do obu 