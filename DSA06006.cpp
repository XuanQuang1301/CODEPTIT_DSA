#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        multiset<int> S;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            S.insert(x);
        }
        for(auto i : S) cout << i << " ";
        cout << endl;
    }
}