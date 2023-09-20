#include<bits/stdc++.h>
using namespace std;

// array will always be passed as reference value
void doSomething(int arr[], int n) {
    arr[0] += 20;
    cout << "Value doSomething func: " << arr[0] << endl;
}

int main() {   
    int n = 5;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    doSomething(arr,n);
    
    cout << "Value int main: " << arr[0] << endl;

    return 0;
}