#include <iostream>
#include <cmath>

using namespace std;

bool alkuluku(int luku) {
    if (luku < 11) {
        return luku == 2 || luku == 3 || luku == 5 || luku == 7;
    }
    if (luku % 2 == 0 || luku % 3 == 0) {
        return false;
    }
    int viimeinen = std::sqrt(luku);
    for (int i = 5; i <= viimeinen; i += 6) {
        if (luku % i == 0 || luku % (i+2) == 0) {
            return false;
        }
    }
    return true;
}

int main()
{
    int luku;
    bool totuus;

    cout << "Anna kokonaisluku, niin lasken onko se alkuluku!" << endl;
    cin >> luku;

    totuus = alkuluku(luku);

    if (totuus == true) {
        cout << luku << " on alkuluku!" << endl;
    } else if (totuus == false) {
        cout << luku << " ei ole alkuluku!" << endl;
    } else {
        cout << "On tapahtunut virhe!" << endl;
    }

    return 0;
}
