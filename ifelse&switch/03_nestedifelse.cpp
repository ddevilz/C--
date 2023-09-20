#include <bits/stdc++.h>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 18){
        cout << "Not eligible for job" << endl;
    } else if (age <= 57) {
        cout << "Eligible for job";
        if  (age >= 54) {
        cout << ", but retirement soon." << endl;
    } 
    } else {
        cout << "Retirement time" << endl;
    }
}