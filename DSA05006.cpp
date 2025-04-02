#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        ll a[n], tmp[n] = {0};
        for(int i = 0; i < n; i++){ 
            cin >> a[i];
            tmp[i] = a[i];
        }
        ll MAX = a[0];
        for(int i = 1; i < n; i++){
            for(int j = i - 1; j >= 0; j--){
                if(a[i] > a[j]){
                    tmp[i] = max(tmp[i], tmp[j] + a[i]);
                }
            }
            MAX = max(MAX, tmp[i]);
        }
        cout << MAX << endl;
    }
}