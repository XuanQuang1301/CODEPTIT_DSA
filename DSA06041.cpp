#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        map<int, int> mp;
        int tmp = -1, MAX = INT_MIN;
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            mp[x]++;
            if(mp[x] > n / 2 && mp[x] > MAX){
                tmp = x;
                MAX = mp[x];
            }
        }
        if(tmp != -1) cout << tmp;
        else cout << "NO";
        cout << endl;
    }
}