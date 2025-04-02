#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], tmp;
string x[100], y[100];
void solve(){
    for(int i = 0; i < n; i++){
        for(int j = 0; j < k; j++){
            x[i][j] = y[i][a[j]];
        }
    }
    sort(x, x + n);
    int minn = stoi(x[0]);
    int maxx = stoi(x[n - 1]);
    tmp = min(tmp, maxx - minn);
}
void Try(int i){
    for(int j = 0; j < k; j++){
        if(!b[j]){
            a[i] = j;
            b[j] = 1;
            if(i == k - 1){
                solve();
            }
            else Try(i + 1);
            b[j] = 0;
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 0; i < n; i++){
        cin >> x[i];
        y[i] = x[i];
    }
    tmp = INT_MAX;
    Try(0);
    cout << tmp << endl;
}