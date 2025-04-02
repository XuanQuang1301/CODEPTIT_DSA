#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[100], tmp[100], dem;
bool ok;
void check(){
    dem++;
    for(int i = 1; i <= n; i++){
        if(a[i] != tmp[i]){
            return;
        }
    }
    ok = true;
}
void Try(int i){
    if(ok == true) return;
    for(int j = 1; j <= n; j++){
        if(b[j] != 1){
            b[j] = 1;
            a[i] = j;
            if(i == n){
                check();
            }
            else{
                Try(i + 1);
            }
            b[j] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 1; i <= n; i++){
            cin >> tmp[i];
        }
        dem = 0;
        ok = false;
        Try(1);
        cout << dem << endl;
    }
}