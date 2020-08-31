#include <iostream>

using namespace std;

int main()
{
    string fname, lname;
    int age;

    cout << "Tell me about yourself!" << endl << endl;
    cout << "What's your first name?" << endl;
    cin >> fname;
    cout << endl <<"What about your last name?" << endl;
    cin >> lname;
    cout << endl << "Alright! And how old are you?" << endl;
    cin >> age;

    cout << endl << endl << "So your name is " << fname << " " << lname << "?" << endl;
    cout << "And you're " << age << " years old?" << endl;

    if(age < 18) {
        cout << "Looks like you're underage." << endl;
    } else if (age > 65) {
        cout << "Oh, so you are a pensioner!" << endl;
    } else {
        cout << "You're working age." << endl;
    }

    cout << endl << "Nice to meet you!" << endl << endl;
    return 0;
}
