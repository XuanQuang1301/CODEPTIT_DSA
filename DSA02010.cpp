#include <bits/stdc++.h>
using namespace std;
int n, x, a[100], b[100], ok;
void out(int i){
    cout << "[";
    for(int j = 0; j <= i; j++){
        cout << b[j];
        if(j < i){
            cout << " ";
        }
    }
    cout << "] ";
}
void Try(int i, int sum, int pre){
        for(int j = pre; j < n; j++){
            if(sum + a[j] > x) {
                continue;
            }
            b[i] = a[j];
            if(sum + b[i] == x){
                ok = 1;
                out(i);
            }
            else if(sum + a[j] < x){
                Try(i + 1, sum + a[j], j);
            }
        }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        ok = 0;
        Try(0, 0, 0);
        if(ok == 0){
            cout << -1;
        }
        cout << endl;
    }
}