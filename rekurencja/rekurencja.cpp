#include <iostream>
using namespace std;


int f(int n)
{
    if (n == 0) return 3;
    else return f(n - 1) + 2;
}

int main()
{
    int ile;
    cout << "Podaj liczbe: ";
    cin >> ile;
    cout << f(ile)<<endl;

    return 0;
}
// rekurencja oznacza w programowaniu sytuacje kiedy funkcja, w celu zwrócenia prawidłowego wyniku wywołuje samą siebie, a dokładniej mówiąc tworzy kopię, aż do napotkania tzw. przypadku podstawowego, dla którego funkcja może już wyznaczyć wynik
// użycie tej metody będzie dotyczyło funkcji 
// przypadek w którym funkcja od razu może podać wynik jest przypadkiem podstawowym 