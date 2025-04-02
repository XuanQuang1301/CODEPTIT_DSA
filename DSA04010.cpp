#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; 
        cin >> n;
        int a[n];
        for(auto &i : a) cin >> i;
        int MAX = 0;
        for(int i = 0; i < n; i++){
            int sum = 0;
            for(int j = i; j >= 0; j--){
                sum += a[j];
                MAX = max(MAX, sum);
            }
        }
        cout << MAX << endl;
    }
}