#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], tmp[n];
        for(ll i = 0; i < n; i++) cin >> a[i];
        tmp[0] = a[0];
        tmp[1] = max(a[0], a[1]);
        for(ll i = 2; i < n; i++){
            tmp[i] = max(tmp[i - 2] + a[i], tmp[i - 1]);
        }
        cout << tmp[n - 1] << endl;
    }
}