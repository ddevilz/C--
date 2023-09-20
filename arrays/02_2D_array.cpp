#include<bits/stdc++.h>
using namespace std;

int main() {
    // 2D array
    int arr[3][5];

    arr[0][0] = 78;
    cout << arr[0][0]; // 78
    cout << arr[3][1]; // if the value is not set then they will be assigning themselves a garbage value(random value).
    return 0;
}