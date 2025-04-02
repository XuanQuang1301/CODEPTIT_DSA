#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n, k, a[1000], sum, cnt;
void Try(int s, int pre){
    if(pre == k){
        cnt++;
    }
    for(int i = 0; i < n; i++){
        if(s + a[i] == sum){
            Try(0, pre + 1);
        }
        else Try(a[i] + s, pre);
    }
}
int main(){
    cin >> n >> k;
    memset(a, 0, sizeof(a));
    sum = 0;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        sum += a[i];
    }
    sort(a, a + n);
    if(sum % k != 0){
        cout << 0 << endl;
    }
    else{
        sum /= k;
        cnt = 0;
        Try(0, 0);
        cout << cnt  << endl;
    }
}