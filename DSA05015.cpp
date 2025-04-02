#include <bits/stdc++.h>
using namespace std;
long long p[1001][1001]; 
long long const MOD = 1e9 + 7;
void solve(){
    for(int i = 1; i <= 1000; i++){
        p[i][1] = i;
    }
    for(int i = 2; i <= 1000; i++){
        for(int j = 2; j <= i; j++){
            p[i][j] = i * p[i - 1][j - 1] % MOD;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        solve();
        cout << p[n][k] << endl;
    }
}