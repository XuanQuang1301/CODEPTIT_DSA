#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for(auto &i : a) cin >> i;
        for(auto &i : b) cin >> i;
        int dp[n + m - 1] = {};
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                dp[i + j] += a[i] * b[j];
            }
        }
        for(auto i : dp) cout << i << " ";
        cout << endl;
    }
}