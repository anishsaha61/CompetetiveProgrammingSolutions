#include<bits/stdc++.h>
using namespace std;

typedef unsigned long long int lint;

int main(){
    lint rep;
    // cin >> rep;
    rep = 1;
    while(rep--){
        int n;
        string inps;
        cin >> n >> inps;
        while(n--){
            string temp, temp2="";
            cin >> temp;
            for(int i=0; temp[i]; i++){
                if(temp[i] == '_'){
                    temp2 += " ";
                }else if((int)temp[i] < 91 && (int)temp[i] >= 65 ){
                    char c = inps[(int)temp[i] - 65];
                    c = (int)c - 32;
                    temp2 += c;
                }else if((int)temp[i] < 123 && (int)temp[i] >= 97){
                    temp2 += inps[(int)temp[i] - 97];
                }else{
                    temp2 += temp[i];
                }
            }
            cout << temp2 << endl;
        }
    }
    return 0;
}