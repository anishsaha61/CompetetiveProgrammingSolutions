#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
// 	cin >> rep;
	rep = 1;
	while(rep--){
	    lint wid;
	    float bal;
	    cin >> wid >> bal;
	    bal -= 0.5;
	    if(wid%5 == 0 && (floor(bal)>=wid) ){
	        printf("%.2f\n", bal-wid);
	    }else{
	        printf("%.2f\n", bal+0.50);
	    }
	    
	    cout << endl;
	}
	return 0;
}
