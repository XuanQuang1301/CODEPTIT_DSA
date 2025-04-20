#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> ans;
int v, e, cnt;
void inp(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 10);
    ans.clear(); ans.resize(v + 10, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
}
void DFS(int i){
    ans[i] = true;
    for(auto j : adj[i]){
        if(!ans[j]){
            DFS(j);
        }
    }
}
void check(){
    for(int i = 1; i <= v; i++){
        ans.clear(); ans.resize(v + 10, false);
        DFS(i);
        for(int j = 1; j <= v; j++){
            if(!ans[j]){
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        check();
    }
}
