#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int l = 0, r = n - 1, ok = 0;
        while(l <= r){
            int m = (l + r) / 2;
            if(x > a[m]){
                l = m + 1;
            }
            else if(x < a[m]){
                r = m - 1;
            }
            else{
                ok = 1;
                break;
            }
        }
        if(ok){
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }
}