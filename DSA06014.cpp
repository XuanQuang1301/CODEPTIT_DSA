#include <bits/stdc++.h>
using namespace std;
int pre[1000001];
void SangNT(){
    for(int i = 0; i <= 1000001; i++){
        pre[i] = 1;
    }
    pre[0] = pre[1] = 0;
    for(int i = 2; i <= sqrt(1000001); i++){
        if(pre[i]){
            for(int j = i * i; j <= 1000001; j += i){
                pre[j] = 0;
            }
        }
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        SangNT();
        bool ok = false;
        for(int i = 2; i <= n / 2; i++){
            if(pre[i] && pre[n - i]){
                cout << i << " " << n - i << endl;
                ok = true;
                break;
            }
        }
        if(!ok) cout << -1 << endl;
    }
}