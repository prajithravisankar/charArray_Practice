#include <iostream>

using namespace std;

int main() {
    // is prefix?
    // ABCD A -> YES
    // ABCDEF BCD -> NO
    // A A -> YES
    // empty string empty string -> YES
    
    cout << "enter string: ";
    string s1;
    getline(cin, s1);
    cout << "enter string2: ";
    string s2;
    getline(cin, s2);
    string output = "YES";

    if (s2.size() > s1.size()) {
        output = "NO";
        cout << output << endl;
        return 0;
    } else {
        for (int i = 0; i < s2.size(); i++) {
            if (s2[i] != s1[i]) {
                output = "NO";
            }
        }
    }

    cout << output << endl;

    return 0;
}
