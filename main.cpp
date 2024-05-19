#include <iostream>

using namespace std;

int main()
{
    // conc 2 string
    // get 2 input and print first letter from 1st input, 1st letter from 2nd, 2nd letter from 1st,
    // 2nd letter from 2nd ....
    // abc defg -> adbecfg
    // a bcd -> abcd
    // acd b -> abcd
    // aaa bbb -> ababab
    // paih rjt -> prajith


    string inp1;
    string inp2;
    cout << "enter first string: ";
    getline(cin, inp1);
    cout << "enter second string: ";
    getline(cin, inp2);

    for (int i = 0, j = 0; i < inp1.size() || j < inp2.size(); i++, j++) {
        cout << inp1[i] << inp2[j];

        if (i + 1 >= inp1.size()) {
            cout << inp2.substr(j+1, inp2.size() - 1);
            break;
        }

        if (j + 1 >= inp2.size()) {
            cout << inp1.substr(i+1, inp1.size() - 1);
            break;
        }
    }

    return 0;
}
