#include <bits/stdc++.h>
using namespace std;
int check(int n){
    int cnt = 4;
    int m = sqrt(n);
    if(m * m == n){ return 1;}
    for(int i = 1; i <= m; i++){
        for(int j = i; j <= m; j++){
            if(i * i + j * j > n){
                continue;
            }
            if(i * i + j * j == n){
                cnt = min(cnt, 2);
            }
            for(int l = j; l <= m; l++){
                if(i * i + j * j + l * l == n){
                    cnt = min(cnt, 3);
                }
            }
            
        }
    }
    return cnt;
}
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << check(n) << endl;
    }
}