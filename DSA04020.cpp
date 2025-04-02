#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; 
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int l = 0, r = n - 1, j = -1;
        while(l < r){
            int ans = (l + r) / 2;
            if(a[ans] < k){
                l = ans + 1;
            }
            else if(a[ans] > k){
                r = ans - 1;
            }
            else{
                j = ans;
                break;
            }
        }
        if(j != -1){
            cout << j + 1 << endl;
        }
        else cout << "NO" << endl;
    }
}