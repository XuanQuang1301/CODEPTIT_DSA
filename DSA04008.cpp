#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;
ll f[20][20], d[20][20];
void ktao(){
    f[0][0] = f[0][1] = f[1][0] = 1; f[1][1] = 0;
    d[0][0] = d[0][1] = d[1][0] = 1; d[1][1] = 0;
}
void Mul(ll f[20][20], ll l[20][20]){
    ll x = ((f[0][0] * l[0][0]) % MOD + (f[0][1] * l[1][0]) % MOD) % MOD;
    ll y = ((f[0][0] * l[0][1]) % MOD + (f[0][1] * l[1][1]) % MOD) % MOD;
    ll z = ((f[1][0] * l[0][0]) % MOD + (f[1][1] * l[1][0]) % MOD) % MOD;
    ll t = ((f[1][0] * l[0][1]) % MOD + (f[1][1] * l[1][1]) % MOD) % MOD;
    f[0][0] = x; f[0][1] = y; f[1][0] = z; f[1][1] = t;
}
void Pow(ll f[20][20], int n){
    if(n <= 1) return;
    Pow(f, n / 2);
    Mul(f, f);
    if(n % 2 == 1){
        Mul(f, d);
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n; 
        cin >> n;
        ktao();
        Pow(f, n - 1);
        cout << f[0][0] << endl;
    }
}