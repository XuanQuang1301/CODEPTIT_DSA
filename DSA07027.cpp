#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 5];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        for(int i = 0; i < n - 1; i++){
            int x = -1;
            for(int j = i + 1; j < n; j++){
                if(a[j] > a[i]){
                    x = a[j];
                    break;
                }
            }
            cout << x << " ";
        }
        cout << -1;
        cout << endl;
    }  
}