#include <bits/stdc++.h>
using namespace std;

int main() {
    // string - double quoted string

    string str1  = "hello";
    string str2;

    cin >> str2;
    cout << str1 << " " << str2 << endl;

    // getline
    string str;
    getline(cin, str);
    cout << str;

    // char - single quote
    char ch = 'g';
    cout << ch << endl;

    return 0;
}