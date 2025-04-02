#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n ; i++){
        bool ok = false;
        for(int j = 0; j < n - 1 - i; j++){
            if(a[j] > a[j + 1]){
                swap(a[j], a[j + 1]);
                ok = true;
            }
        }
        if(!ok) break;
        cout << "Buoc " << i + 1 << ": ";
        for(int j = 0; j < n; j++){
            cout << a[j] << " ";
        }
        cout << endl;
    }
}