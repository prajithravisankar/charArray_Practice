#include <iostream>

using namespace std;

int main () {
    // conc 2 string
    // get 2 input and print first letter from 1st input, 1st letter from 2nd, 2nd letter from 1st,
    // 2nd letter from 2nd ....
    // abc defg -> adbecfg
    // a bcd -> abcd
    // acd b -> abcd
    // aaa bbb -> ababab
    // paih rjt -> prajith

    string name1, name2;
    cout << "enter first string: ";
    getline(cin, name1);
    cout << "enter second string: ";
    getline(cin, name2);

    int max_size = name1.size();
    if (max_size < name2.size()) {
        max_size = name2.size();
    }
    for (int i = 0; i < max_size; i++) {
        if (i < name1.size()) {
            cout << name1[i];
        }

        // note this is not else or if else to make the printing alternate between 1st and 2nd

        if (i < name2.size()) {
            cout << name2[i];
        }
    }

    cout << "\n";

return 0;
}
