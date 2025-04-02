#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int a[k + 1];
        for(int i = 1; i <= k; i++){
            cin >> a[i];
        }
        int j = k;
        while(j >= 1){
            if(a[j] < n - k + j){
                a[j]++;
                for(int i = j + 1; i <= k; i++){
                    a[i] = a[j] + i - j;
                }
                for(int i = 1; i <= k; i++){
                    cout << a[i] << " ";
                }
                break;
            }
            j--;
        }
        if(j == 0){
            for(int i = 1; i <= k; i++){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}