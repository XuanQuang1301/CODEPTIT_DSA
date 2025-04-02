#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7, mu;
ll Try(ll n, ll k){
    if(k == 0){
        return 1;
    }
    ll x = Try(n, k / 2) % MOD;
    if(k % 2 == 0){
        return (x * x) % MOD;
    }
    else return ((x * x) % MOD * n) % MOD;
}
ll Try2(ll n, ll k){
    ll tmp = 1;
    while(k){
        if(k % 2 == 1){
            tmp = (tmp * n % MOD);
        }
        k /= 2;
        n = (n * n) % MOD;
    }
    return tmp;
}
ll dao(ll n){
    ll tmp = 0;
    while(n){
        tmp = tmp * 10 + n % 10;
        n /= 10;
    }
    return tmp;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        cout << Try2(n, dao(n)) << endl;
    }
}