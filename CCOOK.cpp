#include <bits/stdc++.h>

using namespace std;
typedef unsigned long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int cnt = 0;
	   for(int i=0; i<5; i++){
	       int temp;
	       cin >> temp;
	       if(temp == 1){
	           cnt++;
	       }
	   }
    	if(cnt==0){
    	    cout << "Beginner";
    	}else if(cnt == 1){
    	    cout << "Junior Developer";
    	}else if(cnt == 2){
    	    cout << "Middle Developer";
    	}else if(cnt == 3){
    	    cout << "Senior Developer";
    	}else if(cnt == 4){
    	    cout << "Hacker";
    	}else{
    	    cout << "Jeff Dean";
    	}
    	cout << endl;
	}
	return 0;
}