#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n + 1];
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int j = n - 1;
        while(j >= 1 && a[j] > a[j + 1]){
            j--;
        }
        if(j > 0){
            int i = n;
            while(a[j] > a[i]){
                i--;
            }
            swap(a[i], a[j]);
            sort(a + j + 1, a + n + 1);
            for(int i = 1; i <= n; i++){
                cout << a[i] << " ";
            }
        }
        else{
            for(int i = 1; i <= n; i++){
                cout << i << " ";
            }
        }
        cout << endl;
    }
}