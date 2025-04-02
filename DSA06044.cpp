#include <bits/stdc++.h>
using namespace std;
int  main(){
    int n; cin >> n;
    vector<int> a, b;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(i % 2 == 0){
            a.push_back(x);
        }
        else{
            b.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    int i = 0, j = 0;
    for(int x = 0; x < n; x++){
        if(x % 2 == 0){
            cout << a[i++] << " ";
        }
        else cout << b[j++] << " ";
    }
}