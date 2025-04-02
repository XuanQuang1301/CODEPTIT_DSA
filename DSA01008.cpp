#include <bits/stdc++.h>
using namespace std;
int n, k, a[100];
void out(){
    int dem = 0;
    for(int i = 1; i <= n; i++){
        if(a[i] == 1){
            dem++;
        }
    }
    if(dem == k){
        for(int i = 1; i <= n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = j;
        if(i == n){
            out();
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
        Try(1);
    }
}