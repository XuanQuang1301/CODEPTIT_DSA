#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
        map<ll, ll> MP;
        ll tmp[n] = {0};
        for(int i = 0; i < n; i++){
            int x; cin >> x;
            MP[x]++;
        }
        ll cnt = 0;
        for(auto i : MP){
            if(MP[k - i.first] > 0){
                if(k - i.first == i.first){
                    cnt += (i.second * (i.second - 1)) / 2;
                }
                else{
                    cnt += i.second * MP[k - i.first];
                }
                MP[k - i.first] = 0;
            }
        }
        cout << cnt << endl;
    }
}