#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

ll MOD = 1e9 + 7;
ll x[20][20], y[20][20], n, k;

void Luythua(ll x[20][20], ll y[20][20]){
    ll c[100][100];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            c[i][j] = 0;
            for(int k = 0; k < n; k++){
                c[i][j] = (c[i][j] +  (x[i][k] * y[k][j]) % MOD) % MOD;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            x[i][j] = c[i][j];
        }
    }
}
void Pow(ll x[20][20], int n){
    if(n <= 1) return;
    Pow(x, n / 2);
    Luythua(x, x);
    if(n % 2 == 1){
        Luythua(x, y);
    }
}
void Ketqua(){
    ll sum = 0;
    for(int i = 0; i < n; i++){
        sum = (sum + x[i][n - 1]) % MOD;
    }
    cout << sum % MOD << endl;
    // for(int i = 0; i < n; i++){
    //     for(int j = 0; j < n; j++){
    //         cout << x[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> x[i][j];
                y[i][j] = x[i][j];
            }
        }
        Pow(x, k);
        Ketqua();
    }
}