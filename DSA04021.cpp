#include <bits/stdc++.h>
using namespace std;
long long pre[100];
void Fibo(){
    pre[1] = pre[2] = 1;
    for(int i = 3; i < 100; i++){
        pre[i] = pre[i - 1] + pre[i - 2];
    }
}  
void Try(int n, int k){
    while(true){
        if(n == 1 || n == 2){
            if(n == 1){
                cout << 0 << endl;
            }
            else cout << 1 << endl;
            return;
        }
        if(k <= pre[n - 2]){
            n -= 2;
        }
        else{
            k -= pre[n - 2];
            n -= 1;
        }

    }
}
int main(){
    int t; cin >> t;
    while(t--){
        Fibo();
        long long n, k;
        cin >> n >> k;
        Try(n, k);
    }
}