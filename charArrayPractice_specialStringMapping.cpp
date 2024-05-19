#include <iostream>

using namespace std;

int main() {

    // abcdefghijklmnopqrstuvwxyz
    // YZIMNESTODUAPWXHQFBRJKCGVL

    // 0123456789
    // !@#$%^&*()

    // leave upper case of the input as it is, if input has lower case or numbers, change it to
    // the map given underneath them

    // acMNmn39 -> YIMNPW$)
    // vwXYZ0123 -> KCXYZ!@#$
    cout << "enter string: ";
    string inp;
    cin >> inp;

    string lowerCaseMap = "YZIMNESTODUAPWXHQFBRJKCGVL";
    string numberMap = "!@#$%^&*()";

    for (int i = 0; i < inp.size(); i++) {
        if (inp[i] >= 'A' && inp[i] <= 'Z') {
            cout << char(inp[i]);
        } else {
            if (inp[i] >= 'a' && inp[i] <= 'z') {
                cout << lowerCaseMap[int(inp[i] - 'a')]; // int(charArray[i] - 'a') = 0 to array size, where charArray has array of ascii characters
            }

            if (inp[i] >= '0' && inp[i] <= '9') {
                cout << numberMap[int(inp[i] - '0')]; // even if this is -ve it produces correct answer? Idk
            }

        }
    }

    cout << endl;
    cout << numberMap[int(inp[0] - 'a')];

    return 0;
}
