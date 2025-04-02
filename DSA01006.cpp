#include <bits/stdc++.h>
using namespace std;
int n, a[100], ok;
void ktao(){
    cin >> n;
    for(int i = 1; i <= n; i++){
        a[i] = n - i + 1;
    }
    
}
bool cmp(int a, int b){
    return a > b;
}
void Sinh(){
    int i = n - 1;
    while(i > 0 && a[i] < a[i + 1]){
        i--;
    }
    if(i == 0){
        ok = 0;
    }
    else{
        int j = n;
        while(j > 0 && a[j] > a[i]){
            j--;
        }
        swap(a[i], a[j]);
        sort(a + i + 1, a + n + 1, cmp);

    }
}
int main(){
    int t; cin >> t;
    while(t--){
        ktao();
        ok = 1;
        while(ok){
            for(int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
            Sinh();
        }
        cout << endl;
    }
}