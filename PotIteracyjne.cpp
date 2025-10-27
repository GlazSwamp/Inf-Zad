#include <iostream>
using namespace std;
int szybkiepotiteracyjne(int liczba, int wykladnik, int wynik)
{
	while(wykladnik != 0)
	{
		if(wykladnik % 2 == 0)
		{
			liczba = liczba*liczba;
			wykladnik = wykladnik/2;
		}
		else
		{
			wykladnik = wykladnik-1;
			wynik = wynik*liczba;
		}
	}
	return wynik;
};
int main (){
int liczba = 0;
int wykladnik = 0;
int wynik = 1;
cout<<"podaj liczbe: ";
cin>> liczba;
cout<<"podaj wykladnik: ";
cin>> wykladnik;
int liczba1 = liczba;
int wykladnik1 = wykladnik;
wynik = szybkiepotiteracyjne(liczba, wykladnik, wynik);
cout<< liczba1<<"^"<<wykladnik1<<" = "<<wynik;
return 0;
};