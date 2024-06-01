#include <iostream>

using namespace std;

int main() {

    // give the number and the the number multiplied by 3
    // "100" -> 100 300
    // "0200" -> 200 600
    // "50000" -> 50000 15000

    cout << "enter input string upto 6 numbers: ";
    string input;
    cin >> input;

    int output = 0;

    for (int i = 0; i < input.size(); i++) {
        if (i == 0 && (int)input[i] == 0) {
            continue;
        } else {
            output *= 10;
            output += (int)input[i] - 48;
        }
    }

    cout << output << endl;
    cout << output * 3 << endl;

    return 0;
}