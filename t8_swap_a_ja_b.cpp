#include <iostream>

using namespace std;

void swap_osoitin(int *x,int *y) {
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;

    return;
}

void swap_viittaus(int &x,int &y) {
    int temp;

    temp = x;
    x = y;
    y = temp;

    return;
}


int main()
{

    int one;
    int two;

    cout << "Vaihdetaan muuttujia. Anna arvot." << endl;
    cin >> one >> two;
    cout << "Eka muuttuja " << one << endl << "Toka muuttuja " << two << endl << endl;
    cout << "Ensimmainen muuttujavaihto (osoitin):" << endl;
    swap_osoitin(&one, &two);
    cout << "Eka muuttuja " << one << endl << "Toka muuttuja " << two << endl << endl;
    cout << "Muuttujien vaihtaminen takaisin (viittaus):" << endl;
    swap_viittaus(one, two);
    cout << "Eka muuttuja " << one << endl << "Toka muuttuja " << two << endl << endl;

    return 0;
}
