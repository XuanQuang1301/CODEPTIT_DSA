#include <bits/stdc++.h>
using namespace std;
int dp[100][100][100];
int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        string x, y, z;
        cin >> n >> m >> k >> x >> y >> z;
        memset(dp, 0, sizeof(dp));
        for(int i = 0; i <= n; i++){
            for(int j = 0; j <= m; j++){
                for(int l = 0; l <= k; l++){
                    if(i == 0 || j == 0 || l == 0){
                        dp[i][j][l] = 0;
                    }
                    else if(x[i - 1] == y[j - 1] && y[j - 1] == z[l - 1]){
                        dp[i][j][l] = dp[i - 1][j - 1][l - 1] + 1;
                    }
                    else{
                        dp[i][j][l] = max(dp[i - 1][j][l], max(dp[i][j - 1][l], dp[i][j][l - 1]));
                    }
                }
            }
        }
        cout << dp[n][m][k] << endl;
    }
}