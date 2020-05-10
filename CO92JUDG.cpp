#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    lint n, temp, aSum=0, bSum=0, maxim=0;
	    cin >> n;
	    for(lint i=0; i<n; i++){
	        cin >> temp;
	        aSum += temp;
	        if(temp>maxim){
	            maxim=temp;
	        }
	    }
	    aSum = aSum - maxim;
	    maxim = 0;
	    for(lint i=0; i<n; i++){
	        cin >> temp;
	        bSum += temp;
	        if(temp>maxim){
	            maxim=temp;
	        }
	    }
	    bSum = bSum - maxim;
	    if(aSum>bSum){
	        cout << "Bob";
	    }else if(bSum>aSum){
	        cout << "Alice";
	    }else{
	        cout << "Draw";
	    }
	    cout << endl;
	}
	return 0;
}