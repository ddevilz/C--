#include<bits/stdc++.h>
using namespace std;

void divisor() {
    int n;
    cin >> n;
    vector<int> list;
    // 6 * 6 <= 36
    // 6 * 6 <= 36
    // O(sqrt(n))

    for (int i = 1; i * i <= n; i++)
    {
        if ((n%i) == 0) {
            list.push_back(i);
            if ((n/i) != i) {
                list.push_back(n/i);
            }
        }
    }

    // O(n * log(n)) : n is the number of factors.
    sort(list.begin(), list.end());
    // O(n) : n is the number of factors.
    for(auto ls : list) cout << ls << endl;
}

int main()
{
    divisor();
    return 0;
}