#include<bits/stdc++.h>
using namespace std;
int countDigits(int n){
	int count = 0;
	while(n > 0) {
		count++;
		n /= 10;
	}
	cout << count << endl;
	return count;
}

int main()
{
    countDigits(13);
    return 0;
}