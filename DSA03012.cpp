#include <bits/stdc++.h>
using namespace std;
void check(map<char, int> mp, string s){
    for(auto i : mp){
        if(i.second * 2 - 1 > s.size()){
            cout << "-1" << endl;
            return;
        }
    }
    cout << "1" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        string s;
        cin >> s;
        map<char, int> mp;
        for(auto i : s){
            mp[i]++;
        }
        check(mp, s);
    }
}