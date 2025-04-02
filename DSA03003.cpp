#include <bits/stdc++.h>
using namespace std;
int MOD = 1e9 + 7;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        ll MAX = 0;
        for(int i = 0; i < n; i++){
            MAX = (MAX + (a[i] * i) % MOD) % MOD ;
        }
        cout << MAX % MOD << endl;
    }
}