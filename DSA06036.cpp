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
        sort(a, a + n);
        bool ok = false;
        for(int i = 0; i < n - 1; i++){
            int l = i + 1, r = n - 1; 
            while(l < r){
                long long sum = a[i] + a[l] + a[r];
                if(sum < k){
                    l++;
                }
                else if(sum > k){
                    r--;
                }
                else{
                    ok = true;
                    break;
                }
            }
            if(ok){ 
                break;
            }
        }
        if(ok){
            cout << "YES\n";
        }
        else cout << "NO\n";
    }
}