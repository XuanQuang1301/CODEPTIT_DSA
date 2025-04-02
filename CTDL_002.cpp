#include <bits/stdc++.h>
using namespace std;
int a[11], x[11], n, k;
vector<int> v;
vector<vector<int>> Ve;
void in(int m){
    
    for(int i = 1; i <= m; i++){
        cout << x[i] << " ";
    }
    cout << endl;
}
void Try(int i, int sum, int pre){
    for(int j = pre + 1; j <= n; j++){
        if(sum + a[j] > k) continue;
        v.push_back(a[j]);
        if(sum + a[j] == k){
            Ve.push_back(v);
        }
        else Try(i + 1, sum + a[j], j);
        v.pop_back();
    }
}
int main(){
    cin >> n >> k;
        for(int i = 1; i <= n; i++){
            cin >> a[i];
        }
        sort(a + 1, a + n + 1);
        Try(1, 0, 0);
        sort(Ve.rbegin(), Ve.rend());
        for(auto &it : Ve){
            for(auto z : it){
                cout << z << " ";
            }
            cout << endl;
        }
        cout << Ve.size();
}