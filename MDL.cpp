#include <iostream>
#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int l_int;

int main() {
	l_int rep;
	cin >> rep;
	while(rep--){
	    l_int n, max, min, min_ind, max_ind;
	    cin >> n;
	    for(int i=0; i<n; i++){
	        int temp;
	        cin >> temp;
	        if(i==0){
	            min = max = temp;
	            min_ind = max_ind = i;
	        }else{
	            if(temp<min){
	                min = temp;
	                min_ind = i;
	            }
	            if(temp>max){
	                max = temp;
	                max_ind = i;
	            }
	        }
	    }
	    min_ind<max_ind ? cout << min << " " << max << endl : cout << max << " " << min << endl;
	}
	return 0;
}
