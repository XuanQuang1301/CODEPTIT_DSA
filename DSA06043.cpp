#include <bits/stdc++.h>
using namespace std;
int  main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n + 5], tmp[n + 5] = {0};
        tmp[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
            tmp[i] = tmp[i - 1] + a[i];
        }
        int j = -1;
        for(int i = 2; i < n; i++){
            if(tmp[i - 1] == tmp[n] - tmp[i]){
                j = i;
                break;
            }
        }
        cout << j << endl;
    }
}