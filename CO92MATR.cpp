#include <bits/stdc++.h>

using namespace std;
typedef long long int lint;

int main() {
	lint rep;
	cin >> rep;
	while(rep--){
	    int m, n;
	    cin >> m >> n;
	    lint mat[m+2][n+2];
	    for(int i=0; i<m+2; i++){
	        for(int j=0; j<n+2; j++){
	            if(i==0 || j==0 || i==m+1 || j==n+1){
	                if(i==0 || j==0){
	                    mat[i][j] = 1;
	                }else{
	                    mat[i][j] = 10000000001;
	                }
	            }else{
	                cin >> mat[i][j];
	            }
	        }
	    }
	    bool possible = true;
	    for(int i=1; i<=m; i++){
	        for(int j=1; j<=n; j++){
	            if(mat[i][j] == -1){
	                mat[i][j] = max(mat[i-1][j], mat[i][j-1]);
	            }
                if((mat[i][j] > mat[i+1][j]  &&  mat[i+1][j] != -1) || (mat[i][j] > mat[i][j+1] &&  mat[i][j+1] != -1)){
                    possible = false;
                    break;
                }
	        }
	        if(!possible){
	            break;
	        }
	    }
	    if(possible){
    	    for(int i=1; i<=m; i++){
    	        for(int j=1; j<=n; j++){
    	            cout << mat[i][j] << " ";
    	        }
    	        cout << endl;
    	    }
	    }else{
	        cout << -1 << endl;
	    }
	}
	return 0;
}