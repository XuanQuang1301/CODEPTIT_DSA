#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], tmp[100], dem;
bool ok;
void check(){
    dem++;
    for(int i = 1; i <= k; i++){
        if(a[i] != tmp[i]){
            return;
        }
    }
    ok = true;
}
void Try(int i){
    if(ok == true) return;
    for(int j = a[i - 1] + 1; j <= n; j++){
        a[i] = j;
        if(i == k){
            check();
        }
        else{
            Try(i + 1);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> tmp[i];
        }
        ok = false;
        dem = 0;
        Try(1);
        cout << dem << endl;
    }
}