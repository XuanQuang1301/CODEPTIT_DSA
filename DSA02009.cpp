#include <bits/stdc++.h>
using namespace std;
int n, x, s, check;
int a[100];
void Try(int sum, int ans){
    if(check) return;
    if(ans == x){
        check = 1;
        return;
    }
    for(int i = 0; i < n; i++){
        if(sum == s){
            Try(0, ans + 1);
        }
        else if(sum < s){
            Try(sum + a[i], ans);
        }
        else return;
    }
}
int main(){
    int t;
    cin >> t;
    while(t--){
        cin >> n >> x;
        check = 0;
        s = 0;
        for(int i = 0; i < n; i++){
            cin >> a[i];
            s += a[i];
        }
        if(s % x != 0){
            cout << 0 << endl;
        }
        else{
            s /= x;
            Try(0, 0);
            cout << (check ? 1 : 0) << endl;
        }
    }
}