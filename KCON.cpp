#include <bits/stdc++.h>

using namespace std;
typedef long long int lint;

lint findMaxSubSum(lint arr[], lint size){
    lint currentMax = arr[0], allTimeMax = arr[0];
    for(lint i=1; i<size; i++){
        currentMax += arr[i];
        if(currentMax>allTimeMax){
            allTimeMax = currentMax;
        }
        if(currentMax<0){
            currentMax = 0;
        }
    }
    return allTimeMax;
}


int main(){
    lint rep;
    cin >> rep;
    while(rep--){
        lint siz, itt, temp2 = 0, d=0;
        cin >> siz >> itt;
        if(itt>1){
            d=siz*2;
        }else{
            d=siz;
        }
        lint arr[d];
        for(lint i=0; i<siz; i++){
            cin >> arr[i];
            temp2+=arr[i];
            if(d==2*siz){
                arr[i+siz] = arr[i];
            }
        }
        lint temp = findMaxSubSum(arr, d);
        temp2 > 0 && itt>1 ? cout << (temp + (temp2*(itt-2))) << endl : cout << temp << endl;
    }
    return 0;
}