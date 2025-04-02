#include <bits/stdc++.h>
using namespace std;
bool cmp(int a, int b){
    return a > b;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        sort(b, b + n, cmp);
        for(int i = 0; i < n / 2; i++){
            cout << b[i] << " " << a[i] << " ";
        }
        if(n % 2 != 0){
            cout << a[n / 2];
        }
        // else{
        //     cout << b[n / 2] << " " << a[n / 2];
        // }
        cout << endl;
    }
}