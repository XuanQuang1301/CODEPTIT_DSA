#include <bits/stdc++.h>
using namespace std;
int a[100], b[100], n;
set<vector<int>> VE;
void Try(int i, int sum, int pre){
    for(int j = pre; j < n; j++){
        b[i] = a[j];
        if((sum + a[j]) % 2 != 00){
            vector<int> v;
            for(int x = 1; x <= i; x++){
                v.push_back(b[x]);
            }
            sort(v.rbegin(), v.rend());
            VE.insert(v);
        }
        Try(i + 1, sum + a[j], j + 1);
    }
}
bool cmp(int a, int b){
    return a > b;
}
bool CMP(vector<int> a, vector<int> b){
    
    for(int i = 0; i < a.size(); i++){
        if(a[i] != b[i]){
            return a[i] > b[i];
        }
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n, cmp);
        VE.clear();
        
        Try(1, 0, 0);
        for(auto i : VE){
            for(auto j : i){
                cout << j << " ";
            }
            cout << endl;
        }
    }
}