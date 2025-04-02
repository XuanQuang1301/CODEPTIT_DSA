#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, s; cin >> n >> s;
        vector<int> w(n + 1), v(n + 1);
        for(int i = 1; i <= n; i++) cin >> w[i];
        for(int i = 1; i <= n; i++) cin >> v[i];
        vector<vector<int>> dp(n + 1, vector<int> (s + 1));
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= s; j++){
                dp[i][j] = dp[i - 1][j];
                if(j >= w[i]){
                    dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
                }
            }
        }
        cout << dp[n][s] << endl;
    }
}