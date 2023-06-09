#include <iostream> 
#include <cstring>  
using namespace std;  
#define T_SIZE 1001  
char* string_merge(char *, char *);  
int main()
{   
	int t,n;    
	char S1[T_SIZE], S2[T_SIZE], *S;   

	cin >> t;   
	cin.getline(S1,T_SIZE);   

	while(t)
	{      
		cin.getline(S1,T_SIZE,' ');     
		cin.getline(S2,T_SIZE);           
		S=string_merge(S1,S2);     
		cout << S << endl;     
		delete[] S;     
		t--;      
	}    
	return 0; 
} 
char* string_merge(char* wyraz1, char* wyraz2)
{
    int dlugosc1 = strlen(wyraz1);
    int dlugosc2 = strlen(wyraz2);
    int dlugosc_wlasciwa = (dlugosc1 < dlugosc2) ? dlugosc1 : dlugosc2;
    char* wynik = new char[dlugosc_wlasciwa * 2 + 1];

    int i = 0;
    int j = 0;
    int k = 0;

	while (i < dlugosc_wlasciwa && j < dlugosc_wlasciwa) {
		wynik[k++] = wyraz1[i++];
		wynik[k++] = wyraz2[j++];
	}

    wynik[k] = '\0';

    return wynik;
}