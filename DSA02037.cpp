#include <bits/stdc++.h>
using namespace std;
int pre[1000001], n,  a[100], b[100];
set<vector<int>> SE;
void SangNT(){
    for(int i = 0; i <= 1000000; i++){
        pre[i] = 1;
    }
    pre[0] = pre[1] = 0;
    for(int i = 2; i <= sqrt(10000000); i++){
        if(pre[i] == 1){
            for(int j = i * i; j <= 1000000; j += i){
                pre[j] = 0;
            }
        }
    }
}

bool cmp(int a, int b){
    return a > b;
}

void Try(int i, int sum, int ans){
    for(int j = ans; j < n; j++){
        b[i] = a[j];
        if(pre[sum + b[i]] == 1){
            vector<int> v;
            for(int x = 1; x <= i; x++){
                v.push_back(b[x]);
            }
            sort(v.rbegin(), v.rend());
            SE.insert(v);
        }
        Try(i + 1, sum + b[i], j + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        SE.clear();
        sort(a, a + n, cmp);
        SangNT();
        Try(1, 0, 0);
        for(auto i : SE){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }
    }
}