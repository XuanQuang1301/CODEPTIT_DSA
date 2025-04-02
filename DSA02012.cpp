#include <bits/stdc++.h>
using namespace std;
int dem(int n, int k){
    if(k == 0 || k == n) return 1;
    return dem(n - 1, k - 1) + dem(n - 1, k);
}
int main(){
    int t; cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        vector<int> v(n * m);
        for(auto &i : v){
            cin >> i;
        }
        cout << dem(n + m - 2, n - 1) << endl;;
    }
}