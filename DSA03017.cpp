#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;
        map<char, int> mp;
        for(int i = 0; i < s.size(); i++){
            mp[s[i]]++;
        }
        vector<int> v;
        for(auto i : mp){
            v.push_back(i.second);
        }
        int sum = 0;
        while(n > 0){
            sort(v.begin(), v.end());
            v[v.size() - 1]--;
            n--;
        }
        for(int i = 0; i < v.size(); i++){
            sum += v[i] * v[i];
        }
        cout << sum << endl;
    }
}