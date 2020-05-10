#include <bits/stdc++.h>

using namespace std;

typedef unsigned long long int l_int;

int main()
{
    l_int rep;
    cin >> rep;
    while(rep--){
        l_int n, k;
        cin >> n >> k;
        l_int arr[n];
        for(l_int i=0; i<n; i++){
            cin >> arr[i];
        }
        vector<pair<int, int>> prev_after;
        for(l_int i=0; i<n; i++){
            l_int prev=0, after = 0;
            for(l_int j=0; j<n; j++){
                if(j<i && arr[j]>arr[i]){
                    prev++;
                }else if(j>i && arr[j]>arr[i]){
                    after++;
                }
            }
            //cout << prev << " " << after << endl;
            prev_after.emplace_back(make_pair(prev, after));
        }
        l_int answer = 0;
        for(l_int i=0; i<prev_after.size(); i++){
            l_int temp = prev_after[i].second * (k * (k-1)/2);
            l_int temp2 = prev_after[i].first * (k*(k+1)/2);
            answer += (temp + temp2);
        }
        cout << answer << endl;
    }
    return 0;
}
