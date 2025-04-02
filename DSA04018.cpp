#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        if(a[0] == 1){
            cout << 0 << endl;
        }
        else if(a[n - 1] == 0){
            cout << n << endl;
        }
        else{
            auto *it = upper_bound(a, a + n, 0);
            cout << (it - a) << endl;
        }
    }
}