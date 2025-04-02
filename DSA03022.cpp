#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[10000], sum;

int main(){
    ll n;
    cin >> n; 
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sum = 1;
    sort(a, a + n);
    sum = max({a[0] * a[1], a[0] * a[1] * a[n - 1], a[n - 1] * a[n - 2] * a[n - 3], a[n - 1] * a[n - 2]});
    cout << sum << endl;
}