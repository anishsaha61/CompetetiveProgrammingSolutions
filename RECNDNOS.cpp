#include <bits/stdc++.h>
using namespace std;

typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int n, maxValue=-1, maxIndex=-1;
	    cin >> n;
	    int arr[n];
	    set<int> inpVar;
	    for(int i=0; i<n; i++){
	        cin >> arr[i];
	        inpVar.insert(arr[i]);
	    }
	    vector<array<int, 3>> val_count_last;
	    for(auto i=inpVar.begin(); i!=inpVar.end(); ++i){
	        array<int, 3> temp;
	        temp[0] = *i;
	        temp[1]= 0;
	        temp[2] = -2;
	        val_count_last.emplace_back(temp);
	    }
	    for(int i=0; i<n; i++){
	        for(int j=0; j<val_count_last.size(); j++){
	            if(arr[i] == val_count_last[j][0] && max(val_count_last[j][2]-i, i-val_count_last[j][2])>1){
	                val_count_last[j][2] = i;
	                val_count_last[j][1]++;
	                break;
	            }
	        }
	    }
	    for(int j=0; j<val_count_last.size(); j++){
	        if(val_count_last[j][1]>maxValue){
	            maxValue = val_count_last[j][1];
	            maxIndex = j;
	        }
	    }
	   // cout << val_count_last[maxIndex][0] << " " << val_count_last[maxIndex][1] << " " << val_count_last[maxIndex][2] << endl;
	   cout << val_count_last[maxIndex][0] << endl;
	}
	return 0;
}
