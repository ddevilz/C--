#include<bits/stdc++.h>
using namespace std;

void func(int i, int arr[], int n) {
    if (i >= n/2) return;
    swap(arr[i],arr[n - i - 1]);
    func(i+1,arr,n);
}

int main()
{
    int arr[] = {5, 2, 3, 4, 5};
    func(0,arr,5);
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
     
    return 0;
}