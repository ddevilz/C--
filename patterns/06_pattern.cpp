#include<bits/stdc++.h>
using namespace std;

void print1(int n ) {
    for (int i = 1; i <= n; i++)
    {
        // if i = 1
        // n - row + 1
        // if i = 0 then n - 1
        for (int j = 1; j <= n - i + 1; j++)
        {
            cout << j << " ";
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