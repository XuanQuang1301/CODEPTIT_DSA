#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], b[100];
set<vector<int>> SE;
void Try(int i){
    for(int j = i; j <= n; j++){
        if(a[j] > b[i - 1]){
            b[i] = a[j];
            if(i == k){
                for(int x = 1; x <= k; x++){
                    cout << b[x] << " ";
                }
                cout << endl;
            }
            else Try(i + 1);
        }  
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        a[0] = b[0] = 0;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1); 
        Try(1);
    }
}