#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int i = n / 2 - 1, j = n - 1;
        int cnt = 0;
        while(i >= 0 && j >= n / 2){
            if(a[i] * 2 <= a[j]){
                cnt++;
                i--;
                j--;
            }
            else if(a[i] * 2 > a[j]){
                i--;
            }
        }
        cout << n - cnt << endl;
    }
}