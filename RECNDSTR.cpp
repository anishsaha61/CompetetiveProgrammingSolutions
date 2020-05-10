#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	 string inps, linps, rinps;
	 cin >> inps;
	 linps = inps.substr(1, inps.length()-1) + inps[0];
	 rinps = inps[inps.length()-1] + inps.substr(0, inps.length()-1);
	 rinps == linps ? cout << "YES" << endl : cout << "NO" << endl;
	}
	return 0;
}
