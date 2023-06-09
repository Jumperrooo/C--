#include <iostream>
using namespace std;

int x, y,wynik;
char znak;
int main()
{
	while (cin >> znak >> x >> y)
	{
		switch (znak)
		{
		case '+':
		{
			wynik = x + y;
			break;
		}
		case '-':
		{
			wynik = x - y;
			break;
		}
		case'*':
		{
			wynik = x * y;
			break;
		}
		case'/':
		{
			wynik = x / y;
			break;
		}
		case'%':
		{
			wynik = x % y;
			break;
		}

		}
		cout << wynik << endl;
	}
	return 0;
}
