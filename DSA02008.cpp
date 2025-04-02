#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> VE;
vector<int> v;
int check[100];
int n, k, a[100][100], b[100];
void solve(){
    int Sum = 0;
    for(int i = 0; i < n; i++){
        Sum += a[i][b[i]];
    }
    if(Sum == k){
        v.clear();
        for(int i = 0; i < n; i++){
            v.push_back(b[i] + 1);
        }
        VE.push_back(v);
    }
}
void Try(int i){
    for(int j = 0; j < n; j++){
        if(check[j] == 0){
            check[j] = 1;
            b[i] = j;
            if(i == n - 1){
                solve();
            }
            else Try(i + 1);
            check[j] = 0;
        }
    }
}
int main(){
    cin >> n >> k;
    VE.clear();
    
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        check[i] = 0;
    }
    Try(0);
    cout << VE.size() << endl;
    for(auto i : VE){
        for(auto x : i){
            cout << x << " ";
        }
        cout << endl;
    }
}