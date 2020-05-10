#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	   // char k, d0, d1;
	   // string k;
	    lint k, d0, d1;
	    cin >> k >> d0 >> d1;
	    lint s = d0 + d1;
	    k-=2;
	    while(k){
	        s += s%10;
	        k--;
	        if(s%10 == 0){
	            break;
	        }else if(s%10 == 4){
	            k %= 12;
	        }
	    }
	    if(s%3 == 0){
	        cout << "YES";
	        
	    }else{
	        cout << "NO";
	    }
	    cout << endl;
	}
	return 0;
}