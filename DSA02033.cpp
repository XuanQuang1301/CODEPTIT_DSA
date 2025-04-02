#include <bits/stdc++.h>
using namespace std;
int n, a[100], tmp[100];
void in(){
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!tmp[j] && abs(j - a[i - 1]) != 1 || i == 1){
            tmp[j] = 1;
            a[i] = j;
            if(i == n){
                in();
            }
            else Try(i + 1);
            tmp[j] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
    }
}