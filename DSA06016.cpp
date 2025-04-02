#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n, m; 
        cin >> n >> m;
        long long MAX = INT_MIN, MIN = INT_MAX;
        for(int i = 0; i < n; i++){
            long long x; cin >> x;
            MAX = max(MAX, x);
        }
        for(int i = 0; i < m; i++){
            long long x; cin >> x;
            MIN = min(MIN, x);
        }
        cout << MAX * MIN << endl;
    }
}