#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int i = 0, cnt = 0;
        while(i < s.size()){
            if(s[i] != '[' || s[i + 1] != ']'){
                cnt++;
            }
            i += 2;
        }
        cout << cnt << endl;
    }
}