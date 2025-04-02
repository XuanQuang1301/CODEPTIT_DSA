#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    cout << "Buoc " << 0 << ": " << a[0] << endl;
    for(int i = 1; i < n; i++){
        int j = i - 1, tmp = a[i];
        while(j >= 0 && a[j] > tmp){
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = tmp;
        cout << "Buoc " << i << ": ";
        for(int x = 0; x <= i; x++){
            cout << a[x] << " ";
        }
        cout << endl;
    }
}