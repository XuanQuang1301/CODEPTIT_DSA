#include <bits/stdc++.h>
using namespace std;
int v, e, u1, u2, train[1000], ok;
vector<vector<int>> adj;
vector<bool> check;
void inp(){
    cin >> v >> e >> u1 >> u2;
    adj.clear(); adj.resize(v + 10);
    check.clear(); check.resize(v + 10, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    memset(train, 0, sizeof(train));
    ok = 0;
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front(); q.pop();
        if(x == u2) {
            ok = 1;
            return;
        }
        check[x] = true;
        for(auto i : adj[x]){
            if(!check[i]){
                check[i] = true;
                train[i] = x; 
                q.push(i);
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        BFS(u1);
        if(ok){
            vector<int> v;
            v.push_back(u2);
            int tmp = train[u2];
            while(tmp != 0){
                v.push_back(tmp);
                tmp = train[tmp];
            }
            for(int i = v.size() - 1; i >= 0; i--){
                cout << v[i] << " ";
            }
            cout << endl;
        }
        else cout << -1 << endl;
    }
}