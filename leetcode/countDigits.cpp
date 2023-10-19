#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int temp = n;
	int count = 0;
	while(n > 0) {
		int ld = n % 10;
		cout << "last Digit: " << ld << endl;
		n /= 10;
		cout << "N: " << n << endl;
		cout << "count: " << count << endl;
		if (ld > 0 && temp%ld == 0){
			count++;
			cout << "count: " << count << endl;
		}
	}
	return count;
}
int main()
{
    countDigits(35);
 	return 0;
}