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

    string from = "abcdefghijklmnopqrstuvwxyz0123456789";
    string to = "YZIMNESTODUAPWXHQFBRJKCGVL!@#$%^&*()";

    char specialStringMap[151] = {0};

    for (int i = 0; i < from.size(); i++) {
        specialStringMap[from[i]] = to[i]; // now we will have ascii array only of
        // upper case and letters from "to" string
    }

    string inp;
    cout << "enter input string: ";
    cin >> inp;

    for (int i = 0; i < inp.size(); i++) {
        if ('A' <= inp[i] && inp[i] <= 'Z') {
            continue;
        } else {
            inp[i] = specialStringMap[inp[i]]; // when we go and get the lower case or number from
            // the map, we will have our special string there instead of lower case or numbers
        }
    }

    cout << inp << endl;


    return 0;
}
