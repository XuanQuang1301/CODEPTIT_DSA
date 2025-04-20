#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll const MOD = 1e9 + 7;
int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        vector<ll> ve(n);
        for(int i = 0; i < n; i++){
            cin >> ve[i];
        }
        ll dp[1005] = {0};
        dp[0] = 1;
        for(int i = 1; i <= k; i++){
            for(int j = 0; j < n; j++){
                if(i >= ve[j]){
                    dp[i] = (dp[i] + dp[i - ve[j]]) % MOD;
                }
            }
        }
        cout << dp[k] % MOD << endl;  
    }
}