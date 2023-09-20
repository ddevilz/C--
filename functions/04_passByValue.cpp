#include<bits/stdc++.h>
using namespace std;

// pass by value
void doSomething(int num) {
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
    num += 5;
    cout << num <<endl;
}

int main()
{
    int num  = 10;
    doSomething(num);
    cout << num << endl;
    return 0;
}


// #include<bits/stdc++.h>
// using namespace std;

// // pass by value
// void doSomething(string name) {
//     name[0] = 'D';
//     cout << name << endl;
// }

// int main()
// {
//     string name  = "Rev";
//     doSomething(name);
//     cout << name << endl;
//     return 0;
// }