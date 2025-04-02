#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<int, int> a, pair<int, int> b){
    if(a.second == b.second){
        return a.first < b.first;
    }
    return a.second > b.second;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> mp;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
        }
        vector<pair<int, int>> V;
        int j = 0;
        for(auto i : mp){
            V.push_back({i.first, i.second});
        }
        sort(V.begin(), V.end(), cmp);
        for(auto i : V){
            while(i.second--){
                cout << i.first << " ";
            }
        }
        cout << endl;
    }
}