#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n];
        vector<pair<ll, ll>> V;

        for(int i = 0; i < n; i++){
            cin >> a[i];
            V.push_back({a[i], i});
        }
        sort(V.begin(), V.end());
        
    }
}