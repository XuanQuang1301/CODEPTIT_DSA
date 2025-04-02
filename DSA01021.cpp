#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        set<int> s;
        cin >> n >> k;
        int a[k + 1];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            s.insert(a[i]);
        }
        int dem = s.size();
        int i = k;
        while(i > 0 && a[i] == n - k + i){
            i--;
        }
        if(i > 0){
            a[i]++;
            s.insert(a[i]);
            for(int j = i + 1; j <= k; j++){
                a[j] = a[j - 1] + 1;
                s.insert(a[j]);
            }
            cout << s.size() - dem << endl;
        }
        else{
            cout << k << endl;
        }
    }
}