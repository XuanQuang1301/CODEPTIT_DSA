#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int l = INT_MAX, r = INT_MIN;
        int tmp[100005] = {0};
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            tmp[x] = 1;
            l = min(l, x);
            r = max(r, x);
        }
        int cnt = 0;
        for(int i = l; i <= r; i++){
            if(tmp[i] == 0){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}