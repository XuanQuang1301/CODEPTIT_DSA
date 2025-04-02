#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, s, cnt, a[100], b[100], ok;
bool cmp(ll a, ll b){
    return a > b;
}
void Try(ll i, ll sum, ll pre){
    for(ll j = pre; j < n; j++){
        if(sum + a[j] > s) continue;
        b[i] = a[j];
        if(sum + b[i] == s){
            cnt = min(cnt, i + 1);
            ok = 1;
        }
        else Try(i + 1, sum + b[i], j + 1);
    }
}
int main(){
    cin >> n >> s;
    cnt = 100;
    ok = 0;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a, a + n, cmp);
    Try(0, 0, 0);
    if(ok == 0){
        cout << -1 << endl;
    }
    else cout << cnt << endl;
}