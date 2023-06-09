#include <iostream>
#include<cstring>
#include <locale.h>
using namespace std;


string napis;
int main()
{
    setlocale(LC_CTYPE, "Polish");
    cout << "Zażółć gęślą jaźń" << endl;
    
    cin >> napis;
    cout <<"Wpisany ciąg znaków to: "<< napis << endl;
    return 0;
}

