#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> adj;
vector<int> check;
int v, e, ok;
void Test(int s){
    if(ok) return;
    check[s] = 1;
    for(auto i : adj[s]){
        if(check[i] == 0){
            Test(i);
        }
        else if(check[i] == 1){
            ok = 1;
            return;
        }
    }
    check[s] = 2;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> v >> e;
        ok = 0;
        check.clear(); check.resize(v + 5, 0);
        adj.clear(); adj.resize(v +5);
        for(int i = 0; i < e; i++){
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
        }
        for(int i = 1; i <= v; i++){
            if(!ok && !check[i]){
                Test(i);
            }
        }
        cout << (ok ? "YES" : "NO") << endl;
    }
}