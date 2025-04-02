#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long n; cin >> n;
        long long a[n];
        for(auto &i : a) cin >> i;
        long long l[101] = {0}, r[101] = {0};
        l[0] = a[0];
        for(int i = 1; i < n; i++){
            l[i] = a[i];
            for(int j = i - 1; j >= 0; j--){
                if(a[j] < a[i]){
                    l[i] = max(l[i], l[j] + a[i]);
                }
            }
        }
        r[n - 1] = a[n - 1];
        for(int i = n - 2; i >= 0; i--){
            r[i] = a[i];
            for(int j = i + 1; j < n; j++){
                if(a[j] < a[i]){
                    r[i] = max(r[i], r[j] + a[i]);
                }
            }
        }
        long long MAX = 0;
        for(int i = 0; i < n; i++){
            MAX = max(MAX, l[i] + r[i] - a[i]);
        }
        cout << MAX << endl;
    }
}