#include <bits/stdc++.h>
using namespace std;

typedef unsigned long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    lint cnt;
	    lint digSum = 0, temp, digCnt=0;
	    cin >> cnt;
	    temp = cnt;
	    while(temp){
	        digCnt ++;
	        digSum += temp%10;
	        temp /= 10;
	    }
	    digSum %= 10;
	    if(digSum%10 == 0){
	         digSum = (cnt*10);
	    }else{
	        digSum = (cnt*10) + (10 - digSum);
	    }
	    cout << digSum << endl;
	}
	return 0;
}
