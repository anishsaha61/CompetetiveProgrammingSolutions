#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int m,n;
	    cin >> m >> n;
	    cout << __gcd(m, n)*2 << endl;
	}
	return 0;
}
