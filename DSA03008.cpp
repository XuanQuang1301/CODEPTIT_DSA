#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> V(n);
        for(int i = 0 ; i < n; i++){
            cin >> V[i].second;
        }
        for(int i = 0; i < n; i++){
            cin >> V[i].first;
        }
        sort(V.begin(), V.end());
        int tmp = V[0].first, cnt = 1;
        for(int i = 1; i < n; i++){
            if(V[i].second >= tmp){
                cnt++;
                tmp = V[i].first;
            }
        }
        cout << cnt << endl;
    }
}