#include <bits/stdc++.h>
using namespace std;
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
        ll n1 = 0, n2 = 0;
        for(int i = 0; i < n; i += 2){
            n1 = n1 * 10 + a[i];
        }
        for(int i = 1; i < n; i += 2){
            n2 = n2 * 10 + a[i];
        }
        cout << n1 + n2 << endl;
    }
}