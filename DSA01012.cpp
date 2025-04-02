#include <bits/stdc++.h>
using namespace std;
int n;
string s[10000];
int main(){
    int t; cin >> t;
    while(t--){
        vector<string> v;
        int n; cin >> n;
        int cnt = pow(2, n);
        v.push_back("0");
        v.push_back("1");
        while(v.size() < cnt){
            for(int i = v.size() - 1; i >= 0; i--){
                v.push_back(v[i]);
            }
            int k = v.size();
            for(int i = 0; i < k / 2; i++){
                v[i] = "0" + v[i];
            }
            for(int i = k / 2; i < k; i++){
                v[i] = "1" + v[i];
            }
        }
        for(string s : v){
            cout << s << " ";
        }
        cout << endl;
    }
}