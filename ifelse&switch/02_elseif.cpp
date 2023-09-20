#include <bits/stdc++.h>
using namespace std;

int main() {
    int marks;
    cin >> marks;

    if (marks < 25){
        cout << "F grade" << endl;
    } else if (marks >= 25 && marks <= 44) {
        cout << "E grade" << endl;
    } else if (marks >= 45 && marks <= 49) {
        cout << "D grade" << endl;
    } else if (marks >= 50 && marks <= 59) {
        cout << "C grade" << endl;
    } else if (marks >= 60 && marks <= 79) {
        cout << "B grade" << endl;
    } else {
        cout << "A grade" << endl;
    }
    
    return 0;
}