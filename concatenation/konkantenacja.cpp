#include <iostream>
#include <locale.h>
#include <string>

using namespace std;
int main()
{
	setlocale(LC_CTYPE, "Polish");

	string jeden="Ala ma kota. ", dwa="Pawel haha.";
	string trzy = jeden + dwa;

	cout << trzy;

	return 0;

}


//konkatenacja - sklejanie, łączenie dwóch napisów w jeden (sklejanie stringów) 
// string trzy = jeden + dwa;
