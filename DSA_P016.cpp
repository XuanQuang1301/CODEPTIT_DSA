#include <bits/stdc++.h>
using namespace std;
int sum, x[100][100], y[100], cot[100], d1[100], d2[100];
void check(){
    int cnt = 0;
    for(int i = 1; i <= 8; i++){
        cnt += x[i][y[i]];
    }
    sum = max(sum, cnt);
}
void Try(int i){
    for(int j = 1; j <= 8; j++){
        if(!cot[j] && !d1[i - j + 8] && !d2[i + j - 1]){
            y[i] = j;
            cot[j] = d1[j] = d2[j] = 1;
            if(i == 8){
                check();
            }
            else Try(i + 1);
            cot[j] = d1[i - j + 8] = d2[i + j - 1] = 0;
        }
    }
}
int main(){
    int t; cin >> t;
    for(int k = 1; k <= t; k++){
        for(int i = 1; i <= 8; i++){
            cot[i] = d1[i] = d2[i] = 0;
        }
        for(int i = 1; i <= 8; i++){
            for(int j = 1; j <= 8; j++){
                cin >> x[i][j];
            }
        }
        sum = 0;
        Try(1);
        cout << "Test " << k << ": " << sum << endl;
    }
}