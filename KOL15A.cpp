#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    lint sum=0;
	    string inps;
	    cin >> inps;
	    for(int i=0; inps[i]; i++){
	        if(inps[i] == '1'){
	            sum += 1;
	        }else if(inps[i] == '2'){
	            sum += 2;
	        }else if(inps[i] == '3'){
	            sum += 3;
	        }else if(inps[i] == '4'){
	            sum += 4;
	        }else if(inps[i] == '5'){
	            sum += 5;
	        }else if(inps[i] == '6'){
	            sum += 6;
	        }else if(inps[i] == '7'){
	            sum += 7;
	        }else if(inps[i] == '8'){
	            sum += 8;
	        }else if(inps[i] == '9'){
	            sum += 9;
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}
