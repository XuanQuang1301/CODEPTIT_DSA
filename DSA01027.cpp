#include <bits/stdc++.h>
using namespace std;
int n, a[100], b[100], tmp[100];
void out(){
    for(int i = 1; i <= n; i++){
        cout << b[a[i]] << " ";
    }
    cout << endl;
}
void Try(int i){
    for(int j = 1; j <= n; j++){
        if(!tmp[j]){
            tmp[j] = 1;
            a[i] = j;
            if(i == n){
                out();
            }
            else Try(i + 1);
            tmp[j] = 0;
        }
        
    }
}
int main(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        cin >> b[i];
    }
    sort(b + 1, b + n + 1);
    Try(1);
}