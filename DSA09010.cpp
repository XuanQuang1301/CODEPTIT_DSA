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

