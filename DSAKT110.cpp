#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++) cin >> a[i];
        int cnt[n + 1] = {0};
        cnt[0] = a[0];
        cnt[1] = max(a[0], a[1]);
        for(int i = 2; i < n; i++){
            cnt[i] = max(cnt[i - 2] + a[i], cnt[i - 1]);
        }
        cout << cnt[n - 1] << endl;
    }
}
