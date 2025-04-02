#include <bits/stdc++.h>
using namespace std;
int n, k, a[100], ok;
set<int> SE;
void Sinh(){
    int i = k;
    while(i > 0 && a[i] == n - k + i){
        i--;
    }
    if(i == 0){
        ok = 1;
    }
    else{
        a[i]++;
        SE.insert(a[i]);
        for(int j = i + 1; j <= k; j++){
            a[j] = a[j - 1] + 1;
            SE.insert(a[j]);
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> k;
        for(int i = 1; i <= k; i++){
            cin >> a[i];
            SE.insert(a[i]); 
        }
        int tmp = SE.size();
        ok = 0;
        Sinh();
        if(ok == 1){
            cout << k << endl;
        }
        else{
            cout << SE.size() - tmp << endl;
        }
        SE.clear();
    }
}