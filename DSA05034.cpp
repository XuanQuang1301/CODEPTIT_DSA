#include <bits/stdc++.h>
using namespace std;
long long const MOD = 1e9 + 7;
int main(){
    int t; cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long tmp[100001] = {0};
        tmp[0] = 1;
        for(int i = 1; i <= n; i++){
            for(int j = 1; j <= k; j++){
                if(j > i){
                    break;
                }
                tmp[i] = (tmp[i] + tmp[i - j]) % MOD;
            }
        }
        cout << tmp[n] << endl;
    }
}