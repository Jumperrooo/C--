#include <iostream>
#include <cmath>
#include <iomanip>
#define _USE_MATH_DEFINES 
#include <cmath>

using namespace std;
const double M_PI = 3.14159265358979323846, M_E= 2.71828182845904523536;
int main()
{
    setlocale(LC_CTYPE, "Polish");

    cout << setprecision(20);
    cout << M_PI << endl;
    cout << M_E << endl;
        return 0;
}
// musiałem zdefiniować liczbę pi bo nie chciało działać