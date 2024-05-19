#include <iostream>

using namespace std;

int main() {

    // ignore upper case letter
    // bAAAaaazz -> a = 3, b = 1, z = 2

    // IDEA: create a frequency array for all the asscii characters and intialize the frequency to 0.
    // only iterate from 'a' to 'z' and don't go over that and print whenever frequency is > 0.


    cout << "enter a string: ";
    string str;
    getline(cin, str);
    int asciiArray[150] = {0}; // there are 150 ascii characters

    for (int i = 0; i < str.size(); i++) {
        asciiArray[str[i]] += 1;
    }

    for (int i = 'a'; i <= 'z'; i++) {
        if (asciiArray[i] > 0) {
            cout << char(i) << " = " << asciiArray[i] << endl;
        }
    }

    return 0;
}
