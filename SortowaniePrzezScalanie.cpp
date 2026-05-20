#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void Merge(int* tab, int l, int m, int r) {
    int lSize = m - l + 1;
    int rSize = r - m;

    int* tabL = new int[lSize];
    int* tabR = new int[rSize];

    for (int i = 0; i < lSize; i++) {
        tabL[i] = tab[l + i];
    }

    for (int i = 0; i < rSize; i++) {
        tabR[i] = tab[m + 1 + i];
    }

    int indexL = 0;
    int indexR = 0;
    int currIndex = l;

    while (indexL < lSize && indexR < rSize) {
        if (tabL[indexL] <= tabR[indexR]) {
            tab[currIndex] = tabL[indexL];
            indexL++;
        } else {
            tab[currIndex] = tabR[indexR];
            indexR++;
        }

        currIndex++;
    }

    while (indexL < lSize) {
        tab[currIndex] = tabL[indexL];
        indexL++;
        currIndex++;
    }

    while (indexR < rSize) {
        tab[currIndex] = tabR[indexR];
        indexR++;
        currIndex++;
    }

    delete[] tabL;
    delete[] tabR;
}

void MergeSort(int* tab, int l, int r) {
    if (r > l) {
        int m = (l + r) / 2;

        MergeSort(tab, l, m);
        MergeSort(tab, m + 1, r);

        Merge(tab, l, m, r);
    }
}

int main() {
    srand(time(0));

    int n;

    cout << "Wprowadz liczbe elementow do posortowania: ";
    cin >> n;

    int* tab = new int[n];

    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100 + 1;
    }

    cout << "\nTablica przed posortowaniem:\n";

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }

    MergeSort(tab, 0, n - 1);

    cout << "\nTablica po sortowaniu:\n";

    for (int i = 0; i < n; i++) {
        cout << tab[i] << " | ";
    }

    delete[] tab;

    return 0;
}