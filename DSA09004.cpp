#include <bits/stdc++.h>
using namespace std;
int v, e, u;
vector<vector<int>> adj;
vector<bool> visited;
void inp(){
    cin >> v >> e >> u;
    adj.clear(); adj.resize(v + 1);
    visited.clear(); visited.resize(v + 1, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
}
void DFS(int x){
    stack<int> st;
    st.push(x);
    while(!st.empty()){
        int i = st.top(); st.pop();
        if(visited[i] == false){
            cout << i << " ";
            visited[i] = true;
        }
        for(auto j : adj[i]){
            if(!visited[j]){
                st.push(i);
                st.push(j);
                break;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        DFS(u);
        cout << endl;
    }
}