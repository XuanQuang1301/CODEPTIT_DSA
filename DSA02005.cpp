#include <bits/stdc++.h>
using namespace std;
string s;
int n, a[10], tmp[10];
void out(){
    for(int i = 1; i <= n; i++){
        cout << s[a[i] - 1];
    }
    cout << " ";
}
void Try(int i ){
    for(int j = 1; j <= n; j++){
        if(!tmp[j]){
            tmp[j] = 1;
            a[i] = j;
            if(i == n){
                out();
            }
            else Try(i + 1);
            tmp[j] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> s;
        n = s.size();
        Try(1);
        cout << endl;
    }
}