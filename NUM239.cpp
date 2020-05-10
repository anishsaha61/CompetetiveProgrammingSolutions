#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int beg, end;
	    cin >> beg >> end;
	    lint cnt = (end-beg)/10*3;
	    for(int i=beg+(10*((end-beg)/10)); i<=end; i++){
	        if(i%10 == 2 || i%10 == 3 || i%10 == 9){
	            cnt++;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}
