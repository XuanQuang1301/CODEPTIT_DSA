#include <bits/stdc++.h>
using namespace std;
long long MOD = 123456789;
long long poW(long long n, long long k){
    if(k == 0){
        return 1;
    }
    long long x = poW(n, k / 2) % MOD;
    if(k % 2 == 0){
        return (x * x) % MOD;
    }
    else return ((x * x) % MOD * n % MOD);
}
int main(){
    int t; cin >> t;
    while(t--){
        long long n;
        cin >> n;
        cout << poW(2, n - 1) << endl;  
    }
}