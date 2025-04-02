#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        vector<long long> a(n);
        map<long long, long long> MP;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            MP[a[i]]++;
        }
        bool ok = false;
        for(int i = 0; i < n; i++){
            if(MP[a[i]] > 1){
                cout << a[i];
                ok = true;
                break;
            }
        }
        if(!ok) cout << "NO";
        cout << endl;
    }
}