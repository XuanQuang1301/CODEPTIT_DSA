#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj;
vector<bool> check;
void inp(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 10);
    check.clear(); check.resize(v + 10, false);
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        adj[y].push_back(x);
    }
    int dem = 0;
    for(int i = 1; i <= v; i++){
        if(adj[i].size() % 2 != 0){
            dem++;
        }
    }
    if(dem == 0) cout << 2 << endl;
    else if(dem == 2) cout << 1 << endl;
    else cout << 0 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
    }
}