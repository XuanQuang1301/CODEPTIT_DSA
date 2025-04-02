#include <bits/stdc++.h>
using namespace std;
int a[1001][1001], dp[1001][1001];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;      
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i <= n; i++){
            dp[i][0] = INT_MAX;
        }
        for(int i = 0; i <= m; i++){
            dp[0][i] = INT_MAX;
        }
        dp[1][1] = a[1][1];
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= m; j++){
                if(i != 1 || j != 1) dp[i][j] = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1])) + a[i][j];
            }
        }
        cout << dp[n][m] << endl;
    }
}