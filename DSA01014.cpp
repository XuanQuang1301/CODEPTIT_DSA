#include <bits/stdc++.h>
using namespace std;
int n, k, s, cnt, a[100];
void check(){
    int sum = 0;
    for(int i = 1; i <= k; i++){
        sum += a[i];
    }
    if(sum == s){
        cnt++;
    }
}
void Try(int i){
    for(int j = a[i - 1] + 1; j <= n; j++){
        a[i] = j;
        if(i == k){
            check();
        }
        Try(i + 1);
    }
}
int main(){
    while(cin >> n >> k >> s){
        if(n == 0 && k == 0 && s == 0){
            break;
        }
        cnt = 0;
        Try(1);
        cout << cnt << endl;
    }
}