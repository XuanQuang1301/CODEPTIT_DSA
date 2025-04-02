#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, s, m;
        cin >> n >> s >> m;
        if(n < m || 6 * n < 7 * m){
            cout << -1 << endl;
        }
        else{
            int i = 1;
            while(i * n < s * m){
                i++;
            }
            cout << i << endl;
        }
    }
}