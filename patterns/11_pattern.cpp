#include<bits/stdc++.h>
using namespace std;

void print1(int n ) {
    int start;
    for (int i = 1; i <= n; i++)
    {
        if (i%2 == 0) start = 0;
        else start = 1;
        for (int j = 1; j <= i; j++)
        {
            cout << start << " ";
            start = 1 - start;
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