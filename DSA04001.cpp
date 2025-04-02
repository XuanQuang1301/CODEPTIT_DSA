#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;
ll pow1(ll a, ll b){
    if(b == 0){
        return 1;
    }
    ll x = pow1(a, b / 2) % MOD;
    
    if( b % 2 == 1){
        return ((x * x % MOD) * a) % MOD;
    }
    else return (x * x) % MOD;
}
ll pow2(ll a, ll b){
    ll tmp = 1;
    while(b){
        if(b % 2 == 1){
            tmp = (tmp * a % MOD);
        }
        b /= 2;
        a = (a * a) % MOD;
    }
    return tmp % MOD;
}
int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        cout << (ll)pow2(n, k) << endl;
    }
}