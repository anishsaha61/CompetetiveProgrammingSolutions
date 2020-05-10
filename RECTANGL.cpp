#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    lint a, b, c, d;
	    cin >> a >> b >> c >> d;
	    if((a==b && c==d) || (a==c && b==d) || (a==d && b==c)){
	        cout << "YES" << endl;
	    }else{
	        cout << "NO" << endl;
	    }
	}
	return 0;
}
