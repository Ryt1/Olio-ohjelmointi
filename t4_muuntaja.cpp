#include <iostream>

using namespace std;

int main()
{
    char unit;
    int temperature;

    cout << "TEMPERATURE CONVERTER" << endl << endl;
    cout << "Unit to be converted (C or F): ";
    cin >> unit;

    if (unit=='C'||unit=='c') {
        cout << endl << endl << "Converting Celsius to Fahrenheit" << endl << endl;
        cout << "Temperature in Celsius:";
        cin >> temperature;

        temperature = temperature * 1.8 + 32;

        cout << endl << "Converted temperature is " << temperature << " degrees Fahrenheit" << endl << endl;
    } else if (unit=='F'||unit=='f') {
        cout << endl << endl << "Converting Fahrenheit to Celsius" << endl << endl;
        cout << "Temperature in Fahrenheit:";
        cin >> temperature;

        temperature = ((temperature+40)/1.8)-40;

        cout << endl <<"Converted temperature is " << temperature << " degrees Celsius" << endl << endl;
    } else {
        cout << endl << "Please run this program again and give a valid value" << endl << endl;
    }
    return 0;
}
