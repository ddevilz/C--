#include<bits/stdc++.h>
using namespace std;

// void printName(int i, string name) {
//     if (i <= 0) return;
//     cout << name << endl;
//     printName(i - 1, name);
// }


void func(int i, vector<string>& v, int n) {
    if (i > n) return;
    v.push_back("Coding Ninjas");
    func(i + 1, v, n); // Pass 'v' by reference
}

vector<string> printNTimes(int n) {
    vector<string> ans;
    func(1, ans, n);
    return ans;
}

int main()
{
    printNTimes(4);
    return 0;
}