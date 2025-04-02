#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        multiset<ll> SE;
        for(int i = 0; i < n; i++){
            ll x; cin >> x;
            SE.insert(x);
        }
        ll sum = 0;
        while(SE.size() > 1){
            ll tmp = 0;
            auto x = SE.begin();
            tmp = (tmp + *x) % MOD;
            SE.erase(x);
            auto y = SE.begin();
            tmp = (tmp + *y) % MOD;
            SE.erase(y);
            SE.insert(tmp);
            sum  = (sum + (tmp % MOD)) % MOD;
        }
        cout << sum % MOD << endl;
    }
}