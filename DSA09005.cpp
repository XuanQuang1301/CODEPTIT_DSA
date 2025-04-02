#include <bits/stdc++.h>
using namespace std;
vector<vector<int>> B;
vector<bool> check;
int v, e, u;

void inp(){
    cin >> v >> e >> u;
    B.clear(); B.resize(v + 1);
    check.clear(); check.resize(v + 1, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        B[x].push_back(y);
        B[y].push_back(x);
    }
}
void BFS(int u){
    queue<int> q;
    q.push(u);
    while(!q.empty()){
        int i = q.front(); q.pop();
        cout << i << " ";
        check[i] = true;
        for(auto j : B[i]){
            if(!check[j]){
                q.push(j);
                check[j] = true;
            }
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
        BFS(u);
        cout << endl;
    }
}