#include <iostream>

using namespace std;

int summa(int *p,int N) {

    int tulos = 0;

    for(int i = 0; i < N; p++) {
        tulos = tulos + *p;
        i++;
    }

    return tulos;
}

int main()
{
    int pituus;
    int i = 0;
    int lukujen_summa;

    cout << "Lasketaan kokonaislukuja yhteen!" << endl << endl;
    cout << "Monta kokonaislukua haluat laskea yhteen?" << endl;
    cin >> pituus;

    int taulukko[pituus];

    cout << endl << "Mita lukuja haluat laskea yhteen?" << endl;

    while(i < pituus) {
        cin >> taulukko[i];
        i++;
    }

    lukujen_summa = summa(taulukko,pituus);

    cout << endl << "Lukujen summa on " << lukujen_summa << "!" << endl;

    return 0;
}
