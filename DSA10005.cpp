#include <bits/stdc++.h>
using namespace std;
int v, e;
vector<vector<int>> adj;
void inp(){
    cin >> v >> e;
    adj.clear(); adj.resize(v + 10);
    int ra[1005] = {0}, vao[1005] = {0};
    for(int i = 0; i < e; i++){
        int x, y; cin >> x >> y;
        adj[x].push_back(y);
        ra[x]++;
        vao[y]++;
    }
    for(int i = 1; i <= v; i++){
        if(ra[i] != vao[i]){
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        inp();
    }
}