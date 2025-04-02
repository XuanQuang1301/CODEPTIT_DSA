#include <bits/stdc++.h>
using namespace std;
string s = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
int n, k, a[100];

void out(){
    for(int i = 1; i <= k; i++){
        cout << s[a[i] - 1];
    }
    cout << endl;
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n; j++){
        a[i] = j;
        if(i == k){
            out();
        }
        else Try(i + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        Try(1);
    }   
}
