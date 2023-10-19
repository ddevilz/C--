#include<bits/stdc++.h>
using namespace std;

int revNum(int n) {
	long revNum = 0;
    while(n) {
        int lastDigit = n % 10;
        revNum = (revNum * 10) + lastDigit;
        n = n / 10;
    }
    if(revNum>INT_MAX || revNum<INT_MIN) return 0;
    cout << "revNum: " << revNum; 
    return int(revNum);
}

int main() {
	revNum(1234);
	return 0;
}	