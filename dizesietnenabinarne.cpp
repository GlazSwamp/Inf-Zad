#include <iostream>
using namespace std;
void DziesietneNaBinarne(int n)
{
		cout<< "Liczba dziesietna " <<n<<" po zmianie na postac binarna: ";
		int tab[100];
		int j = 0;
		do
		{
			if (n % 2 == 0)
			{
				tab[j] = 0;
			}
			else
			{
				tab[j] = 1;
				n = n-1; 
			}
			n = n/2;
			j++;
		}
		while (n != 0);
		for(int i = j-1; i >= 0; i--)
		{
			cout<< tab[i];
		}
};

int main (){
int liczba = 0;
cout<<"podaj liczbe: ";
cin>> liczba;
DziesietneNaBinarne(liczba);
return 0;
};