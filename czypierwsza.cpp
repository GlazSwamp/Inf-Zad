#include <iostream>
#include <cmath>
using namespace std;
void CzyPierwsza(int liczba)
{
	bool czypierwsza = false;
	if (liczba != 1)
	{
		czypierwsza = true;
		for(int i = 2; i <= sqrt(liczba); i++)
		{
			if(liczba % i == 0)
			{
				czypierwsza = false;
				break;
			}
		}
	}
	if (czypierwsza == true)
	{
		cout<< liczba<<" jest pierwsza";
	}
	else
	{
		cout<< liczba<<" nie jest pierwsza";
	}
};

int main (){
int liczba = 0;
cout<<"podaj liczbe naturalna: ";
cin>> liczba;
CzyPierwsza(liczba);
return 0;
};
 