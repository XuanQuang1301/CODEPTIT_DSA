#include <bits/stdc++.h>
using namespace std;
int v, e, u1, u2, ok;
int a[1005];
vector<vector<int>> adj;
vector<bool> check;
void inp(){
    cin >> v >> e >> u1 >> u2;
    adj.clear(); adj.resize(v + 1);
    check.clear(); check.resize(v + 1, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
    }
    ok = 0;
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int x = q.front(); q.pop();
        check[x] = true;
        int tmp = x;
        for(auto i : adj[x]){
            if(check[i] == false){
                a[i] = tmp;
                tmp = a[i];
                q.push(i);
                check[i] = true;
                if(i == u2){
                    ok = 1;
                    return;
                }
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
            vector<int> ans;
            ans.push_back(u2);
            int tmp = u2;
            while(tmp != u1){
                ans.push_back(a[tmp]);
                tmp = a[tmp];
            }
            for(int i = ans.size() - 1; i >= 0; i--){
                cout << ans[i] << " ";
            }
        }
        else{ 
            cout << -1;
        }
        cout << endl;
    }
}