#include <iostream>
using namespace std;
int SchematHornera(int st, int wsp[], int x){
	if (st == 0){
		return wsp[0];
	}
	else{
		return	x * SchematHornera(st-1, wsp, x) + wsp[st];
	}
}
int main(){
	int st;
	int x;
	cout << "Podaj stopien wielomianu: ";
	cin >> st;
	int wsp[st];
	for(int i = st; i >= 0; i--){
		cout << "Podaj wspolczynnik stojacy przy potedze " << i << ": ";
		cin>> wsp[st - i];
	}
	cout << "Podaj argument: ";
	cin >> x;
	cout<< SchematHornera(st, wsp, x);
}