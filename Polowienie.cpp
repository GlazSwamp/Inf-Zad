#include <iostream>
using namespace std;
double f(double x) {
    return x * (x * (x - 3) + 2) - 11;
}
double polowienie(double a, double b, double e) {
    double srodek;
    if (f(a) == 0.0) {
        return a;
    }
    if (f(b) == 0.0) {
        return b;
    }
    while (b - a > e) {
        srodek = (a + b) / 2.0;
        if (f(srodek) == 0.0) {
            return srodek;
        }
        if (f(a) * f(srodek) < 0) {
            b = srodek;
        }
        else {
            a = srodek;
        }
    }
    return (a + b) / 2.0;
}
int main()
{
    double a = -10.0;
    double b = 10.0;
    double e = 0.00001;
    double wynik = polowienie(a, b, e);
    cout << "Znalezione miejsce zerowe wynosi: " << wynik;
}