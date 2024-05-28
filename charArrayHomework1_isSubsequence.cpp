#include <iostream>

using namespace std;

int main() {
    // is subsequence? 
    // abcd ab -> yes
    // abcd bcd -> yes
    // abcd a -> yes
    // abcd c -> yes
    // abcd ac -> yes
    // abcd ad -> yes
    // abcd cb -> no
    // aaabc aabc -> yes
    // aabc caa -> no
    // aabc aac -> yes


    // NOTE this is also subsequence
    // geeksforgeeks gksrek -> yes
    // aabcd abce -> no
    // aaabcd aabd -> yes

    cout << "enter string1: ";
    string s1;
    cin >> s1;

    cout << "enter string2: ";
    string s2;
    cin >> s2;

    if (s2.size() > s1.size()) {
        cout << "string2 is bigger than string1 -> NO" << endl;
        return 0;
    }

    int count = 0;
    char arr[151] = {0};
    int i = 0;
    for (int j = 0; j < s1.size(); j++) {
        if (s2[i] == s1[j]) {
            count++;
            i++;
        } 
    }

    if (count == s2.size()) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}