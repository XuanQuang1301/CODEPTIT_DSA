#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        pair<int, int> a[n];
        for(auto &x : a){
            cin >> x.second >> x.first;
        }
        sort(a, a + n);
        int cnt = 0, tmp = -1;
        for(auto x : a){
            if(x.second >= tmp){
                cnt++;
                tmp = x.first;
            }
        }
        cout << cnt << endl;
    }
}