#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m, k;
        vector<int> v;
        cin >> n >> m >> k;
        int a[n], b[m], c[k];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        for(auto &x : c) cin >> x;
        int i = 0, j = 0, l = 0;
        while(i < n && j < m && l < k){
            if(a[i] > b[j]){
                j++;
            }
            else if(a[i] > c[l]){
                l++;
            }
            else if(a[i] < b[j] || a[i] < c[l]){
                i++;
            }
            else{
                v.push_back(a[i]);
                i++;
                j++;
                l++;
            }
        }
        if(v.size() == 0){
            cout << "NO";
        }
        else{
            for(auto x : v){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}