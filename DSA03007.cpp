#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<ll> v1, v2;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v1.push_back(x);
        }
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            v2.push_back(x);
        }
        sort(v1.begin(), v1.end());
        sort(v2.rbegin(), v2.rend());
        ll sum = 0;
        for(int i = 0; i < n; i++){
            sum += v1[i] * v2[i];
        }
        cout << sum << endl;
    }
}