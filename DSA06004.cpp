#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        set<int> a, b, c;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            a.insert(x);
            c.insert(x);
        }
        for(int i = 0; i < m; i++){
            int x; cin >> x;
            b.insert(x);
            c.insert(x);
        }
        for(auto i : c) cout << i << " ";
        cout << endl;
        for(auto i : a){
            if(b.find(i) != b.end()){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}