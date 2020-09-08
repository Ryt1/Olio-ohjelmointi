#include <iostream>

using namespace std;

int count(string s, char c) {
  int count = 0;

  for (int i = 0; i < s.size(); i++)
    if (s[i] == c) count++;

  return count;
}

int main()
{
    string jono;
    char merkki;
    int maara;

    cout << "Anna merkkijono:" << endl;
    cin >> jono;
    cout << "Laskettava merkki:" << endl;
    cin >> merkki;
    maara = count(jono,merkki);

    cout << endl << endl << "Merkkia " << merkki << " loytyi " << maara << "kpl!" << endl;
    return 0;
}
