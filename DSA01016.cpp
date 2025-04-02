#include <bits/stdc++.h>
using namespace std;
int n, a[100];
void out(int i){
    cout << "(";
    for(int j = 0; j <= i; j++){
        cout << a[j];
        if(j < i){
            cout << " ";
        }
    }
    cout << ") ";
}
void Try(int i, int sum, int pre){
    for(int j = pre; j >= 1; j--){
        if(sum + j > n) continue;
        a[i] = j;
        if(a[i] + sum == n){
            out(i);
        }
        else Try(i + 1, a[i] + sum, j);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        Try(0, 0, n);
        cout << endl;
    }
}