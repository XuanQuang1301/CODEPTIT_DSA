#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100], cnt;
void out(){
    for(int i = 1; i <= k; i++){
        cout << b[i] << " ";
    }
    cout << endl;
}
void Try(int i, int pre){
    for(int j = pre + 1; j <= n; j++){
        if(b[i - 1] > a[j]){
            continue;
        }
        else{
            b[i] = a[j];
            if(i == k){
                // out();
                cnt++;
            }
            else Try(i + 1, j);
        }
    }
}
int main(){
    cin >> n >> k;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Try(1, 0);
    cout << cnt << endl;
}