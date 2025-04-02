#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll MOD = 1e9 + 7;
ll n, k, A[20][20], B[20][20];
void Pow(ll A[20][20], ll B[20][20]){
    ll C[20][20];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            C[i][j] = 0;
            for(int x = 0; x < n; x++){
                C[i][j] = (C[i][j] + (A[i][x] * B[x][j]) % MOD) % MOD;
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            A[i][j] = C[i][j];
        }
    }
}
void Mul(ll A[20][20], int s){
    if(s <= 1) return;
    Mul(A, s / 2);
    Pow(A, A);
    if(s % 2 == 1){
        Pow(A, B);
    }
}
void Result(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        memset(A, 0, sizeof(A));
        memset(B, 0, sizeof(B));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> A[i][j];
                B[i][j] = A[i][j];
            }
        }
        Mul(A, k);
        Result();
    }
}