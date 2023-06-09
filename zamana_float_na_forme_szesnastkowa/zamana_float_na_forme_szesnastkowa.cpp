#define ANSI  

#include <iostream> 
#include <cstring> 
#include <iomanip>

using namespace std;  

void printfloat(float liczba);  

int main() 
{   
	int t;   
	float x;    
	cin >> t; 
		while(t)
		{      
		cin >> x;     
		printfloat(x);  
		t--;    
		}    
return 0; 
}
void printfloat(float liczba) {
	unsigned char* wskaznik = reinterpret_cast<unsigned char*>(&liczba);
	for (int i = sizeof(float) - 1; i >= 0; i--) {
		cout << hex << setw(2) << static_cast<unsigned int>(*(wskaznik + i)) << " ";
	}
	cout << endl;
}
