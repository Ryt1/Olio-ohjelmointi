#include <iostream>

using namespace std;

bool vertaa(int x,int y) {
    if (x == y) {
        return true;
    }
    if (x != y){
        return false;
    }
}

int main()
{
    int luku1;
    int luku2;
    bool totuus;

    cout << "Anna kaksi kokonaislukua niin kokeilen ovatko ne sama luku:" << endl;
    cin >> luku1 >> luku2;

    totuus = vertaa(luku1, luku2);

    if (totuus == true) {
        cout << endl << "Luvut ovat samat!" << endl;
    } else if (totuus == false) {
        cout << endl << "Luvut eivat ole samat!" << endl;
    } else {
        cout << endl << "On tapahtunut virhe!" << endl;
    }

    return 0;
}
