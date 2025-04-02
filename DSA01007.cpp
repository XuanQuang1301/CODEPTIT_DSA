#include <bits/stdc++.h>
using namespace std;
int n;
string s = "AB", v;
void out(){
    for(int i = 1; i <= n; i++){
        cout << v[i];
    }
    cout << " ";
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        v[i] = s[j];
        if(i == n){
            out();
        }
        else Try(i + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(1);
        cout << endl;
    }
}