#include <bits/stdc++.h>
using namespace std;
int n, x, a[100], b[100];
vector<vector<int>> VE;

void Try(int i, int sum, int pre){
    for(int j = pre; j < n; j++){
        if(sum + a[j] > x){
            continue;
        }
        b[i] = a[j];
        if(sum + a[j] == x){
            vector<int> v;
            for(int x = 1; x <= i; x++){
                v.push_back(b[x]);
            }
            VE.push_back(v);
        }
        else Try(i + 1, sum + a[j], j);
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        cin >> n >> x;
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        VE.clear();
        Try(1, 0, 0);
        if(VE.size() == 0){
            cout << -1 << endl;
        }
        else {
            cout << VE.size() << " ";
            for(auto i : VE){
                cout << "{";
                string s = "";
                for(auto j : i){
                    s += to_string(j);
                    s += " ";
                }
                s.pop_back();
                cout << s << "} ";
            }
            cout << endl;
        }
    }
}