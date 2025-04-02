#include <bits/stdc++.h>
using namespace std;
long long n, a[100][100], b[100], tmp[100];
long long Sum;
void Check(){
    long long ans = 0;
    for(int i = 0; i < n; i++){
        ans += a[i][b[i]];
    }
    if(ans > Sum){
        Sum = ans;
    }
}
void Track(int i){
    for(int j = 0; j < n; j++){
        if(tmp[j]){
            tmp[j] = 0;
            b[i] = j;
            if(i == n - 1){
                Check();
            }
            else Track(i + 1);
            tmp[j] = 1;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < n; i++){
            tmp[i] = 1;
        }
        Sum = 0;
        Track(0);
        cout << Sum << endl;
    }
}