#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x; 
        cin >> n >> x;
        int ans;
        for(int i = 1; i <= n; i++){
            int k; cin >> k;
            if(k == x){
                ans = i;
            }
        }
        cout << ans << endl;
    }
}