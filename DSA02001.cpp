#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int b[100][100];
        for(int i = 1; i <= n; i++){
            b[1][i] = a[i];
        }
        for(int i = 2; i <= n; i++){
            for(int j = 1; j <= n - i + 1; j++){
                b[i][j] = b[i - 1][j] + b[i - 1][j + 1];
            }
        }
        for(int i = n; i >= 1; i--){
            cout << "[";
            for(int j = 1; j <= n - i + 1; j++){
                cout << b[i][j];
                if(j < n - i + 1){
                    cout << " ";
                }
            }
            cout << "] ";
        }
    }
}