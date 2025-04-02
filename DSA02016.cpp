#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], c[100], cnt, n;
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!a[j] && !b[i - j + n] && !c[i + j - 1]){
            a[j] = b[i - j + n] = c[i + j - 1] = 1;
            if(i == n) cnt++;
            else Try(i + 1);
            a[j] = b[i - j + n] = c[i + j - 1] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}