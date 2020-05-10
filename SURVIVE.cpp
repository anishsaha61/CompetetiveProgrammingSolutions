#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int n, k, s;
	    cin >> n >> k >> s;
	    if((s-(s/7))*n < k*s){
	        cout << -1 << endl;
	    }else{
	        if((k*s)%n == 0){
	            cout << (k*s)/n << endl;
	        }else{
	            cout << ((k*s)/n)+1 << endl;
	        }
	    }
	}
	return 0;
}