#include <bits/stdc++.h>
using namespace std;
string s = "@ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int cnt = 1;
        while(k % 2 == 0){
            k /= 2;
            cnt++;
        }
        cout << s[cnt] << endl;
    }
}