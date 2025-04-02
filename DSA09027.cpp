#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> adj;
vector<bool> check;
int v, e, u1, u2;
void inp(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 1);
    
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
int DuongDi(int u1, int u2){
    queue<int> q;
    q.push(u1);
    check.clear(); check.resize(v + 1, false);
    while(!q.empty()){
        int x = q.front(); q.pop();
        check[x] = true;
        for(auto i : adj[x]){
            if(!check[i]){
                q.push(i);
                check[i] = true;
                if(i == u2){
                    return 1;
                }
            }
        }
    }
    return 0;
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        int q; cin >> q;
        while(q--){
            int u1, u2; cin >> u1 >> u2;
            if(DuongDi(u1, u2) == 1){
                cout << "YES\n";
            }
            else cout << "NO\n";

        }
    }
}