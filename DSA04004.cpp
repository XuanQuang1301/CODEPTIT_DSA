#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int cnt = 1;
        while(k % 2 != 1){
            k/= 2;
            cnt++;
        }
        cout << cnt << endl;
    }
}