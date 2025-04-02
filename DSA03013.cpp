#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        set<char> SE;
        for(auto i : s){
            SE.insert(i);
        }
        if(SE.size() >= n){
            cout << 1 << endl;
        }
        else cout << -1 << endl;
    }
}