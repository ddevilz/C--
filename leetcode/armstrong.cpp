#include<bits/stdc++.h>
using namespace std;

int armstrong(int n) {
    int originalN = n;
	int count = 0;
    int sum = 0;
	int temp = n;
	while (temp != 0) {
		count++;
		temp /= 10;
	}
    while (n != 0) {
        int ld = n % 10;
        sum = sum + pow(ld, count);
        n = n / 10;
    }
    return (sum == originalN);
}

int main()
{
    armstrong(143);
    return 0;
}