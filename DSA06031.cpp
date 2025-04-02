#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; 
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i <= n - k; i++){
            int tmp = INT_MIN;
            for(int j = i; j < i + k; j++){
                tmp = max(tmp, a[j]);
            }
            cout << tmp << " ";
        }
        cout << endl;
    }
}