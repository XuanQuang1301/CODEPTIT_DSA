#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        multiset<int> SE;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            SE.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            SE.insert(x);
        }
        for(auto i : SE) cout << i << " ";
        cout << endl;
    }
}