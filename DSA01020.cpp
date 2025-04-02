#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        int a[n];
        for(int i = 0; i < n; i++){
            a[i] = s[i] - '0';
        }
        int i = n - 1;
        while(i >= 0 && a[i] == 0){
            a[i] = 1;
            i--;
        }
        if(i >= 0){
            a[i] = 0;
        }
        for(int i = 0; i < n; i++){
            cout << a[i];
        }
        cout << endl;
    }
}