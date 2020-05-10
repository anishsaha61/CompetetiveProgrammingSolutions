#include <bits/stdc++.h>

using namespace std;
typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int x;
	    cin >> x;
	    int currentStation = 0, distance = x, temp, stnCnt=0;
	    for(int i=1;  ; i++){
	        currentStation = currentStation + i;
	        temp = max((currentStation - x), (x - currentStation));
	        if(temp<distance){
	            stnCnt++;
	            distance = temp;
	        }else{
	            break;
	        }
	        
	    }
	    cout << distance + stnCnt << endl;
	}
	return 0;
}