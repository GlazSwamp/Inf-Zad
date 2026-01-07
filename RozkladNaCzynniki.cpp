#include <iostream>
using namespace std;
void RozkladNaCzynniki(int liczba)
{
	if (liczba < 2)
	{
		cout<< "zle";
	}
	else
	{
		cout<< "Rozklad na czynniki liczby " <<liczba<<": ";
		int n = liczba;
		int k = 2;
		while (n != 1)
		{
			if (n % k == 0)
			{
				n = n/k;
				cout<< k << " ";
			}
			else
			{
				k += 1; 
			}
		}
    }
};

int main (){
int liczba = 0;
cout<<"podaj liczbe naturalna do rozkladu wieksza od 1: ";
cin>> liczba;
RozkladNaCzynniki(liczba);
return 0;
};
 