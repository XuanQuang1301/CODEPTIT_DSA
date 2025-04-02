#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        long long a[n], sum = 0, sum1 = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            sum += a[i];
        }
        sort(a, a + n);
        int pos = min(n - k, k);
        for(int i = 0; i < pos; i++){
            sum1 += a[i];
        }
        cout << sum - 2 * sum1 << endl;
    }
}