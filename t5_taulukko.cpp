#include <iostream>

using namespace std;

int main()
{
    int celcius = -50;
    int fahrenheit;

    cout << "Celcius   Fahrenheit" << endl << "____________________" << endl;

    for(int i = 0;i < 31; i++) {

        fahrenheit = celcius * 1.8 + 32;

        cout << "   " << celcius << "      " << fahrenheit << endl;

        celcius = celcius + 5;
    }
    return 0;
}
