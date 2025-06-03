#include <bits/stdc++.h>
using namespace std;
int n, m, u;
vector<vector<int>> adj;
vector<bool> visited;
void dfs(int u){
    stack<int> st;
    vector<pair<int, int>> ans;
    st.push(u);
    visited[u] = true;
    while(!st.empty()){
        int x = st.top();
        st.pop();
        for(auto i : adj[x]){
            if(!visited[i]){
                visited[i] = true;
                ans.push_back({x, i});
                st.push(x);
                st.push(i);
                break;
            }
        }
    }
    if(ans.size() != n - 1){
        cout << -1 << endl;
    }
    else{
        for(auto i : ans){
            cout << i .first << " " << i.second << endl;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> u;
        adj.clear(); adj.resize(n + 5);
        visited.clear(); visited.resize(n + 5, false);
        for(int i = 0; i < m; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(u);
    }
}