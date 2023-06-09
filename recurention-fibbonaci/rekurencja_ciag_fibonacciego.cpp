#include <iostream>

using namespace std;

long int fibo(int i)
{
    if (i == 1|| i==2)  return 1; 
    else  return fibo(i-1)+fibo(i-2);
}

int main()
{
    int n;
    cout << "Podaj ktory wyraz ciagu chcesz obliczyc: ";
    cin >> n;
    cout << fibo(n) << endl;

    return 0;

}
