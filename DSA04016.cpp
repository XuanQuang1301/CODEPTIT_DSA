#include<bits/stdc++.h>
using namespace std;
long long n, m, k, a[10000], b[10000];
vector<long long> v;
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> m >> k;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            v.push_back(a[i]);
        }
        for(int i = 0; i < m; i++){ 
            cin >> b[i];
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        cout << v[k - 1] << endl;
        v.clear();
    }
}