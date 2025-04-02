#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n, k;
        cin >> n >> k;
        long long a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(a[0] > k){
            cout << -1 << endl;
        }
        else {
            for(int i = 1; i < n; i++){
                if(a[i - 1] <= k && a[i] > k){
                    cout << i << endl;
                    break;
                }
            }
        }
    }
}