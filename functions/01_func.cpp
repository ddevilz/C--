#include<bits/stdc++.h>
using namespace std;
// Functions are used to modularise code
// Functions are used to increase readability
// Functions are used to use same code as multipe timer

// void --> which does not returns anything 
// return function
// parameterised function
// non-parameterised function

void greet(string name) {
    cout << "Good Morning!, " << name << endl;
}


int main() {
    string name;
    cin >> name;
    greet(name);
    return 0;
}