#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    return a.first < b.first;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<pair<int, int>> VE;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            VE.push_back({x, i});
        }
        sort(VE.begin(), VE.end(), cmp);
        int ans = INT_MIN, tmp = VE[0].second;
        
        for(int i = 1; i < n; i++){
            if(VE[i].second - tmp > ans){
                ans = VE[i].second - tmp;
            }
            tmp = min(tmp, VE[i].second);
        }
        cout << ans << endl;
    }
}