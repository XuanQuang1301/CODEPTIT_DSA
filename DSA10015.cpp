#include <bits/stdc++.h>
using namespace std;
int n, m;
struct Node{
    int u, v, w;
    Node(int u, int v, int w){
        this->u = u;
        this->v = v;
        this->w = w;
    }
};
bool cmp(Node a, Node b){
    if(a.w == b.w){
        if(a.u == b.u) return a.v < b.v;
        return a.u < b.u;
    }
    return a.w < b.w;
}
void kruskal(vector<Node> ans, int n){
    int sum = 0;
    vector<pair<int, int>> adj;
    vector<bool> visited(n + 10, false);
    for(auto i : ans){
        if(!visited[i.u] || !visited[i.v]){
            visited[i.u] = visited[i.v] = true;
            sum += i.w;
        }
    }
    cout << sum << endl;
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        vector<Node> ans;
        for(int i = 0; i < m; i++){
            int x, y, z; cin >> x >> y >> z;
            ans.push_back(Node(x, y, z));
        }
        sort(ans.begin(), ans.end(), cmp);
        kruskal(ans, n);
    }
}