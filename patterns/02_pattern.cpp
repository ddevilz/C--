#include<bits/stdc++.h>
using namespace std;

void print1(int n ) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

int main()
{
    int num;
    cin >> num;
    print1(num);
    return 0;
}