#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int l_int;

int main() {
	l_int rep;
	cin >> rep;
	while(rep--){
	    l_int a, b;
	    cin >> a >> b;
	    if(a==b){
	        cout << "YES" << endl;
	    }else if(a<b){
	        if((b-a)%2 == 0){
	            cout << "YES" << endl;
	        }else if(b/a >=2 && a%2 != 0){
	            cout << "YES" << endl;
	        }else if(b/a >= 2 && a%2==0 && b%2==0){
	            cout << "YES" << endl;
	        }else{
	            cout << "NO" << endl;
	        }
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}