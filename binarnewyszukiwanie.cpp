using namespace std;
#include <iostream>
int WyszukiwanieBinarne(int l, int p, int sr, int tab[], int liczba)
{
	while(l<=p)
{
	if (tab[sr] == liczba)
	{
		break;
	}
	else
	{
		if (liczba < tab[sr])
		{
			p = sr-1;
		}
		else
		{
			l = sr+1;
		}
		sr = (l+p)/2;
	}
}
if(l>p)
{
	cout<< "nie ma liczby "<<liczba<<" w tabeli";
}
else
{
	cout<< "Liczba "<<liczba<<" znajduje sie pod id "<<sr;
}
}
main (){
int liczba = 0;
int tab[12] = {2, 7, 19, 81, 123, 145, 147, 180, 182, 183, 199, 201};
for (int i = 0; i < 12; i++)
{
	cout<<tab[i]<< ", ";
}
cout<<endl;
cout << "podaj liczbe: ";
cin >> liczba;
int l = 0;
int p = 11;
int sr = (l+p)/2;
WyszukiwanieBinarne(l, p, sr, tab, liczba);
return 0;
};