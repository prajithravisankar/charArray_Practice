#include <iostream>

using namespace std;

int main() {
    // AB B -> Yes
    // AB A -> NO
    // AB AB -> YES
    // ABCD AB -> NO
    // ABCD ABC -> NO
    // ABCD BCD -> YES

    string s1;
    cout << "enter string1: ";
    cin >> s1;
    string s2;
    cout << "enter string2: ";
    cin >> s2;

    string output = "YES";

    if (s2.size() > s1.size()) {
        output = "No";
        cout << output << endl;
        return 0;
    } else {
        for (int i = s1.size() - 1, j = s2.size() - 1; j >= 0; j--, i--) {
            if (s2[j] != s1[i]) {
                output = "NO";
                cout << output << endl;
                return 0;
            }
        }
    }

    cout << output << endl;


    return 0;
}