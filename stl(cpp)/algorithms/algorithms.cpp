#include<bits/stdc++.h>
using namespace std;

bool comp(pair<int, int>p1, pair<int, int>p2) {
    if(p1.second < p2.second) {
        return true;
    } else if(p1.second == p2.second){
        if (p1.first > p2.first) return true;
    }
    return false;
}

// bool comp(pair<int, int>p1, pair<int,int>p2) {
//     if(p1.second < p2.second) return true;
//     if(p1.second > p2.second) return false;
//     // if they are equal
//     if(p1.second == p2.second) {
//         if (p1.first > p2.first) return true;
//     }
//     return false;
// }

void explainExtra() {
    
    pair<int, int> a[] = {{1, 2}, {2, 1}, {4, 1}};
    int n = sizeof(a) / sizeof(a[0]);

    sort(a, a + n);
    sort(a, a + n, greater<int>());

    // Sort it according to second element. 
    // If second element is the same, sort it according to first element in descending order.
    sort(a, a + n, comp);

    for (int i = 0; i < n; i++) {
        cout << "(" << a[i].first << ", " << a[i].second << ")";
    }
    cout << endl;

    int num = 7;
    int cnt = __builtin_popcount(num);

    long long bigNum = 165786578687;
    int bigCnt = __builtin_popcountll(bigNum);

    cout << "Number of set bits in " << num << ": " << cnt << endl;
    cout << "Number of set bits in " << bigNum << ": " << bigCnt << endl;

    string s = "123";
    sort(s.begin(), s.end());
    do {
        cout << s << endl;
    } while (next_permutation(s.begin(), s.end())); // all permutation

    int n = 5; // Replace with the actual size of your array
    int b[] = {10, 5, 8, 15, 2}; // Replace with your array elements

    // Ensure 'n' is set to the correct size, and 'a' contains the array elements.

    int maxi = *max_element(b, b + n);
}

int main() {

    return 0;
}