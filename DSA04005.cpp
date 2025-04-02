#include <bits/stdc++.h>
using namespace std;
long long pre[100];
void Fibo(){
    pre[1] = pre[2] = 1;
    for(int i = 3; i <= 100; i++){
        pre[i] = pre[i - 1] + pre[i - 2];
    }
}  
char Try(int n, int k){
    if(n == 1) return 'A';
    if(n == 2) return 'B';
    if(k > pre[n - 2]) return Try(n - 1, k - pre[n - 2]);
    return Try(n - 2, k);
}
int main(){
    int t; cin >> t;
    while(t--){
        Fibo();
        long long n, k;
        cin >> n >> k;
        cout << Try(n, k) << endl;
    }
}