#include <bits/stdc++.h>
using namespace std;
int n;
vector<vector<int>> adj;
vector<bool> vs;
void dfs(int u){
    stack<int> st;
    vector<pair<int, int>> ans;
    st.push(u);
    vs[u] = true;
    while(!st.empty()){
        int x = st.top(); st.pop();
        vs[x] = true;
        for(auto i : adj[x]){
            if(!vs[i]){
                ans.push_back({x, i});
                st.push(x);
                st.push(i);
                break;
            }
        }
    }
    if(ans.size() == n - 1) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        adj.assign(n + 10, {});
        vs.assign(n + 10, false);
        for(int i = 1; i < n; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }
        dfs(1);
    }
}