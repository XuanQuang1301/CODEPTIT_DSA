#include <bits/stdc++.h>
using namespace std;
int n, p, s, cnt;
int pre[1000001], a[100], b[100];

vector<vector<int>> VE;
void SangNT(){
    for(int i = 0; i <= 1000001; i++){
        pre[i] = 1;
    }
    pre[0] = pre[1] = 0;
    for(int i = 2; i <= 10000; i++){
        if(pre[i]){
            for(int j = i * i; j <= 1000001; j += i){
                pre[j] = 0;
            }
        }
    }
}
void Try(int i, int sum, int pre){
    for(int j = pre; j < cnt; j++){
        if(sum + b[j] > s) continue;
        a[i] = b[j];
        if(i == n && sum + a[i] == s){
            vector<int> v;
            for(int s = 1; s <= n; s++){
                v.push_back(a[s]);
            }
            VE.push_back(v);
        }
        else Try(i + 1, sum + a[i], j + 1);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> p >> s;
        SangNT();
        int j = 0;
        for(int i = p + 1; i <= s; i++){
            if(pre[i]){
                b[j++] = i;
            }
        }
        cnt = j;
        Try(1, 0, 0);
        cout << VE.size() << endl;
        for(auto i : VE){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }
        VE.clear();
    }
}