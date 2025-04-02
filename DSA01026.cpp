#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[2] = {6, 8};
void check(){
    if(a[1] == 8 || (a[n] == 6 && a[n - 1] == 6 && a[n - 2] == 6)){
        return;
    }
    for(int i = 1; i <= n; i++){
        if(a[i] == 8 && a[i + 1] == 8){
            return;
        }
        if(a[i] == 6 && a[i + 1] == 6 && a[i + 2] == 6 && a[i + 3] == 6){
            return;
        }
    }
    cout << 8;
    for(int i = 1; i <= n; i++){
        cout << a[i];
    }
    cout << 6 << endl;
}
void Try(int i){
    for(int j = 0; j <= 1; j++){
        a[i] = b[j];
        if(i == n){
            check();
        }
        else Try(i + 1);
    }
}
int main(){
    cin >> n;
    n -= 2;
    Try(1);
}