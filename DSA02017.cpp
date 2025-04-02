#include <bits/stdc++.h>
using namespace std;
int a[20][20], b[100], cot[100], dx[100], dy[100], sum;
void check(){
    int tmp = 0;
    for(int i = 1; i <= 8; i++){
        tmp += a[i][b[i]];
    }
    sum = max(sum, tmp);
}
void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(!cot[j] && !dx[i - j + 8] && !dy[i + j - 1]){
            cot[j] = dx[i - j + 8] = dy[i + j - 1] = 1;
            b[i] = j;
            if(i == 8){
                check();
            }
            else Try(i + 1);
            cot[j] = dx[i - j + 8] = dy[i + j - 1] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> a[i][j];
            }
        }
        for(int i = 0; i < 50; i++){
            cot[i] = dx[i] = dy[i] = 0;
        }
        sum = 0;
        Try(1);
        cout << sum << endl;
    }
}