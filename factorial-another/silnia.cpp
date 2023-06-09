#include <iostream>
using namespace std;

long int silnia(int l)
{
	if (l == 0) return 1;
	else return l*silnia(l-1);
}

int main()
{
	int s;
   cout << "Podaj liczbe, ktorej silnie chcesz obliczyc: ";
   cin >> s;
   cout << silnia(s) << endl;
   return 0;
}

